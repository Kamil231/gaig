// TODO: read the constants on initialization, for example as main arguments

#ifndef GAIG_EVOLUTION_CONSTANTS_H
#define GAIG_EVOLUTION_CONSTANTS_H

const double MIN_RADIUS = 0.01;
const double MAX_RADIUS = 10.0;

enum class populationTypes { populationType1, populationType2 };

const populationTypes populationType = populationTypes::populationType1;

enum class individualTypes { individualType1, individualType2 };

const individualTypes individualType = individualTypes::individualType1;



#endif //GAIG_EVOLUTION_CONSTANTS_H
