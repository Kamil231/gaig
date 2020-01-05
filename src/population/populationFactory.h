#ifndef GAIG_POPULATION_FACTORY_H
#define GAIG_POPULATION_FACTORY_H

#include <iostream>
#include "population.h"
#include <string>
#include "../const/evolution_constants.h"


class populationFactory{
private:

	population *pPopulation;


public:

	populationFactory(populationTypes type, int windowWidth, int windowHeight, int circlesNumber, int populationSize, sf::Image targetImage);

	population* getPopulation();


};

#endif