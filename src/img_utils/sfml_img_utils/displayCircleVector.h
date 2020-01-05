#ifndef GAIG_DISPLAY_CIRCLE_VECTOR_H
#define GAIG_DISPLAY_CIRCLE_VECTOR_H


#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <vector>
#include <iostream>
#include "../../population/individual.h"

class displayCircleVector {
private:
    std::vector<sf::CircleShape> circleVector;

public:
    displayCircleVector(const std::unique_ptr<individual> &ind);
    void display(sf::RenderWindow& window);
};


#endif 
