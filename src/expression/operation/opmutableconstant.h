// sparselizard - Copyright (C) see copyright file.
//
// See the LICENSE file for license information. Please report all
// bugs and problems to <alexandre.halbach at gmail.com>.


#ifndef OPMUTABLECONSTANT_H
#define OPMUTABLECONSTANT_H

#include "operation.h"

class opmutableconstant: public operation
{

    private:
        
        bool reuse = false;
        double constantvalue;

    public:
        
        opmutableconstant(const double val, const bool can_be_simplified = true) : constantvalue(val)
        { ; };
        
        std::vector<std::vector<densemat>> interpolate(elementselector& elemselect, std::vector<double>& evaluationcoordinates, expression* meshdeform);
        densemat multiharmonicinterpolate(int numtimeevals, elementselector& elemselect, std::vector<double>& evaluationcoordinates, expression* meshdeform);
        //nb: is constant only if can be simplified
        bool ismutableconstant(void) { return true; };
        double getvalue(void) { return constantvalue; };
        
        std::shared_ptr<operation> copy(void);
        
        void reuseit(bool istobereused) { reuse = istobereused; };
        
        std::vector<double> evaluate(std::vector<double>& xcoords, std::vector<double>& ycoords, std::vector<double>& zcoords);

        void print(void);
        void update(const double val)
        {
            constantvalue = val;
        }
};

#endif
