#include "carre.h"
#include <iostream>

using namespace std;

int main()
{
	CCarre carre1;
	carre1.Setcote(5);
	carre1.Setsx(2);
	carre1.Setsy(3);
	carre1.Afficher();
	cout << endl;

	cout << carre1.Getcote() << endl;
	cout << carre1.Getsx() << endl;
	cout << carre1.Getsy() << endl;
}