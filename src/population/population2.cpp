#include "population2.h"


population2::population2(int windowWidth, int windowHeight, int circlesNumber, int populationSize, sf::Image targetImage)
	:population(windowWidth, windowHeight, circlesNumber, populationSize, targetImage){}

void population2::mutate(){

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

void population2::crossOver(){
	int numberCrossed = 0;
	while(numberCrossed < 5){
		int parent1 = rand() % population::getPopulationSize();
        int parent2 = rand() % population::getPopulationSize();

		if(parent1==parent2){
			continue;
		}
		else{
			numberCrossed++;
		}  

        std::vector<int> genotype_1 = currentPopulation[parent1]->getGenotype();
        std::vector<int> genotype_2 = currentPopulation[parent2]->getGenotype();



        std::vector<int> v = getRandomVector(0, population::getCirclesNumber(), 5);

        for(int i = 0; i < v.size(); ++i){
        	std::swap_ranges(genotype_1.begin() + v[i]*currentPopulation[parent1]->getGeneSetLength(), genotype_1.begin() + v[i]*currentPopulation[parent1]->getGeneSetLength() + 47, genotype_2.begin() + v[i]*currentPopulation[parent1]->getGeneSetLength());
        }
        /*
        //individual child1(population::getWindowWidth(), population::getWindowHeight(), population::getCirclesNumber(), genotype_1);
        //individual child2(population::getWindowWidth(), population::getWindowHeight(), population::getCirclesNumber(), genotype_2);
        individualFactory *pIndividualFactory1 = new individualFactory(individualType, population::getWindowWidth(), population::getWindowHeight(), population::getCirclesNumber(), genotype_1);
    	//individual *child1 = pIndividualFactory1->getIndividual();
    	std::unique_ptr<individual> child1 = pIndividualFactory1->getIndividual();
    	individualFactory *pIndividualFactory2 = new individualFactory(individualType, population::getWindowWidth(), population::getWindowHeight(), population::getCirclesNumber(), genotype_2);
    	//individual *child2 = pIndividualFactory2->getIndividual();
    	std::unique_ptr<individual> child2 = pIndividualFactory2->getIndividual();
        //population::setIndividualsFitness(&child1);
		//population::setIndividualsFitness(&child2);
		*/

		individualFactory *pIndividualFactory1 = new individualFactory(individualType, population::getWindowWidth(), population::getWindowHeight(), population::getCirclesNumber(), genotype_1);
    	std::unique_ptr<individual> child1 = pIndividualFactory1->getIndividual();
		setIndividualsFitness(child1);
		currentPopulation.push_back(std::move(child1));
		individualFactory *pIndividualFactory2 = new individualFactory(individualType, population::getWindowWidth(), population::getWindowHeight(), population::getCirclesNumber(), genotype_2);
    	std::unique_ptr<individual> child2 = pIndividualFactory2->getIndividual();
		setIndividualsFitness(child2);
		currentPopulation.push_back(std::move(child2));
    	/*
		population::setIndividualsFitness(child1);
		population::setIndividualsFitness(child2);
        currentPopulation.push_back(child1);
        currentPopulation.push_back(child2);
		*/

        parent1 = rand() % population::getPopulationSize();
        parent2 = rand() % population::getPopulationSize();

        genotype_1 = currentPopulation[parent1]->getGenotype();
        genotype_2 = currentPopulation[parent2]->getGenotype();


        int const_num = 20;

        std::vector<int> crossOverPoints = getRandomVector(0, genotype_1.size() - const_num, 20);

		for(int i = 0; i < crossOverPoints.size(); ++i){
			int length = rand() % const_num;
			std::swap_ranges(genotype_1.begin() + crossOverPoints[i], genotype_1.begin() + crossOverPoints[i] + length, genotype_2.begin() + crossOverPoints[i]);
		}


		individualFactory *pIndividualFactory3 = new individualFactory(individualType, population::getWindowWidth(), population::getWindowHeight(), population::getCirclesNumber(), genotype_1);
    	std::unique_ptr<individual> child3 = pIndividualFactory3->getIndividual();
		setIndividualsFitness(child3);
		currentPopulation.push_back(std::move(child3));
		individualFactory *pIndividualFactory4 = new individualFactory(individualType, population::getWindowWidth(), population::getWindowHeight(), population::getCirclesNumber(), genotype_2);
    	std::unique_ptr<individual> child4 = pIndividualFactory4->getIndividual();
		setIndividualsFitness(child4);
		currentPopulation.push_back(std::move(child4));
		/*

		//individual child3(population::getWindowWidth(), population::getWindowHeight(), population::getCirclesNumber(), genotype_1);
        //individual child4(population::getWindowWidth(), population::getWindowHeight(), population::getCirclesNumber(), genotype_2);
        individualFactory *pIndividualFactory3 = new individualFactory(individualType, population::getWindowWidth(), population::getWindowHeight(), population::getCirclesNumber(), genotype_1);
    	//individual *child3 = pIndividualFactory3->getIndividual();
    	std::unique_ptr<individual> child3 = pIndividualFactory3->getIndividual();
    	individualFactory *pIndividualFactory4 = new individualFactory(individualType, population::getWindowWidth(), population::getWindowHeight(), population::getCirclesNumber(), genotype_2);
    	//individual *child4 = pIndividualFactory4->getIndividual();
    	std::unique_ptr<individual> child4 = pIndividualFactory4->getIndividual();
        //population::setIndividualsFitness(&child3);
		//population::setIndividualsFitness(&child4);
		population::setIndividualsFitness(child3);
		population::setIndividualsFitness(child4);
        currentPopulation.push_back(child3);
        currentPopulation.push_back(child4);
        
		*/

        genotype_1.clear();
		genotype_2.clear();
		

		

	}
	
}
      

void population2::update(){

	
	
	//time_t test = clock();
	//time_t test_t = clock();


	crossOver();


	//std::cout << std::endl << "mutate: " << float(clock() - test) / CLOCKS_PER_SEC << "\t";
	//test = clock();

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

