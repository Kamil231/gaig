#ifndef GAIG_IMAGE_LOADER_H
#define GAIG_IMAGE_LOADER_H

#include <string>
#include "image.hpp"

// TODO: singleton?

namespace gaig_util {
    class ImageLoader {
    public:
        // TODO : unique_ptr
        virtual Image load_image(std::string path) = 0;
    };
}

#endif