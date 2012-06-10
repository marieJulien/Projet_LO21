#ifndef PILE_H
#define PILE_H

#include <iostream>
#include <stack>
#include <vector>
#include "complexe.h"

class Pile
{
public:
    static Pile& donneInstance(); //Singleton
    static void libereInstance();
    Constante* sommetPile(); //renvoi le sommet de la Pile
    void ajouterPile(Constante* ptr); //Ajoute un nouvel élément à la Pile
    Constante* extrairePile(); //Extrait le sommet de la pile
    bool estVide() const {return p.empty();} //test si la Pile est vide
    int getTaille() const {return p.size();} //renvoi la taille de la pile
    void viderPile(); //Vide la Pile
    Constante* dupliquer(); //Duplique le premier élément de la Pile

protected:
    Pile();
    Pile(const Pile&);
    ~Pile();
    void operator=(const Pile&);

private:
    static Pile* instanceUnique;
    std::stack<Constante*> p;

};

#endif // PILE_H
