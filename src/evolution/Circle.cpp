#include "Circle.h"

namespace evolution {

    // Circle parameters are generated randomly
    Circle::Circle(unsigned short screen_x, unsigned short screen_y) {
        boost::scoped_ptr<UniformRandomParameterGenerator> generator(new UniformRandomParameterGenerator());
        radius = generator->getDouble(MIN_RADIUS, MAX_RADIUS);
        x = generator->getDouble(radius, screen_x-radius);
        y = generator->getDouble(radius, screen_y-radius);
        red = generator->getDouble(0, 255);
        blue = generator->getDouble(0, 255);
        green = generator->getDouble(0, 255);
        alpha = generator->getDouble(0, 255);
    }

    unsigned short Circle::getX() const {
        return x;
    }

    unsigned short Circle::getY() const {
        return y;
    }

    double Circle::getRadius() const {
        return radius;
    }

    unsigned char Circle::getRed() const {
        return red;
    }

    unsigned char Circle::getBlue() const {
        return blue;
    }

    unsigned char Circle::getGreen() const {
        return green;
    }

    unsigned char Circle::getAlpha() const {
        return alpha;

    }

}
