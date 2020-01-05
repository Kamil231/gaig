#include "uniform_random_parameter.h"

UniformRandomParameterGenerator::UniformRandomParameterGenerator() : RandomParameterGenerator() {
    seed = std::mt19937(randomDevice());
}

double UniformRandomParameterGenerator::getDouble(double min, double max) {
    std::uniform_real_distribution<double> dist(min, std::nextafter(max, DBL_MAX));
    return dist(seed);
}