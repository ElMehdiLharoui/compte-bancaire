#pragma once
#include"client.h"
#include"MAD.h"
#include<iostream>
using namespace std;
class compte
{
private:
	const int numc;
	static int count;
	client* titulaire;
	static MAD* plafond;
	MAD* solde;


public:
	compte(client*, MAD*);//parametre
	compte(const compte&);//de recopie
	void crediter(MAD*);
	bool debiter(MAD*);
	void consulter()const;
	bool verser(MAD* M, compte& C);
 




};

