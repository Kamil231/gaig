#ifndef GAIG_POPULATION_H
#define GAIG_POPULATION_H

#include <iostream>
#include <vector>
#include "individual.h"
#include <Graphics/Image.hpp>
#include <Graphics/Color.hpp>
#include <cmath>
#include <typeinfo>
#include <time.h>
#include <iomanip>
#include "../const/evolution_constants.h"
#include <population/individualFactory.h>


class population{
private:

	int windowWidth;
	int windowHeight;
	int populationSize;
	int circlesNumber;
	sf::Image targetImage;

protected:

	std::vector<std::unique_ptr<individual>> currentPopulation;
	
	void putInOrder();
	virtual void mutate() = 0;
	virtual void crossOver() = 0;

public:

	population(int windowWidth, int windowHeight, int circlesNumber, int populationSize, sf::Image targetImage);

	virtual void update() = 0;

	std::vector<int> getRandomVector(int min, int max, int length);

	std::unique_ptr<individual> mutateGenotype(std::vector<int> genotype, int genesNumberToMutate);

	void setIndividualsFitness(std::unique_ptr<individual> &ind);

	population* createPopulation(populationTypes type, int windowWidth, int windowHeight, int circlesNumber, int populationSize, sf::Image targetImage);

	std::vector<std::unique_ptr<individual>>& getCurrentPopulation();
	const std::unique_ptr<individual>& getBestIndividual() const;

	void setWindowWidth(int windowWidth);
	int getWindowWidth();

	void setWindowHeight(int windowHeight);
	int getWindowHeight();

	void setPopulationSize(int populationSize);
	int getPopulationSize();

	void setCirclesNumber(int circlesNumber);
	int getCirclesNumber();

	void setTargetImage(sf::Image targetImage);
	sf::Image  getTargetImage();


};

#endif