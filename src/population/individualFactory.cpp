#include "individualFactory.h"


individualFactory::individualFactory(individualTypes type, int windowWidth, int windowHeight, int circlesNumber){
	pIndividual = pIndividual->createIndividual(type, windowWidth, windowHeight, circlesNumber);
}

individualFactory::individualFactory(individualTypes type, int windowWidth, int windowHeight, int circlesNumber, std::vector<int> genotype){
	pIndividual = pIndividual->createIndividual(type, windowWidth, windowHeight, circlesNumber, genotype);
}


std::unique_ptr<individual> individualFactory::getIndividual(){
		return std::move(pIndividual);
}