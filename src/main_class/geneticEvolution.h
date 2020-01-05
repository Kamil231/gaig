#ifndef GAIG_GENETIC_EVOLUTION_H
#define GAIG_GENETIC_EVOLUTION_H




class geneticEvolution{

private:
	geneticEvolution();
	
	static geneticEvolution* instance;

public:
	static geneticEvolution* getInstance();
	void run();
};


#endif 
