#ifndef RATIONNEL_H
#define RATIONNEL_H

#include "constante.h"
#include "entier.h"

class Rationnel : public Constante
{
public:
    Rationnel(const std::string&);
    /*Constructeur d'un Rationnel depuis la chaine val, contenant une Constante de type T1.
      T2 étant le type du Complexe éventuellement transmis au constructeur
      */
    Rationnel(const std::string& val, const Type& T1, const Type& T2 = entier);
    Rationnel (const Rationnel &);
    int getValNum() const {return numerateur->getVal();} //renvoi la valeur du numerateur
    int getValDen() const {return denominateur->getVal();} //renvoi la valeur du denominateur
    void setNum(Entier* a) {delete numerateur; numerateur = a;}
    void setDen(Entier* a) {delete denominateur; denominateur = a;}
    Entier* getNum() const {return numerateur;}
    Entier* getDen() const {return denominateur;}
    ~Rationnel() {delete numerateur; delete denominateur;} //destructeur qui libère les pointeurs d'Entier
    virtual std::string getChaine() const; //renvoi la chaine de caractère correspondante
    Rationnel& operator+=(Rationnel const& e);
    Rationnel& operator-=(Rationnel const& e);
    Rationnel& operator*=(Rationnel const& e);
    Rationnel& operator/=(Rationnel const& e);
    void simplifier();

private:
    Entier* numerateur;
    Entier* denominateur;
    virtual void construireConstante(const std::string&);
};

Rationnel operator+(Rationnel const& a, Rationnel const& b);
Rationnel operator-(Rationnel const& a, Rationnel const& b);
Rationnel operator*(Rationnel const& a, Rationnel const& b);
Rationnel operator/(Rationnel const& a, Rationnel const& b);
int pgcd(int a, int b);

#endif // RATIONNEL_H
