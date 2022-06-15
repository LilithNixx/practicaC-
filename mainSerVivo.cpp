#include <iostream>
#include "planta.h"
#include "carnivoro.h"
#include "herviboro.h"
using namespace std;

int main(int argc, char** argv) {
	
	planta* rosa = new planta();	
	rosa->alimentarse();
	
	carnivoro* gato = new carnivoro;
	gato->alimentarse();
	
	herviboro* vaca = new herviboro;
	vaca->alimentarse();
	
	
	
	return 0;
}
