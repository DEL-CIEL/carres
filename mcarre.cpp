#include "carre.h"
#include <iostream>

using namespace std;

int main()
{
	CCarre carre[4];

	for (size_t i = 0; i < 4; i++)
	{
		carre[i].Setsx(rand() % 10);
		carre[i].Setsy(rand() % 10);
		carre[i].Setcote(rand() % 10);
		carre[i].Afficher();
	}
}