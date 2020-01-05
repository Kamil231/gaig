#include <iostream>
/*#include <Graphics/RenderWindow.hpp>
#include <Window/Event.hpp>
#include <Graphics/Texture.hpp>
#include <img_utils/sfml_img_utils/sfml_image.h>
#include <img_utils/sfml_img_utils/display_circle.h>*/
#include <main_class/geneticEvolution.h>
// WARNING: always put full path here (not relative)
const char* path = "/home/kamil/Desktop/gaig/dog.jpg";

int main()
{
	//geneticEvolution Evolution;
	//Evolution.run();
	geneticEvolution *evolution = geneticEvolution::getInstance();
	evolution->run();

    return 0;
}
