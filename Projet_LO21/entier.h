#ifndef ENTIER_H
#define ENTIER_H

#include "constante.h"

class Entier : public Constante
{

public:
    Entier(const std::string& val);

    /*Constructeur qui permet la création d'un entier à partir d'une chine de caractères (val),
      T1 qui est le type de Constante reçue par le constructeur
      et T2 qui est le type du Complexe transmis, si val représente un Complexe
      */
    Entier(const std::string& val, const Type& T1, const Type& T2 = entier);
    int getVal() const {return valeur;} //renvoi la valeur de l'Entier
    void setVal(const int& i) {valeur = i;} //permet de modifier la valeur de l'Entier
    virtual std::string getChaine() const; //renvoi la chaine correspondant à l'Entier
    Entier& operator+=(Entier const& e);
    Entier& operator-=(Entier const& e);
    Entier& operator*=(Entier const& e);
    Entier& operator/=(Entier const& e);

private:
    int valeur;
    virtual void construireConstante(const std::string&);
};

Entier operator+(Entier const& a, Entier const& b);
Entier operator-(Entier const& a, Entier const& b);
Entier operator*(Entier const& a, Entier const& b);
Entier operator/(Entier const& a, Entier const& b);


#endif // ENTIER_H
