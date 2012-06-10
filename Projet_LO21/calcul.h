#ifndef CALCUL_H
#define CALCUL_H

#include <iostream>
#include "complexe.h"
#include "reel.h"
#include "mainwindow.h"
#include <cmath>

class Reel;
class Entier;
class Rationnel;
class Complexe;
class Expression;

Entier* convertirEntier(Constante* a);
Rationnel* convertirRationnel(Constante* a);
Reel* convertirReel(Constante* a);
Complexe* convertirComplexe(Constante* a, const Type& T);
Constante* addition(const Type& Mode, const Type& Tcomplexe, Constante* a, Constante* b);
Constante* soustraction(const Type& Mode, const Type& Tcomplexe, Constante* a, Constante* b);
Constante* multiplication(const Type& Mode, const Type& Tcomplexe, Constante* a, Constante* b);
Constante* division(const Type& Mode, const Type& Tcomplexe, Constante* a, Constante* b);
Constante* cosinus(Constante* a, bool degre);
Constante* cosinush(Constante* a);
Constante* sinus(Constante* a, bool degre);
Constante* sinush(Constante* a);
Constante* tangente(Constante* a, bool degre);
Constante* tangenteh(Constante* a);
Constante* modulo(Constante* a, Constante* b);
Constante* factorielle(Constante* a);
Constante* puissance(Constante* a, Constante* b, const Type& T);
Constante* logarithme(Constante* a, const Type& T);
Constante* logarithmeN(Constante*a, const Type& T);
Constante* racine(Constante*a, const Type& T);
Constante* carre(Constante*a, const Type& T, const Type& Tcomplexe);
Constante* cube(Constante*a, const Type& T, const Type& Tcomplexe);
Constante* inverse(Constante* a, const Type& T);
Constante* signe(Constante*a, const Type& T, const Type& Tcomplexe);

#endif // CALCUL_H
