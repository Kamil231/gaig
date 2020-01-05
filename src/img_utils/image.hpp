#ifndef GAIG_IMAGE_H
#define GAIG_IMAGE_H

#include <memory>
#include "pixel.h"

namespace gaig_util {

    class Image {
    public:
        virtual std::unique_ptr<Pixel> pixel(short x, short y) = 0;
        virtual unsigned short x() = 0;
        virtual unsigned short y() = 0;
    };

}

#endif