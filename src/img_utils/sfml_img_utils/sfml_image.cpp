#include "sfml_image.h"
#include "sfml_pixel.h"
#include <memory>
#include <stdexcept>
#include <SFML/Graphics/Image.hpp>
#include <Graphics/Texture.hpp>
#include <iostream>
#include <memory>

sfml_util::sfmlImage::sfmlImage(const std::string &path) {
    if (!loadFromFile(path))
        throw std::runtime_error("[IMAGE INPUT ERROR] Failed to load file from path " + path);
    path_ = path;
}

std::unique_ptr<gaig_util::Pixel> sfml_util::sfmlImage::pixel(short x, short y) {
    try {
        return std::unique_ptr<gaig_util::Pixel>(
                dynamic_cast<gaig_util::Pixel*>(
                        new sfmlPixel(
                                getPixel(x, y), static_cast<unsigned short>(x), static_cast<unsigned short>(y)
                                )
                        )
                );
    } catch (std::bad_cast& exception) {
        std::cerr << "[TYPE CAST ERROR] Unable to cast to Pixel class from input image" << std::endl;
        throw exception;
    }
}

unsigned short sfml_util::sfmlImage::x() {
    return getSize().x;
}

unsigned short sfml_util::sfmlImage::y() {
    return getSize().y;
}

std::unique_ptr<sf::Sprite> sfml_util::sfmlImage::getSprite() {
    auto *texture = new sf::Texture();
    if (!texture->loadFromFile(path_))
        throw std::runtime_error("[IMAGE INPUT ERROR] Cannot create texture from image of path " + path_);
    auto sprite = std::make_unique<sf::Sprite>();
    sprite->setTexture(*texture);
    return sprite;
}
