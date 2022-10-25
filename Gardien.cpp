/************************************************************************************
*	Fichier					: Gardien.cpp
*	Auteurs					: 
*	Description				: Implementation de la classe Gardien
*	Date de creation		: 
*	Date de modification	: 
************************************************************************************/

#include "Gardien.h"
#include <iostream>
using namespace std;

Gardien::Gardien() {
	nom_="inconnu", matchsJoues_ = 0, buts_ = 0, assists_ = 0, attaque_ = 0.1, defense_ = 1.0, stabilite_ = 0.9, reflexe_ = 1.2;
}

Gardien::Gardien(string nom, unsigned int matchsJoues,
    unsigned int buts, unsigned int assists,
    double attaque, double defense, double stabilite, double reflexe):Joueur(nom,matchsJoues,buts,assists,attaque,defense),stabilite_(stabilite),reflexe_(reflexe)
{

}

Gardien::~Gardien()
{
}


ostream& operator<<(ostream& os, const Gardien & individu)
{    
   // to do

}
