#ifndef REEL_H
#define REEL_H

#include "constante.h"

class Reel : public Constante
{
public:
    Reel(const std::string&);
    /*Constructeur d'un Reel depuis la chaine val, contenant une Constante de type T1.
      T2 étant le type du Complexe éventuellement transmis au constructeur
      */
    Reel(const std::string& val, const Type& T1, const Type& T2 = entier);
    float getVal() const {return valeur;} //renvoi la valeur du reel
    void setVal(float f) {valeur = f;}
    virtual std::string getChaine() const; //renvoi la chaine de caractere correspondante
    Reel& operator+=(Reel const& e);
    Reel& operator-=(Reel const& e);
    Reel& operator*=(Reel const& e);
    Reel& operator/=(Reel const& e);

private:
    float valeur;
    virtual void construireConstante(const std::string&);
};

Reel operator+(Reel const& a, Reel const& b);
Reel operator-(Reel const& a, Reel const& b);
Reel operator/(Reel const& a, Reel const& b);
Reel operator*(Reel const& a, Reel const& b);

#endif // REEL_H
