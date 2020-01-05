#ifndef GAIG_PIXEL_H
#define GAIG_PIXEL_H

namespace gaig_util {
    class Pixel {
    public:
        virtual unsigned char red() {return 0;};
        virtual unsigned char blue() {return 0;};
        virtual unsigned char green() {return 0;};
        virtual unsigned short x() {return 0;};
        virtual unsigned short y() {return 0;};
    };
}

#endif //GAIG_PIXEL_H
