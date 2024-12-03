#pragma once

class CCarre
{
public:
	void Setsx(int);
	void Setsy(int);
	void Setcote(int);
	void Afficher();
	int Getsx();
	int Getsy();
	int Getcote();
	void Deplacer(char, int);

private:
	int sx;
	int sy;
	int cote;
};