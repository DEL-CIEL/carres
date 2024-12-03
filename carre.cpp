#include "carre.h"
#include <iostream>

using namespace std;

void CCarre::Setsx(int sx1)
{
	this->sx = sx1;
}

void CCarre::Setsy(int sy1)
{
	this->sy = sy1;
}

void CCarre::Setcote(int cote1)
{
	this->cote = cote1;
}

void CCarre::Afficher()
{
	cout << "Position x: " << this->sx << " \t Position y: " << this->sy << " \t Cote: " << this->cote << endl;
}

int CCarre::Getsx()
{
	return this->sx;
}

int CCarre::Getsy()
{
	return this->sy;
}

int CCarre::Getcote()
{
	return this->cote;
}

// "Déplace" le carré sans le dessiner. Les attributs x et y  
// sont modifiés en ajoutant ou retranchant la valeur de saut en fonction de  
// la direction : par ex direction nord saut=2 y=y-2 
// Entrées : 
//  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
//   - saut : nombre de pixels de déplacement du carré 
// Sortie : Aucune 
void CCarre::Deplacer(char direction, int saut)
{
	switch (direction)
	{
	case 'n':
		this->sy -= saut;
		break;
	case 's':
		this->sy += saut;
		break;
	case 'o':
		this->sx -= saut;
		break;
	case 'e':
		this->sx += saut;
		break;
	}
}