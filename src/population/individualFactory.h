#ifndef GAIG_INDIVIDUAL_FACTORY_H
#define GAIG_INDIVIDUAL_FACTORY_H

#include <iostream>
#include "individual.h"
#include <string>
#include "../const/evolution_constants.h"
#include <memory>

class individualFactory{
private:

	std::unique_ptr<individual> pIndividual;

public:

	individualFactory(individualTypes type, int windowWidth, int windowHeight, int circlesNumber);
	individualFactory(individualTypes type, int windowWidth, int windowHeight, int circlesNumber, std::vector<int> genotype);

	std::unique_ptr<individual> getIndividual();

};

#endif