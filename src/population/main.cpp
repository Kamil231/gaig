#include <iostream>

#include "individual.h"
#include "population.h"
#include <vector>


int main(){
	//std::cout<<"1"<<std::endl;
	individual ind(10, 10, 5);
	population pop(10, 10, 5, 2);
	//std::cout<<"2"<<std::endl;

	std::vector<int> v1 = ind.getGenotype();

	/*for(int i = 0; i < v1.size(); ++i){
		std::cout<<v1[i]<<std::endl;
	}*/

	std::vector<individual> v2 = pop.getCurrentPopulation();

	std::cout<<v2.size()<<std::endl;

	for(int i = 0; i < v2.size(); ++i){
		std::cout<<i<<std::endl;
		std::vector<int> v3 = v2[i].getGenotype();
		for(int i = 0; i < v1.size(); ++i){
			std::cout<<v1[i]<<std::endl;
		}
		std::cout<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl;
	}



	return 0;
}