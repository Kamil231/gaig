#include "populationFactory.h"


populationFactory::populationFactory(populationTypes type, int windowWidth, int windowHeight, int circlesNumber, int populationSize, sf::Image targetImage){
	pPopulation = pPopulation->createPopulation(type, windowWidth, windowHeight, circlesNumber, populationSize, targetImage);
	//std::cout<<populationSize<<std::endl;
}

population* populationFactory::getPopulation(){
		return pPopulation;
}