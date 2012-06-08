#ifndef CALCUL_H
#define CALCUL_H

#include <iostream>
#include "complexe.h"
#include <cmath>
#include "mainwindow.h"

Entier* convertirEntier(Constante* a);
Rationnel* convertirRationnel(Constante* a);
Reel* convertirReel(Constante* a);
Complexe* convertirComplexe(Constante* a, const Type& T);
Constante* addition(const Type& Mode, const Type& Tcomplexe, Constante* a, Constante* b);
Constante* soustraction(const Type& Mode, const Type& Tcomplexe, Constante* a, Constante* b);
Constante* multiplication(const Type& Mode, const Type& Tcomplexe, Constante* a, Constante* b);
Constante* division(const Type& Mode, const Type& Tcomplexe, Constante* a, Constante* b);
Reel* cosinus(Constante* a, bool degre);
Reel* cosinush(Constante* a);
Reel* sinus(Constante* a, bool degre);
Reel* sinush(Constante* a);
Reel* tangente(Constante* a, bool degre);
Reel* tangenteh(Constante* a);
Entier* modulo(Constante* a, Constante* b);
Entier* factorielle(Constante* a);
Constante* puissance(Constante* a, Constante* b, const Type& T);
Constante* logarithme(Constante* a, const Type& T);
Constante* logarithmeN(Constante*a, const Type& T);
Constante* racine(Constante*a, const Type& T);
Constante* carre(Constante*a, const Type& T, const Type& Tcomplexe);
Constante* cube(Constante*a, const Type& T, const Type& Tcomplexe);
Constante* inverse(Constante* a, const Type& T);
Constante* signe(Constante*a, const Type& T, const Type& Tcomplexe);

#endif // CALCUL_H
