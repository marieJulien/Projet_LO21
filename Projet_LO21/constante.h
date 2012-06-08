#ifndef CONSTANTE_H
#define CONSTANTE_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>

//Type qui permet de savoir à quelle genre de Constante un objet appartient
enum Type {
       entier,
       rationnel,
       reel,
       complexe,
       expression,
       erreur
    };

class Constante
{
public:
    const Type& getType() { return genre; } //renvoi le type de la Constante
    virtual std::string getChaine() const = 0;
protected:
    Type genre;
    virtual void construireConstante(const std::string&) = 0;
};

#endif // CONSTANTE_H
