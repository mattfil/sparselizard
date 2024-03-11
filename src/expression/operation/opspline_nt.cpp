#include "opspline_nt.h"

opspline_nt::opspline_nt(lookup_interpolator* the_interpolator, std::vector<std::shared_ptr<operation>> arg) : myspline(the_interpolator), myarg(arg)
{
    ;
}

//this is the main interpolation call
std::vector<std::vector<densemat>> opspline_nt::interpolate(elementselector& elemselect, std::vector<double>& evaluationcoordinates, expression* meshdeform)
{
    // Get the value from the universe if available and reuse is enabled:
    if (reuse && universe::isreuseallowed)
    {
        int precomputedindex = universe::getindexofprecomputedvalue(shared_from_this());
        if (precomputedindex >= 0) { return universe::getprecomputed(precomputedindex); }
    }

    std::vector<densemat> to_evaluate;
    std::vector<double*> pointers2data;
    int changing_component = 0;
    for (const auto& item : myarg)
    {
        auto tmp = item->interpolate(elemselect, evaluationcoordinates, meshdeform);
        if (tmp.size() != 2 && tmp[1].size() != 1)
        {
            logs log;
            log.msg() << "Error in 'opspline' object: without FFT a spline can only be interpolated for constant (harmonic 1) operations" << std::endl;
            log.error();

            throw std::runtime_error(""); // fix return warning
        }
        to_evaluate.push_back(tmp[1][0]);
        pointers2data.push_back(to_evaluate.back().getvalues());
    }

    auto interpolated_values = myspline->interpolate(pointers2data, to_evaluate[0].count());
    std::vector<std::vector<densemat>> toret;
    toret.resize(2);
    toret[1] = { densemat(interpolated_values.size(),1, interpolated_values) };
    if (reuse && universe::isreuseallowed)
    	universe::setprecomputed(shared_from_this(), toret);

    return toret;



}
densemat opspline_nt::multiharmonicinterpolate(int numtimeevals, elementselector& elemselect, std::vector<double>& evaluationcoordinates, expression* meshdeform)
{
    // Get the value from the universe if available and reuse is enabled:
    if (reuse && universe::isreuseallowed)
    {
        int precomputedindex = universe::getindexofprecomputedvaluefft(shared_from_this());
        if (precomputedindex >= 0) { return universe::getprecomputedfft(precomputedindex); }
    }

    std::vector<densemat> to_evaluate;
    std::vector<double*> pointers2data;

    for (const auto& item : myarg)
    {
        to_evaluate.push_back(item->multiharmonicinterpolate(numtimeevals, elemselect, evaluationcoordinates, meshdeform));
        pointers2data.push_back(to_evaluate.back().getvalues());
    }

    auto tmpval = myspline->interpolate(pointers2data, to_evaluate[0].count());
    densemat output(tmpval.size(), 1, tmpval);

    if (reuse && universe::isreuseallowed)
    	universe::setprecomputedfft(shared_from_this(), output);

    return output;
}


std::shared_ptr<operation> opspline_nt::simplify(std::vector<int> disjregs) {
    for (auto& item : myarg)
        item = item->simplify(disjregs);

    return shared_from_this();
}

std::shared_ptr<operation> opspline_nt::copy(void) {
    std::shared_ptr<opspline_nt> op(new opspline_nt(myspline, myarg));
    *op = *this;
    op->reuse = false;
    return op;
}
