#include "individual.h"
#include "individual1.h"
#include "individual2.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <vector>

#include <Graphics/RenderWindow.hpp>
#include <Graphics/Texture.hpp>
#include <Graphics/Sprite.hpp>
#include <Graphics/Color.hpp>
#include <Graphics/Image.hpp>



individual::individual(int windowWidth, int windowHeight, int circlesNumber){
	this->xGenes = getBinarySize(windowWidth);
	this->yGenes = getBinarySize(windowHeight);
	this->windowHeight = windowHeight; 
	this->windowWidth = windowWidth;
	this->circlesNumber = circlesNumber;
	this->maxRadiusBinary = 5;
}

//individual* individual::createIndividual(individualTypes type, int windowWidth, int windowHeight, int circlesNumber){
std::unique_ptr<individual> individual::createIndividual(individualTypes type, int windowWidth, int windowHeight, int circlesNumber){

	if(type == individualTypes::individualType1){
		//individual1 *ind = new individual1(windowWidth, windowHeight, circlesNumber);
		std::unique_ptr<individual1> ind( new individual1(windowWidth, windowHeight, circlesNumber));
		return ind;
	}
	else if(type == individualTypes::individualType2){
		std::unique_ptr<individual2> ind( new individual2(windowWidth, windowHeight, circlesNumber));
		return ind;
	}
	else return NULL;
}

//individual* individual::createIndividual(individualTypes type, int windowWidth, int windowHeight, int circlesNumber, std::vector<int> genotype){
std::unique_ptr<individual> individual::createIndividual(individualTypes type, int windowWidth, int windowHeight, int circlesNumber, std::vector<int> genotype){

	if(type == individualTypes::individualType1){
		//individual1 *ind = new individual1(windowWidth, windowHeight, circlesNumber, genotype);
		std::unique_ptr<individual1> ind( new individual1(windowWidth, windowHeight, circlesNumber, genotype));
		return ind;
	}
	else if(type == individualTypes::individualType2){
		std::unique_ptr<individual2> ind( new individual2(windowWidth, windowHeight, circlesNumber, genotype));
		return ind;
	}
	else return NULL;
}

int individual::getDecimalNumber(std::vector<int> v){
	int result = 0;

	for(int i = 0; i < v.size(); ++i){
		result = result + pow(2, i) * v[i];

	}
	
	return result;
}

std::vector<int> individual::getBinaryNumber(int decNumber, int length){//, int length){

	std::vector<int> result;
	int i = 0;
	int tempDec = decNumber;
	while(tempDec > 0){
		result.push_back(tempDec % 2);
		tempDec = tempDec / 2;
		i++;
	}

	/*if(result.size() < length){
		int temp = result.size();
		for(int j = 0; j < length - temp; ++j){
			result.push_back(0);
		}
	}*/

	while(result.size() < length){
		
		result.push_back(0);

		
	}

	if(decNumber != getDecimalNumber(result) || result.size() != length){
		std::cout<<decNumber<<"\t"<<length<<"\t";
		for(int j = 0; j < result.size(); ++j){
			std::cout<<result[j];
		}
		std::cout<<std::endl;
		std::cout<<"ERROR!"<<std::endl;	
	}

	return result;
}

int individual::getBinarySize(int input){
	/*int x = 0;
	int p = 0;
	while(x < input){
		x = x + pow(2, p);
		p++;
	}
	p--;
	return p;*/
	std::vector<int> vBinary;
	int i = 0;
	int tempDec = input;
	while(tempDec > 0){
		vBinary.push_back(tempDec % 2);
		tempDec = tempDec / 2;
		i++;
	}

	return vBinary.size();

}

