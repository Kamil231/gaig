#ifndef GAIG_CIRCLE_H
#define GAIG_CIRCLE_H

#include "../const/evolution_constants.h"
#include "../rand_generation/uniform_random_parameter.h"
#include <boost/scoped_ptr.hpp>
#include <sstream>

namespace evolution {

    class Circle {
    public:
        Circle(unsigned short screen_x, unsigned short screen_y);

        unsigned short getX() const;

        unsigned short getY() const;

        double getRadius() const;

        unsigned char getRed() const;

        unsigned char getBlue() const;

        unsigned char getGreen() const;

        unsigned char getAlpha() const;

    private:
        unsigned short x{};
        unsigned short y{};
        double radius{};
        unsigned char red{};
        unsigned char blue{};
        unsigned char green{};
        unsigned char alpha{};
    };

}


#endif //GAIG_CIRCLE_H
