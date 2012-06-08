#include "factoryconst.h"
#include "expression.h"

/*méthode static qui permet de créer et renvoyer un pointeur vers la Constante de type T,
 créée par val, qui contient une chaine correspond à une Constante de type Tdonne
 */
Constante* FactoryConst::creerConstante(const std::string& val, const Type& T, const Type& Tdonne)
{
    if(T == entier)
    {
        return new Entier(val, Tdonne);
    }
    else if(T == rationnel)
    {
        Rationnel* n = new Rationnel(val, Tdonne);
        n->simplifier();
        return n;
    }
    else if(T == reel)
    {
        return new Reel(val, Tdonne);
    }

    return NULL;
}

/*méthode static qui permet de créer et renvoyer un pointeur vers la Constante de type T,
 créée par val, qui contient une chaine correspond à une Constante de type Tdonne.
 Avec Tcomplexe, le type du Complexe à partir duquel la Constante doit etre créée
 */
Constante* FactoryConst::creerConstante(const std::string& val, const Type& T, const Type& Tdonne, const Type& Tcomplexe)
{
    if(T == entier)
    {
        return new Entier(val, Tdonne, Tcomplexe);
    }
    else if(T == rationnel)
    {
        return new Rationnel(val, Tdonne, Tcomplexe);
    }
    else if(T == reel)
    {
        return new Reel(val, Tdonne, Tcomplexe);
    }

    return NULL;
}


/*méthode static qui permet de créer et renvoyer un pointeur vers un complexe(T) de type Tvoulu
  à partir d'une Constante de type Tdonne. Torigine correspond au type du Complexe transmis, lorsque c'est le cas.
 */
Constante* FactoryConst::creerConstante(const std::string& val, const Type& T, const Type& Tdonne, const Type& Tvoulu, const Type& Torigine)
{
    if(T == complexe)
    {
        return new Complexe(val, Tdonne, Tvoulu, Torigine);
    }

    return NULL;
}


Constante* FactoryConst::creerConstante(const std::string& val, const Type& T)
{
    if (T==expression)
    {
        return new Expression(val);
    }
    return NULL;
}
