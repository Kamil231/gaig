#ifndef GAIG_POPULATION2_H
#define GAIG_POPULATION2_H

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



class population1 : public population {

protected:

	void mutate();
	void crossOver();

public:

	population1(int windowWidth, int windowHeight, int circlesNumber, int populationSize, sf::Image targetImage);

	void update();

};


#endif 