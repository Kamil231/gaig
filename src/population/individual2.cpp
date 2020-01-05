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


individual2::individual2(int windowWidth, int windowHeight, int circlesNumber)
	:individual(windowWidth, windowHeight, circlesNumber){
	
	individual::setGeneSetLength(individual::getXGenes() + individual::getYGenes() + 8 + 8 + 8 + 8 + individual::getMaxRadiusBinary());
	individual::setChromosomeLength((individual::getXGenes() + individual::getYGenes() + 8 + 8 + 8 + 8 + individual::getMaxRadiusBinary()) * circlesNumber);
	for(int i = 0; i < individual::getChromosomeLength(); ++i){//r+g+b+radius
		if(i % individual::getGeneSetLength() != 0){
			genotype.push_back(rand()%2);
		}
		else{
			int x = rand() % windowWidth;
			int y = rand() % windowHeight;

			std::vector<int> xBinary = getBinaryNumber(x, individual::getBinarySize(windowWidth));

			std::vector<int> yBinary = getBinaryNumber(y, individual::getBinarySize(windowHeight));

			if(xBinary.size() != individual::getBinarySize(windowWidth) || yBinary.size() != individual::getBinarySize(windowHeight)){
				std::cout<<"error"<<std::endl;
			}
			for(int j = 0; j < xBinary.size(); ++j){
				genotype.push_back(xBinary[j]);
				++i;
			}
			for(int j = 0; j < yBinary.size(); ++j){
				genotype.push_back(yBinary[j]);
				++i;
			}
			--i;
		}
	}


	individual::setFitness(0);
	updateIndividualsImage();
}

individual2::individual2(int windowWidth, int windowHeight, int circlesNumber, std::vector<int> genotype)
	:individual(windowWidth, windowHeight, circlesNumber){

	individual::setGeneSetLength(individual::getXGenes() + individual::getYGenes() + 8 + 8 + 8 + 8 + individual::getMaxRadiusBinary());
	individual::setChromosomeLength(individual::getXGenes() + individual::getYGenes() + 8 + 8 + 8 + 8 + individual::getMaxRadiusBinary() * circlesNumber);

	this->genotype.assign(genotype.begin(), genotype.end());
	
	individual::setFitness(0);
	updateIndividualsImage();
}

std::vector<std::vector<int>> individual2::getCirclesData(){

	int i = 0;
	std::vector<int> px;
	std::vector<int> py;
	std::vector<int> pr;
	std::vector<int> pg;
	std::vector<int> pb;
	std::vector<int> palfa;
	std::vector<int> pRadius;
	std::vector<std::vector<int>> genotypeDecimal;

	while(i < genotype.size()){
		for(int j=i; j<i+individual::getXGenes(); j++){
			px.push_back(genotype[j]);
		}
		for(int j=i+individual::getXGenes(); j<i+individual::getXGenes()+individual::getYGenes(); j++){
			py.push_back(genotype[j]);
		}
		for(int j=i+individual::getXGenes()+individual::getYGenes(); j<i+individual::getXGenes()+individual::getYGenes()+8; j++){
			pr.push_back(genotype[j]);
		}
		for(int j=i+individual::getXGenes()+individual::getYGenes()+8; j<i+individual::getXGenes()+individual::getYGenes()+8+8; j++){
			pg.push_back(genotype[j]);
		}
		for(int j=i+individual::getXGenes()+individual::getYGenes()+8+8; j<i+individual::getXGenes()+individual::getYGenes()+8+8+8; j++){
			pb.push_back(genotype[j]);
		}
		for(int j=i+individual::getXGenes()+individual::getYGenes()+8+8+8; j<i+individual::getXGenes()+individual::getYGenes()+8+8+8+8; j++){
			palfa.push_back(genotype[j]);
		}
		for(int j=i+individual::getXGenes()+individual::getYGenes()+8+8+8+8; j<i+individual::getXGenes()+individual::getYGenes()+8+8+8+8+individual::getMaxRadiusBinary(); j++){
			pRadius.push_back(genotype[j]);
		}

		i = i + individual::getXGenes()+individual::getYGenes()+8+8+8+8+individual::getMaxRadiusBinary();

		std::vector<int> gene;
		gene.push_back(getDecimalNumber(px));
		gene.push_back(getDecimalNumber(py));
		gene.push_back(getDecimalNumber(pr));
		gene.push_back(getDecimalNumber(pg));
		gene.push_back(getDecimalNumber(pb));
		gene.push_back(getDecimalNumber(palfa));
		gene.push_back(getDecimalNumber(pRadius));


		px.clear();
		py.clear();
		pr.clear();
		pg.clear();
		pb.clear();
		palfa.clear();
		pRadius.clear();
		genotypeDecimal.push_back(gene);


	}



	return genotypeDecimal;
}

void individual2::updateIndividualsImage(){

	std::vector<std::vector<int>> circlesData = getCirclesData();
	sf::RenderTexture rTexture;
	rTexture.create(individual::getWindowWidth(), individual::getWindowHeight());

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
}





