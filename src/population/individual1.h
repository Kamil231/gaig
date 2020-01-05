#ifndef GAIG_INDIVIDUAL1_H
#define GAIG_INDIVIDUAL1_H

#include <vector>
#include <Graphics/Image.hpp>
#include <Graphics/RenderTexture.hpp>
#include <Graphics/Texture.hpp>
#include <Graphics/Image.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include "individual.h"

class individual1 : public individual{

protected:
	void updateIndividualsImage();


public:
	individual1(int windowWidth, int windowHeight, int circlesNumber);
	individual1(int windowWidth, int windowHeight, int circlesNumber, std::vector<int> genotype);

	std::vector<std::vector<int>> getCirclesData();




};


#endif 