#include "population1.h"


population1::population1(int windowWidth, int windowHeight, int circlesNumber, int populationSize, sf::Image targetImage)
	:population(windowWidth, windowHeight, circlesNumber, populationSize, targetImage){}

void population1::mutate(){

	int length = population::getPopulationSize();
	for(int i = 0; i < length; ++i){
		int genesNumberToMutate = rand() % 10;
		currentPopulation.push_back(mutateGenotype(currentPopulation[i]->getGenotype(), genesNumberToMutate));
	}

	for(int i = 0; i < length; ++i){

		int genesNumberToMutate = population::getCirclesNumber()/100;
		
		currentPopulation.push_back(mutateGenotype(currentPopulation[i]->getGenotype(), genesNumberToMutate));
	}
}

void population1::crossOver(){}

void population1::update(){
	
	//time_t test = clock();
	//time_t test_t = clock();

	mutate();
	
	//std::cout << "crossOver: " << float(clock() - test) / CLOCKS_PER_SEC << "\t";
	//test = clock();

	putInOrder();
	//std::cout << "putInOrder: " << float(clock() - test) / CLOCKS_PER_SEC << "\t";
	//test = clock();

	currentPopulation.erase(currentPopulation.begin() + population::getPopulationSize(), currentPopulation.end());

	//std::cout << "erease: " << float(clock() - test) / CLOCKS_PER_SEC <<"\t";

	//std::cout << "total: " << float(clock() - test_t) / CLOCKS_PER_SEC << std::endl<<std::endl;
}
