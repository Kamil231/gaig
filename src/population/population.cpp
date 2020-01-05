#include "population.h"

#include "population1.h"
#include "population2.h"


population::population(int windowWidth, int windowHeight, int circlesNumber, int populationSize, sf::Image targetImage){
	std::cout<<"POP"<<std::endl;
	this->windowWidth = windowWidth;
	this->windowHeight = windowHeight;
	this->populationSize = populationSize;
	this->circlesNumber = circlesNumber;
	sf::Vector2<unsigned int> size = targetImage.getSize();
	setTargetImage(targetImage);
	for(int i = 0; i < populationSize; ++i){


		individualFactory *pIndividualFactory = new individualFactory(individualType, population::getWindowWidth(), population::getWindowHeight(), population::getCirclesNumber());
    	std::unique_ptr<individual> newIndividual = std::move(pIndividualFactory->getIndividual());

		setIndividualsFitness(newIndividual);
		currentPopulation.push_back(std::move(newIndividual));
	}
}

void population::setIndividualsFitness(std::unique_ptr<individual> &ind){
	int fitnessValue = 0;
	const uint8_t* arr1 = ind->getImage().getPixelsPtr();
	const uint8_t* arr2 = targetImage.getPixelsPtr();
	for(int i = 0; i < windowWidth*windowHeight*4; ++i){
		fitnessValue = fitnessValue + abs(arr1[i] - arr2[i]);
	}

	ind->setFitness(fitnessValue);
}

void population::putInOrder(){ //bubbleSort
	for( int i = 0; i < currentPopulation.size(); ++i){
		for(int j = 0; j < currentPopulation.size() - i - 1; ++j){
			if(currentPopulation[j]->getFitness() > currentPopulation[j + 1]->getFitness()){
				std::swap(currentPopulation[j], currentPopulation[j+1]);
			}
		}
	}
}

std::unique_ptr<individual> population::mutateGenotype(std::vector<int> genotype, int genesNumberToMutate){
	std::vector<int> genesLocations = getRandomVector(0, genotype.size(), genesNumberToMutate);
	for(int i = 0; i < genesLocations.size(); ++i){
		if(genotype[genesLocations[i]] == 0){
			genotype[genesLocations[i]] = 1;
		}
		else{
			genotype[genesLocations[i]] = 0;
		}
	}

	individualFactory *pIndividualFactory = new individualFactory(individualType, population::getWindowWidth(), population::getWindowHeight(), population::getCirclesNumber(), genotype);
    std::unique_ptr<individual> newIndividual = pIndividualFactory->getIndividual();
	setIndividualsFitness(newIndividual);

	return std::move(newIndividual);
}

std::vector<int> population::getRandomVector(int min, int max, int length){
	std::vector<int> result;
	for(int i = 0; i < length; ++i){
		result.push_back(rand() % max + min);
	}

	return result;
}

population* population::createPopulation(populationTypes type, int windowWidth, int windowHeight, int circlesNumber, int populationSize, sf::Image targetImage){
	int x = MAX_RADIUS;
	if(type == populationTypes::populationType1){
		population1 *Pop = new population1(windowWidth, windowHeight, circlesNumber, populationSize, targetImage);
		return Pop;
	}
	else if(type == populationTypes::populationType2){
		population2 *Pop = new population2(windowWidth, windowHeight, circlesNumber, populationSize, targetImage);
		return Pop;
	}
	else return NULL;
}

std::vector<std::unique_ptr<individual>>& population::getCurrentPopulation()  {

	return currentPopulation;
}
const std::unique_ptr<individual>& population::getBestIndividual() const{
	
	return currentPopulation[0];
}

void population::setWindowWidth(int windowWidth){

	this->windowWidth = windowWidth;
}
int population::getWindowWidth(){

	return windowWidth;
}

void population::setWindowHeight(int windowHeight){

	this->windowHeight = windowHeight;
}
int population::getWindowHeight(){

	return windowHeight;
}

void population::setPopulationSize(int populationSize){

	this->populationSize = populationSize;
}
int population::getPopulationSize(){

	return populationSize;
}

void population::setCirclesNumber(int circlesNumber){

	this->circlesNumber = circlesNumber;
}
int population::getCirclesNumber(){

	return circlesNumber;
}

void population::setTargetImage(sf::Image targetImage){

	this->targetImage.create(population::getWindowWidth(), population::getWindowHeight(), targetImage.getPixelsPtr());
}
sf::Image population::getTargetImage(){

	return targetImage;
}




