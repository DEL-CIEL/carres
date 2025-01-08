/// @file carre.h
/// @brief Creation et manipulation d'un carre
/// @details On peut definir les mesures du carre, le deplacer et les afficher
/// @author Delos Charles
/// @version 0.1 - Visual Studio 2019
/// @date 08/01/2025

#pragma once

/// @class CCarre
/// @brief classe qui creer l'objet CCarre avec des coordonnees et une longueur
class CCarre
{
public:
	/// @brief constructeur par defaut
	CCarre();

	/// @brief constructeur avec parametre
	/// @param[in] coordonnee x 
	/// @param[in] coordonnee y
	/// @param[in] longueur du cote
	CCarre(int, int, int);

	/// @brief définit la position x du carre
	/// @param[in] position x du carre
	void Setsx(int);

	/// @brief définit la position y du carre
	/// @param[in] position y du carre
	void Setsy(int);

	/// @brief définit la longueur du cote du carre
	/// @param[in] longueur du cote
	void Setcote(int);

	/// @brief affiche les proprietes du carre
	void Afficher();

	/// @brief permet d'obtenir la valeur x du carre
	/// @return retourne la valeur x actuelle
	int Getsx();

	/// @brief permet d'obtenir la valeur y du carre
	/// @return retourne la valeur y actuelle
	int Getsy();

	/// @brief permet d'obtenir la longueur du cote du carre
	/// @return retourne la longueur du cote actuel
	int Getcote();

	/// @brief deplace le carre avec un saut et dans une direction
	/// @param[in] direction pour déplacer (n,s,e,o)
	/// @param[in] la nouvelle distance a parcourir
	void Deplacer(char, int);

	/// @brief deplace le carre avec un vecteur
	/// @param[in] distance a parcourir sur l'axe x
	/// @param[in] distance a parcourir sur l'axe y
	void Deplacer(int, int);

private:
	/// @brief coordonnee x a partir du coin haut gauche du carre
	int sx;

	/// @brief coordonnee y a partir du coin haut gauche du carre
	int sy;

	/// @brief longueur du cote du carre
	unsigned int cote;
};