#ifndef GAIG_INDIVIDUAL_H
#define GAIG_INDIVIDUAL_H

#include <vector>
#include <Graphics/Image.hpp>
#include <Graphics/RenderTexture.hpp>
#include <Graphics/Texture.hpp>
#include <Graphics/Image.hpp>
#include <SFML/Graphics/CircleShape.hpp>

#include "../const/evolution_constants.h"
#include <memory>

class individual{
private:
	int xGenes;
	int yGenes;
	int maxRadiusBinary;
	int fitness;
	int chromosomeLength;
	int geneSetLength;
	int windowWidth;
	int windowHeight;

protected:
	int circlesNumber;
	std::vector<int> genotype;
	sf::Image individualsImage;
	int getBinarySize(int input);
	int getDecimalNumber(std::vector<int> v);
	void mutateGene(int i);
	std::vector<int> getBinaryNumber(int decNumber, int length);
	virtual void updateIndividualsImage() = 0;

public:
	individual(int windowWidth, int windowHeight, int circlesNumber);
	//individual(int windowWidth, int windowHeight, int circlesNumber, std::vector<int> genotype);
	//individual* createIndividual(individualTypes type, int windowWidth, int windowHeight, int circlesNumber);
	std::unique_ptr<individual> createIndividual(individualTypes type, int windowWidth, int windowHeight, int circlesNumber);
	//individual* createIndividual(individualTypes type, int windowWidth, int windowHeight, int circlesNumber, std::vector<int> genotype);
	std::unique_ptr<individual> createIndividual(individualTypes type, int windowWidth, int windowHeight, int circlesNumber, std::vector<int> genotype);

	virtual std::vector<std::vector<int>> getCirclesData() = 0;
	std::vector<int> getGenotype();

	void setGenotype(std::vector<int> newGenotype);

	int setFitness(int fitness);
	int getFitness();
	
	sf::Image getImage();

	int getChromosomeLength();
	void setChromosomeLength(int chromosomeLength);
	int getCirclesNumber();
	int getGeneSetLength();
	void setGeneSetLength(int geneSetLength);

	void setGene(int pos, int value);
	int getGene(int pos);
	int getGenotypeSize();


	int getXGenes();
	int getYGenes();
	int getMaxRadiusBinary();
	int getWindowWidth();
	int getWindowHeight();


};


#endif 