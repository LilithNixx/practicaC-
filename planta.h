#include <iostream>
#include "serVivo.h"
using namespace std;

//clase plata que tiene una herencia de ser vivo
class planta : public SerVivo {
	public:
		void alimentarse(){
			cout<<"La plata se alimenta mediante la fotosíntesis."<<endl;
		}
		
};
