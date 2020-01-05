#ifndef GAIG_SFML_IMAGE_H
#define GAIG_SFML_IMAGE_H

#include <img_utils/image.hpp>
#include <string>
#include <vector>
#include <Graphics/Image.hpp>
#include <Graphics/Sprite.hpp>
#include <memory>
#include "sfml_pixel.h"

namespace sfml_util {

class sfmlImage: public gaig_util::Image, protected sf::Image {
    public:
        explicit sfmlImage(const std::string& path);
        std::unique_ptr<gaig_util::Pixel> pixel(short x, short y) override;
        std::unique_ptr<sf::Sprite> getSprite();
        unsigned short x() override;
        unsigned short y() override;
    private:
        std::string path_;
};

}

#endif //GAIG_SFML_IMAGE_H
