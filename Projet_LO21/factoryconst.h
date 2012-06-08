#ifndef FACTORYCONST_H
#define FACTORYCONST_H

#include "complexe.h"
#include "expression.h"


class FactoryConst
{
public:
    static Constante* creerConstante(const std::string& val, const Type& T);
    static Constante* creerConstante(const std::string& val, const Type& T, const Type& Tdonne);
    static Constante* creerConstante(const std::string& val, const Type& T, const Type& Tdonne, const Type& Tcomplexe);
    static Constante* creerConstante(const std::string& val, const Type& T, const Type& Tdonne, const Type& Tvoulu, const Type& Torigine);

   private:
    FactoryConst() {} //empeche d'instancier FactoryConst
};

#endif // FACTORYCONST_H
