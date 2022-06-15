#include <iostream>
#include "serVivo.h"
using namespace std;

class AnimalHerviboro : public Animal {
	public:
		void alimentarse(){
			cout<<"Un animal herviboro se alimenta de hierbas."<<endl;
		}
};
