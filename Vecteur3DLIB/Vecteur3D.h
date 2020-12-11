#pragma once
class Vecteur3D
{
public:
	Vecteur3D();//constructeur sans parametre
	Vecteur3D(float, float, float);//constructeur avec parametre
	Vecteur3D(const Vecteur3D&);//constructeur de recopie
	//service
	Vecteur3D* operator=(const Vecteur3D&);
	bool operator==(const Vecteur3D&)const;
	Vecteur3D& operator+(const Vecteur3D&)const;
	float operator*(const Vecteur3D&)const;//produit scalaire
	Vecteur3D& produit_vect(const Vecteur3D&)const;//produit vect
	void print()const;

private:
	float Vect[3];
public:static int nbr_inst;

};

