#include "geneticEvolution.h"
#include <iostream>

#include <Graphics/RenderWindow.hpp>
#include <Window/Event.hpp>
#include <Graphics/Texture.hpp>
#include <img_utils/sfml_img_utils/sfml_image.h>
#include <img_utils/sfml_img_utils/display_circle.h>
#include <img_utils/sfml_img_utils/displayCircleVector.h>
#include <population/individual.h>
#include <population/population1.h>
#include <vector>
#include <time.h>

#include <Graphics/Image.hpp>
#include <Graphics/RenderTexture.hpp>

#include "../const/evolution_constants.h"
#include <population/populationFactory.h>


geneticEvolution::geneticEvolution(){
	
    std::cout<<"GeneratingEvolution"<<std::endl;
}

geneticEvolution* geneticEvolution::getInstance(){
    if(instance == 0){
        instance = new geneticEvolution();
    }
    return instance;
}

geneticEvolution* geneticEvolution::instance = 0;

void geneticEvolution::run(){
	const char* path = "/home/kamil/Desktop/gaig/pepe2.jpg";
	std::cout << "Welcome to GAIG" << std::endl;
    sfml_util::sfmlImage image = sfml_util::sfmlImage(path);
    std::cout << "Image loaded successfully" << std::endl;

    std::cout<<image.x()<<"\t"<<image.y()<<std::endl;

    sf::RenderWindow window(sf::VideoMode(image.x()+300, image.y()+300), "Loaded Image");

    sf::Texture textureBackground;

    textureBackground.loadFromFile(path);

    sf::Sprite spriteBackground;

    spriteBackground.setTexture(textureBackground);

    spriteBackground.setPosition(0, 0);

    sf::Image image1;
    image1.loadFromFile(path);
    srand(time(NULL));


    populationFactory *pPopulationFactory = new populationFactory(populationType, image.x(), image.y(), 1600, 20, image1);
    population *Pop = pPopulationFactory->getPopulation();

    int j = 0;

    time_t start_0;
    time(&start_0);

    int loop = 1;

    while (window.isOpen())
    {
        time_t start, end;
        time(&start);


        sf::Event event{};

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        
        window.clear();

        Pop->update();

        std::vector<std::unique_ptr<individual>> *ind_vect = &(Pop->getCurrentPopulation());


        std::unique_ptr<individual> &ind = (*ind_vect)[0];
        displayCircleVector dispCircle(ind);
        dispCircle.display(window);

        window.display();

        
        time(&end);
        std::cout<<"loop num: " << loop << "\t";
        std::cout<<"1 loop time: " << difftime(end, start)<<"\t";
        std::cout<<"total time: " << difftime(end, start_0)<<"\t";
        std::cout<<"fitness: " << ind->getFitness()<<"\t";
        int av = 0;
        for(int i = 0; i < (*ind_vect).size(); ++i){
            av = av + (*ind_vect)[i]->getFitness();
        }

        std::cout<<"av fitness: "<< av/(*ind_vect).size()<<std::endl;

        loop++;
        

    }
}	

