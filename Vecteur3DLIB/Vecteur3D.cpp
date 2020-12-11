#include "pch.h"
#include "Vecteur3D.h"
#include <iostream>
#include <assert.h>
using namespace std;
int Vecteur3D::nbr_inst = 0;
Vecteur3D::Vecteur3D()
{
	this->Vect[0] = 0;
	this->Vect[1] = 0;
	this->Vect[2] = 0;
	Vecteur3D::nbr_inst++;
}

Vecteur3D::Vecteur3D(float x, float y, float z)
{
	this->Vect[0] = x;
	this->Vect[1] = y;
	this->Vect[2] = z;
	Vecteur3D::nbr_inst++;
}

Vecteur3D::Vecteur3D(const Vecteur3D&V)
{
	for (int i = 0; i < 3; i++)
	{
		this->Vect[i] = V.Vect[i];
	}
	Vecteur3D::nbr_inst++;
}

Vecteur3D* Vecteur3D::operator=(const Vecteur3D&V) 
{
	assert(this != &V);
	for (int i = 0; i < 3; i++)
	{
		this->Vect[i] = V.Vect[i];
	}
	return this;
}

bool Vecteur3D::operator==(const Vecteur3D &V) const
{
	for (int i = 0; i < 3; i++)
	{
		if (this->Vect[i] != V.Vect[i])
		{
			return false;
		}

	}
	return true;
	/*
	 bool res=true;
	 for(int i=0;i<3;i++)
	 {
	  res= res && (this->vect[i]==V;vect[i});
	  return res;
	 }
	*/
}

Vecteur3D& Vecteur3D::operator+(const Vecteur3D&V) const
{
	Vecteur3D* S=new Vecteur3D;
	for (int i = 0; i < 3; i++)
	{
		S->Vect[i] = this->Vect[i] + V.Vect[i];
	}
	return *S;
	/*
	   Vecteur3D* res=new Vecteur3D;
	   for (int i = 0; i < 3; i++)
	{
		res->Vect[i] = this->Vect[i] + V.Vect[i];
	}
	return *res;
	*/
	
//invalide	// Vecteur3D res=(this->Vect[0] + V.Vect[0],this->Vect[1] + V.Vect[1],this->Vect[2] + V.Vect[2]);
	// return res;
}

float Vecteur3D::operator*(const Vecteur3D&V) const
{
	float res = 0;
	for (int i = 0; i < 3; i++)
	{
		res += this->Vect[i] * V.Vect[i];
	}
	return res;
}

Vecteur3D& Vecteur3D::produit_vect(const Vecteur3D&V) const
{
	Vecteur3D* res= new Vecteur3D;
	res->Vect[0] = this->Vect[1] * V.Vect[2] - this->Vect[2] * V.Vect[1];
	res->Vect[1] = this->Vect[2] * V.Vect[0] - this->Vect[0] * V.Vect[2];
	res->Vect[2] = this->Vect[0] * V.Vect[1] - this->Vect[2] * V.Vect[0];
	return *res;
}

void Vecteur3D::print() const
{
	for (int i = 0; i < 3; i++)
	{
		cout << "VECT[" << i << "]=" << this->Vect[i] << endl;
	}
}
