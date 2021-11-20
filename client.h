#pragma once
#include <string>
#include <iostream>
using namespace std;
class client
{
private :
	string nom;
	string prenom;
	string adresse;
public:
	client(string, string, string);
	void afficher()const;
};

