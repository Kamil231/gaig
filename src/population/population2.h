#ifndef GAIG_POPULATION1_H
#define GAIG_POPULATION1_H

#include <iostream>
#include <vector>
#include "individual.h"
#include "population.h"
#include <Graphics/Image.hpp>
#include <Graphics/Color.hpp>
#include <cmath>
#include <typeinfo>
#include <time.h>
#include <iomanip>

#include <population/individualFactory.h>




class population2 : public population {

protected:

	void mutate();
	void crossOver();

public:


	population2(int windowWidth, int windowHeight, int circlesNumber, int populationSize, sf::Image targetImage);

	void update();

};


#endif 