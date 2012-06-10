#ifndef COMPLEXE_H
#define COMPLEXE_H

#include "entier.h"
#include "rationnel.h"
#include "reel.h"
#include "expression.h"



class Complexe : public Constante
{
public:
    Complexe(const std::string&, const Type&);

    /*Constructeur avec val(texte récupéré), T(type de la constante contenue dans val), Tvoulu(type de Complexe que l'on souhaite créer)
    et Toriginie(type du Complexe transmis, quand il s'agit d'un complexe)*/
    Complexe(const std::string& val, const Type& T, const Type& Tvoulu, const Type& Torigine = entier);
    Complexe(const Complexe &);
    ~Complexe();
    Constante* getReel() const {return p_Reel;} //renvoi un pointeur vers la Constante partie_reelle
    Constante* getIm() const {return p_Im;} //renvoi un pointeur vers la Constante partie_imaginaire
    void setReel(Constante* a) {delete p_Reel; p_Reel = a;}
    void setIm(Constante* a) {delete p_Im; p_Im = a;}
    Type getContient() const {return contient;} //renvoi le type de complexe (entier, rationnel, reel)
    virtual std::string getChaine() const;
    Complexe& operator+=(Complexe const& e);
    Complexe& operator-=(Complexe const& e);
    Complexe& operator*=(Complexe const& e);
    Complexe& operator/=(Complexe const& e);

private :
 Constante* p_Reel;
 Constante* p_Im;
 Type contient;
 virtual void construireConstante(const std::string&);
};

Complexe operator+(Complexe const& a, Complexe const& b);
Complexe operator-(Complexe const& a, Complexe const& b);
Complexe operator*(Complexe const& a, Complexe const& b);
Complexe operator/(Complexe const& a, Complexe const& b);

#endif // COMPLEXE_H
