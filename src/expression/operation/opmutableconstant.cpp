#include "opmutableconstant.h"


std::vector<std::vector<densemat>> opmutableconstant::interpolate(elementselector& elemselect, std::vector<double>& evaluationcoordinates, expression* meshdeform)
{
    densemat output(elemselect.countinselection(), evaluationcoordinates.size()/3, constantvalue);
    
    // The constant is on the cos0 harmonic:
    return {{},{output}};
}

densemat opmutableconstant::multiharmonicinterpolate(int numtimeevals, elementselector& elemselect, std::vector<double>& evaluationcoordinates, expression* meshdeform)
{
    densemat output(numtimeevals, elemselect.countinselection() * evaluationcoordinates.size()/3, constantvalue);
    
    return output;
}

std::shared_ptr<operation> opmutableconstant::copy(void)
{
    std::shared_ptr<opmutableconstant> op = std::make_shared<opmutableconstant>(constantvalue);
    *op = *this;
    op->reuse = false;
    return op;
}

std::vector<double> opmutableconstant::evaluate(std::vector<double>& xcoords, std::vector<double>& ycoords, std::vector<double>& zcoords)
{
    std::vector<double> evaluated(xcoords.size(), constantvalue);
    return evaluated;
}

void opmutableconstant::print(void) { std::cout << constantvalue; }
