//
// Created by maja on 02.11.2019.
//

#ifndef GAIG_SFML_PIXEL_H
#define GAIG_SFML_PIXEL_H

#include <Graphics/Color.hpp>
#include <img_utils/pixel.h>

namespace sfml_util {

    class sfmlPixel: public gaig_util::Pixel {
    public:
        sfmlPixel(sf::Color color, unsigned short x, unsigned short y);

        unsigned char red() override;

        unsigned char blue() override;

        unsigned char green() override;

        unsigned short x() override;

        unsigned short y() override;

    private:
        unsigned char red_;
        unsigned char blue_;
        unsigned char green_;
        unsigned short x_;
        unsigned short y_;
    };

}



#endif //GAIG_SFML_PIXEL_H
