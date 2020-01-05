#ifndef GAIG_UNIFORM_RANDOM_PARAMETER_H
#define GAIG_UNIFORM_RANDOM_PARAMETER_H

#include "random_parameter.h"

class UniformRandomParameterGenerator: protected RandomParameterGenerator {
public:
    UniformRandomParameterGenerator();
    virtual double getDouble(double min, double max);
};

#endif //GAIG_UNIFORM_RANDOM_PARAMETER_H
