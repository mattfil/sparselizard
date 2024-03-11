#pragma once

#include "operation.h"
#include "mf_interpolator.h"

class opspline_nt : public operation
{

private:

	bool reuse = false;
	std::vector<std::shared_ptr<operation>> myarg;       //arguments of the spline: inputs for the interpolation

	lookup_interpolator* myspline;

public:

	opspline_nt(lookup_interpolator* the_interpolator, std::vector<std::shared_ptr<operation>> arg);

	//this is the main interpolation call
	std::vector<std::vector<densemat>> interpolate(elementselector& elemselect, std::vector<double>& evaluationcoordinates, expression* meshdeform);

	densemat multiharmonicinterpolate(int numtimeevals, elementselector& elemselect, std::vector<double>& evaluationcoordinates, expression* meshdeform);

	std::vector<std::shared_ptr<operation>> getarguments(void) { return { myarg }; };

	std::shared_ptr<operation> simplify(std::vector<int> disjregs);

	std::shared_ptr<operation> copy(void);

	void reuseit(bool istobereused) { reuse = istobereused; };

	void print(void) {
		for (const auto& item : myarg)
		{
			std::cout << "spline(";
			item->print();
			std::cout << ")";
		}

	}

};