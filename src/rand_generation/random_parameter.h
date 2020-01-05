#ifndef GAIG_RANDOM_PARAMETER_H
#define GAIG_RANDOM_PARAMETER_H

#include <random>
#include <cfloat>

class RandomParameterGenerator {
public:
    RandomParameterGenerator();
    virtual double getDouble(double min, double max) = 0;

protected:
    std::random_device randomDevice;
    std::mt19937 seed;
};

#endif //GAIG_RANDOM_PARAMETER_H
