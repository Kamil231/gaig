#include "displayCircleVector.h"

displayCircleVector::displayCircleVector(const std::unique_ptr<individual> &ind){

	std::vector<std::vector<int>> dispplatData = ind->getCirclesData();

	for(int i = 0; i < dispplatData.size(); ++i){
		sf::CircleShape circle(dispplatData[i][6]);

		circle.setPosition(dispplatData[i][0] - dispplatData[i][6],dispplatData[i][1] - dispplatData[i][6]);

		circle.setFillColor(sf::Color(dispplatData[i][2], dispplatData[i][3], dispplatData[i][4], dispplatData[i][5]));

		circleVector.push_back(circle);
	}
}

void displayCircleVector::display(sf::RenderWindow& window) {
	for(int i = 0; i < circleVector.size(); ++i){
		window.draw(circleVector[i]);
	}
    
}