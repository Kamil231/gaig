//
// Created by maja on 30.11.2019.
//

#ifndef GAIG_DISPLAY_CIRCLE_H
#define GAIG_DISPLAY_CIRCLE_H

#include "../../evolution/Circle.h"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <boost/move/unique_ptr.hpp>

class display_circle {
public:
    display_circle(evolution::Circle&& circle);
    void display(sf::RenderWindow& window);
private:
    boost::movelib::unique_ptr<sf::CircleShape> circleShape;
};


#endif //GAIG_DISPLAY_CIRCLE_H
