#include "display_circle.h"

display_circle::display_circle(evolution::Circle&& circle) {
    circleShape = std::move(boost::movelib::unique_ptr<sf::CircleShape>(new sf::CircleShape(circle.getRadius())));
    circleShape->setFillColor(sf::Color(circle.getRed(), circle.getGreen(), circle.getBlue(), circle.getAlpha()));
    circleShape->setPosition(circle.getX(), circle.getY());
}

void display_circle::display(sf::RenderWindow& window) {
    window.draw(*dynamic_cast<sf::Drawable*>(circleShape.get()));
}