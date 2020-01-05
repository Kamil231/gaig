#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE generation_test
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "../src/evolution/Circle.h"

const unsigned short x = 400;
const unsigned short y = 800;

BOOST_AUTO_TEST_SUITE(circle_generation_test)

    BOOST_AUTO_TEST_CASE(y_in_bounds)
    {
        const auto circle = evolution::Circle(x, y);
        const short unsigned y = circle.getY();
        BOOST_CHECK( y < 800 && y > 0);
    }

    BOOST_AUTO_TEST_CASE(x_in_bounds)
    {
        const auto circle = evolution::Circle(x, y);
        const short unsigned x = circle.getX();
        BOOST_CHECK( x < 400 && x > 0);
    }

    BOOST_AUTO_TEST_CASE(radius_in_bounds)
    {
        const auto circle = evolution::Circle(x, y);
        const double radius = circle.getRadius();
        BOOST_CHECK(radius <= 10.0 && radius >= 0.01);
    }

    BOOST_AUTO_TEST_CASE(red_in_bounds)
    {
        const auto circle = evolution::Circle(x, y);
        const unsigned char red = circle.getRed();
        BOOST_CHECK( red >= 0 && red <= 255);
    }

    BOOST_AUTO_TEST_CASE(blue_in_bounds)
    {
        const auto circle = evolution::Circle(x, y);
        const unsigned char blue = circle.getBlue();
        BOOST_CHECK( blue >= 0 && blue <= 255);
    }

    BOOST_AUTO_TEST_CASE(green_in_bounds)
    {
        const auto circle = evolution::Circle(x, y);
        const unsigned char green = circle.getGreen();
        BOOST_CHECK( green >= 0 && green <= 255);
    }

    BOOST_AUTO_TEST_CASE(alpha_in_bounds)
    {
        const auto circle = evolution::Circle(x, y);
        const unsigned char alpha = circle.getAlpha();
        BOOST_CHECK( alpha >= 0 && alpha <= 255);
    }

BOOST_AUTO_TEST_SUITE_END()