/*std::vector<std::vector<int>> individual::getCirclesData(){

	int i = 0;
	std::vector<int> px;
	std::vector<int> py;
	std::vector<int> pr;
	std::vector<int> pg;
	std::vector<int> pb;
	//std::vector<int> palfa;
	std::vector<int> pRadius;
	std::vector<std::vector<int>> genotypeDecimal;

	while(i < genotype.size()){
		for(int j=i; j<i+xGenes; j++){
			px.push_back(genotype[j]);
		}
		for(int j=i+xGenes; j<i+xGenes+yGenes; j++){
			py.push_back(genotype[j]);
		}
		for(int j=i+xGenes+yGenes; j<i+xGenes+yGenes+8; j++){
			pr.push_back(genotype[j]);
		}
		for(int j=i+xGenes+yGenes+8; j<i+xGenes+yGenes+8+8; j++){
			pg.push_back(genotype[j]);
		}
		for(int j=i+xGenes+yGenes+8+8; j<i+xGenes+yGenes+8+8+8; j++){
			pb.push_back(genotype[j]);
		}
		//for(int j=i+xGenes+yGenes+8+8+8; j<i+xGenes+yGenes+8+8+8+8; j++){
			//palfa.push_back(genotype[j]);
		//}
		for(int j=i+xGenes+yGenes+8+8+8; j<i+xGenes+yGenes+8+8+8+maxRadiusBinary; j++){
			pRadius.push_back(genotype[j]);
		}

		i = i + xGenes+yGenes+8+8+8+maxRadiusBinary;

		std::vector<int> gene;
		gene.push_back(getDecimalNumber(px));
		gene.push_back(getDecimalNumber(py));
		gene.push_back(getDecimalNumber(pr));
		gene.push_back(getDecimalNumber(pg));
		gene.push_back(getDecimalNumber(pb));
		gene.push_back(100);
		gene.push_back(getDecimalNumber(pRadius));


		px.clear();
		py.clear();
		pr.clear();
		pg.clear();
		pb.clear();
		//palfa.clear();
		pRadius.clear();
		genotypeDecimal.push_back(gene);


	}

	return genotypeDecimal;
}*/

std::vector<int> individual::getGenotype(){
	
	return genotype;
}

void individual::setGenotype(std::vector<int> newGenotype){

	genotype.assign(newGenotype.begin(), newGenotype.end());
}

void individual::mutateGene(int i){
	if(genotype[i] == 0){
		genotype[i] = 1;
	}
	else{
		genotype[i] = 0;
	}
}

int individual::setFitness(int fitness){
	
	this->fitness = fitness;
}

int individual::getFitness(){
	
	return fitness;
}

/*void individual::updateIndividualsImage(){

	std::vector<std::vector<int>> circlesData = getCirclesData();
	sf::RenderTexture rTexture;
	rTexture.create(windowWidth, windowHeight);

	for(int i = 0; i < circlesData.size(); ++i){
		
		sf::CircleShape circle(circlesData[i][6]);
		circle.setPosition(circlesData[i][0] - circlesData[i][6],circlesData[i][1] - circlesData[i][6]);
		circle.setFillColor(sf::Color(circlesData[i][2], circlesData[i][3], circlesData[i][4], circlesData[i][5]));
		rTexture.draw(circle);
		rTexture.display();
	}

	sf::Texture texture;
	texture = rTexture.getTexture();

	this->individualsImage = texture.copyToImage();
}*/

sf::Image individual::getImage(){
	
	return individualsImage;
}

int individual::getChromosomeLength(){
	
	return chromosomeLength;
}
void individual::setChromosomeLength(int chromosomeLength){
	
	this->chromosomeLength = chromosomeLength;
}

int individual::getCirclesNumber(){
	
	return circlesNumber;
}

int individual::getGeneSetLength(){
	
	return geneSetLength;
}
void individual::setGeneSetLength(int geneSetLength){
	
	this->geneSetLength = geneSetLength;
}

void individual::setGene(int pos, int value){
	
	genotype[pos] = value;
}

int individual::getGene(int pos){
	
	return genotype[pos];
}

int individual::getGenotypeSize(){
	
	return genotype.size();
}

int individual::getXGenes(){
	
	return xGenes;
}

int individual::getYGenes(){

	return yGenes;
}

int individual::getMaxRadiusBinary(){

	return maxRadiusBinary;
}

int individual::getWindowWidth(){
	
	return windowWidth;
}
int individual::getWindowHeight(){

	return windowHeight;
}
