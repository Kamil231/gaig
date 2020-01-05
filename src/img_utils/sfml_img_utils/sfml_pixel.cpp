#include "sfml_pixel.h"

unsigned char sfml_util::sfmlPixel::red() {
    return red_;
}

unsigned char sfml_util::sfmlPixel::blue() {
    return blue_;
}

unsigned char sfml_util::sfmlPixel::green() {
    return green_;
}

unsigned short sfml_util::sfmlPixel::x() {
    return x_;
}

unsigned short sfml_util::sfmlPixel::y() {
    return y_;
}

sfml_util::sfmlPixel::sfmlPixel(sf::Color color, unsigned short x,
                                unsigned short y) : red_(color.r), blue_(color.b), green_(color.g), x_(x), y_(y) {}
