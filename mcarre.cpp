#include "carre.h"
#include <iostream>

using namespace std;

int main()
{
	CCarre *carre2 = new CCarre(5,9,4);
	carre2->Afficher();
	delete carre2;
}