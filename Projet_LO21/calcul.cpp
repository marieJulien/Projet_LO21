#include "calcul.h"

using namespace std;

/****************************** CONVERSIONS **********************************************************************************************************/


Entier* convertirEntier(Constante* a)
{
    if(a->getType() == entier)
    {
        return dynamic_cast<Entier*>(a);
    }
    else if(a->getType() == rationnel)
    {
        return new Entier(a->getChaine(), rationnel);
    }
    else if(a->getType() == reel)
    {
        return new Entier(a->getChaine(), reel);
    }
    else if(a->getType() == complexe)
    {
        return new Entier(a->getChaine(), complexe, dynamic_cast<Complexe*>(a)->getContient());
    }
    else
        return NULL;
}

Rationnel* convertirRationnel(Constante* a)
{
    if(a->getType() == entier)
    {
        return new Rationnel(a->getChaine(), entier);
    }
    else if(a->getType() == rationnel)
    {
        return dynamic_cast<Rationnel*>(a);
    }
    else if(a->getType() == reel)
    {
        return new Rationnel(a->getChaine(), reel);
    }
    else if(a->getType() == complexe)
    {
        return new Rationnel(a->getChaine(), complexe, dynamic_cast<Complexe*>(a)->getContient());
    }
    else
        return NULL;
}

Reel* convertirReel(Constante* a)
{
    if(a->getType() == entier)
    {
        return new Reel(a->getChaine(), entier);
    }
    else if(a->getType() == rationnel)
    {
        return new Reel(a->getChaine(), rationnel);
    }
    else if(a->getType() == reel)
    {
        return new Reel(a->getChaine(), reel);
    }
    else if(a->getType() == complexe)
    {
        return new Reel(a->getChaine(), complexe, dynamic_cast<Complexe*>(a)->getContient());
    }
    else
        return NULL;
}

Complexe* convertirComplexe(Constante* a, const Type& T)
{
    if(a->getType() == entier)
    {
        return new Complexe(a->getChaine(), entier, T);
    }
    else if(a->getType() == rationnel)
    {
        return new Complexe(a->getChaine(), rationnel, T);
    }
    else if(a->getType() == reel)
    {
        return new Complexe(a->getChaine(), reel, T);
    }
    else if(a->getType() == complexe)
    {
        return new Complexe(a->getChaine(), complexe, T, dynamic_cast<Complexe*>(a)->getContient());
    }
    else
        return NULL;
}




/****************************** OPERATEURS BINAIRES **********************************************************************************************************/



Constante* addition(const Type& Mode, const Type& Tcomplexe, Constante* a, Constante* b)
{
    if ((!isExpression(a->getChaine())) && (!isExpression(b->getChaine())))
    {
        switch(Mode)
        {
            case entier:
                return new Entier((*convertirEntier(a) + *convertirEntier(b)).getChaine());
                break;
            case rationnel:
            {
                Rationnel* n= new Rationnel((*convertirRationnel(a) + *convertirRationnel(b)).getChaine());
                n->simplifier();
                return n;
                break;
            }
            case reel:
                return new Reel((*convertirReel(a) + *convertirReel(b)).getChaine());
                break;
            case complexe:
                return new Complexe((*convertirComplexe(a, Tcomplexe) + *convertirComplexe(b, Tcomplexe)).getChaine(), Tcomplexe);
                break;
            default:
                return NULL;
                break;
        }
    }
    else if (!isExpression(a->getChaine()))
    {
        /*Si seulement b est une expression*/
        string s = b->getChaine();
        s.erase(0,1);
        s.erase(s.length()-1,1);
        return new Expression("'" + a->getChaine() + " " + s + " +'");
    }
    else if (!isExpression(b->getChaine()))
    {
        /* Seulement a est une expression */
        string s = a->getChaine();
        s.erase(0,1);
        s.erase(s.length()-1,1);
        return new Expression("'" + s + " " + b->getChaine() + " +'");
    }
    else
    {
        /*Les deux sont des expressions*/
        string sa = a->getChaine();
        string sb = b->getChaine();
        sa.erase(sa.length()-1,1);
        sb.erase(0,1);
        sb.erase(sb.length()-1,1);
        return new Expression(sa + " " + sb + " +'");
    }
}


Constante* soustraction(const Type& Mode, const Type& Tcomplexe, Constante* a, Constante* b)
{
    if ((!isExpression(a->getChaine())) && (!isExpression(b->getChaine())))
    {
        switch(Mode)
        {
            case entier:
                return new Entier((*convertirEntier(b) - *convertirEntier(a)).getChaine());
                break;
            case rationnel:
                {
                Rationnel* n= new Rationnel((*convertirRationnel(a) - *convertirRationnel(b)).getChaine());
                n->simplifier();
                return n;
                break;
            }
            case reel:
                return new Reel((*convertirReel(b) - *convertirReel(a)).getChaine());
                break;
            case complexe:
                return new Complexe((*convertirComplexe(b, Tcomplexe) - *convertirComplexe(a, Tcomplexe)).getChaine(), Tcomplexe);
                break;
            default:
                return NULL;
                break;
        }
    }
    else if (!isExpression(a->getChaine()))
    {
        /*Si seulement b est une expression*/
        string s = b->getChaine();
        s.erase(0,1);
        s.erase(s.length()-1,1);
        return new Expression("'" + a->getChaine() + " " + s + " -'");
    }
    else if (!isExpression(b->getChaine()))
    {
        /* Seulement a est une expression */
        string s = a->getChaine();
        s.erase(0,1);
        s.erase(s.length()-1,1);
        return new Expression("'" + s + " " + b->getChaine() + " -'");
    }
    else
    {
        /*Les deux sont des expressions*/
        string sa = a->getChaine();
        string sb = b->getChaine();
        sa.erase(sa.length()-1,1);
        sb.erase(0,1);
        sb.erase(sb.length()-1,1);
        return new Expression(sa + " " + sb + " -'");
    }
}

Constante* multiplication(const Type& Mode, const Type& Tcomplexe, Constante* a, Constante* b)
{
    if ((!isExpression(a->getChaine())) && (!isExpression(b->getChaine())))
    {
        switch(Mode)
        {
            case entier:
                return new Entier((*convertirEntier(a) * *convertirEntier(b)).getChaine());
                break;
            case rationnel:
                {
                Rationnel* n= new Rationnel((*convertirRationnel(a) * *convertirRationnel(b)).getChaine());
                n->simplifier();
                return n;
                break;
            }
            case reel:
                return new Reel((*convertirReel(a) * *convertirReel(b)).getChaine());
                break;
            case complexe:
                return new Complexe((*convertirComplexe(a, Tcomplexe) * *convertirComplexe(b, Tcomplexe)).getChaine(), Tcomplexe);
                break;
            default:
                return NULL;
                break;
        }
    }
    else if (!isExpression(a->getChaine()))
    {
        /*Si seulement b est une expression*/
        string s = b->getChaine();
        s.erase(0,1);
        s.erase(s.length()-1,1);
        return new Expression("'" + a->getChaine() + " " + s + " *'");
    }
    else if (!isExpression(b->getChaine()))
    {
        /* Seulement a est une expression */
        string s = a->getChaine();
        s.erase(0,1);
        s.erase(s.length()-1,1);
        return new Expression("'" + s + " " + b->getChaine() + " *'");
    }
    else
    {
        /*Les deux sont des expressions*/
        string sa = a->getChaine();
        string sb = b->getChaine();
        sa.erase(sa.length()-1,1);
        sb.erase(0,1);
        sb.erase(sb.length()-1,1);
        return new Expression(sa + " " + sb + " *'");
    }
}

Constante* division(const Type& Mode, const Type& Tcomplexe, Constante* a, Constante* b)
{
    if ((!isExpression(a->getChaine())) && (!isExpression(b->getChaine())))
    {
        switch(Mode)
        {
            case entier:
                return new Entier((*convertirEntier(a) / *convertirEntier(b)).getChaine());
                break;
            case rationnel:
                {
                Rationnel* n= new Rationnel((*convertirRationnel(a) / *convertirRationnel(b)).getChaine());
                n->simplifier();
                return n;
                break;
            }
            case reel:
                return new Reel((*convertirReel(a) / *convertirReel(b)).getChaine());
                break;
            default:
                return NULL;
                break;
        }
    }
    else if (!isExpression(a->getChaine()))
    {
        /*Si seulement b est une expression*/
        string s = b->getChaine();
        s.erase(0,1);
        s.erase(s.length()-1,1);
        return new Expression("'" + a->getChaine() + " " + s + " /'");
    }
    else if (!isExpression(b->getChaine()))
    {
        /* Seulement a est une expression */
        string s = a->getChaine();
        s.erase(0,1);
        s.erase(s.length()-1,1);
        return new Expression("'" + s + " " + b->getChaine() + " /'");
    }
    else
    {
        /*Les deux sont des expressions*/
        string sa = a->getChaine();
        string sb = b->getChaine();
        sa.erase(sa.length()-1,1);
        sb.erase(0,1);
        sb.erase(sb.length()-1,1);
        return new Expression(sa + " " + sb + " /'");
    }
}



Constante* puissance(Constante* a, Constante* b, const Type& T)
{
    if ((!isExpression(a->getChaine())) && (!isExpression(b->getChaine())))
    {
        Reel* temp1 = convertirReel(a);
        Reel* temp2 = convertirReel(b);

        temp1->setVal(pow(temp1->getVal(), temp2->getVal()));

        if(T == entier)
            return convertirEntier(temp1);
        else if(T == rationnel)
        {
            Rationnel* n = convertirRationnel(temp1);
            n->simplifier();
            return n;
        }

        else
            return temp1;
    }
    else if (!isExpression(a->getChaine()))
    {
        /*Si seulement b est une expression*/
        string s = b->getChaine();
        s.erase(0,1);
        s.erase(s.length()-1,1);
        return new Expression("'" + a->getChaine() + " " + s + " pow'");
    }
    else if (!isExpression(b->getChaine()))
    {
        /* Seulement a est une expression */
        string s = a->getChaine();
        s.erase(0,1);
        s.erase(s.length()-1,1);
        return new Expression("'" + s + " " + b->getChaine() + " pow'");
    }
    else
    {
        /*Les deux sont des expressions*/
        string sa = a->getChaine();
        string sb = b->getChaine();
        sa.erase(sa.length()-1,1);
        sb.erase(0,1);
        sb.erase(sb.length()-1,1);
        return new Expression(sa + " " + sb + " pow'");
    }
}



Constante* modulo(Constante* a, Constante* b)
{
    if ((!isExpression(a->getChaine())) && (!isExpression(b->getChaine())))
    {
        Entier* temp1 = convertirEntier(a);
        Entier* temp2 = convertirEntier(b);

        temp1->setVal(temp1->getVal() % temp2->getVal());
        return temp1;
    }
    else if (!isExpression(a->getChaine()))
    {
        /*Si seulement b est une expression*/
        string s = b->getChaine();
        s.erase(0,1);
        s.erase(s.length()-1,1);
        return new Expression("'" + a->getChaine() + " " + s + " mod'");
    }
    else if (!isExpression(b->getChaine()))
    {
        /* Seulement a est une expression */
        string s = a->getChaine();
        s.erase(0,1);
        s.erase(s.length()-1,1);
        return new Expression("'" + s + " " + b->getChaine() + " mod'");
    }
    else
    {
        /*Les deux sont des expressions*/
        string sa = a->getChaine();
        string sb = b->getChaine();
        sa.erase(sa.length()-1,1);
        sb.erase(0,1);
        sb.erase(sb.length()-1,1);
        return new Expression(sa + " " + sb + " mod'");
    }
}






/****************************** OPERATEURS UNAIRES **********************************************************************************************************/





Constante* cosinus(Constante* a, bool degre)
{
    if (!isExpression(a->getChaine()))
    {
        Reel* temp = convertirReel(a);
        if(degre == false)
            temp->setVal(cos(temp->getVal()));
        else
            temp->setVal(cos(temp->getVal()*3.14159265/180));
        return temp;
    }
    else
    {
        string s1 = a->getChaine();
        s1.erase(s1.length()-1,1);

       return new Expression(s1 + " cos'");
    }
}

Constante* cosinush(Constante* a)
{
    if (!isExpression(a->getChaine()))
    {
        Reel* temp = convertirReel(a);
            temp->setVal(cosh(temp->getVal()));
        return temp;
    }
    else
    {
        string s1 = a->getChaine();
        s1.erase(s1.length()-1,1);

       return new Expression(s1 + " cosh'");
    }
}


Constante* sinus(Constante* a, bool degre)
{
    if (!isExpression(a->getChaine()))
    {
        Reel* temp = convertirReel(a);
        if(degre == false)
            temp->setVal(sin(temp->getVal()));
        else
            temp->setVal(sin(temp->getVal()*3.14159265/180));
        return temp;
    }
    else
    {
        string s1 = a->getChaine();
        s1.erase(s1.length()-1,1);

       return new Expression(s1 + " sin'");
    }
}


Constante* sinush(Constante* a)
{
    if (!isExpression(a->getChaine()))
    {
        Reel* temp = convertirReel(a);
            temp->setVal(sinh(temp->getVal()));
        return temp;
    }
    else
    {
        string s1 = a->getChaine();
        s1.erase(s1.length()-1,1);

       return new Expression(s1 + " sinh'");
    }
}



Constante* tangente(Constante* a, bool degre)
{
    if (!isExpression(a->getChaine()))
    {
        Reel* temp = convertirReel(a);
        if(degre == false)
            temp->setVal(tan(temp->getVal()));
        else
            temp->setVal(tan(temp->getVal()*3.14159265/180));
        return temp;
    }
    else
    {
        string s1 = a->getChaine();
        s1.erase(s1.length()-1,1);

       return new Expression(s1 + " tan'");
    }
}


Constante* tangenteh(Constante* a)
{
    if (!isExpression(a->getChaine()))
    {
        Reel* temp = convertirReel(a);
            temp->setVal(tanh(temp->getVal()));
        return temp;
    }
    else
    {
        string s1 = a->getChaine();
        s1.erase(s1.length()-1,1);

       return new Expression(s1 + " tanh'");
    }
}


Constante* factorielle(Constante* a)
{
    if (!isExpression(a->getChaine()))
    {
        Entier* temp = convertirEntier(a);

        int n = temp->getVal();
        if(n < 0) return temp;
        int accu = 1;

        while(n != 0)
        {
            accu *= n;
            n -= 1;
        }

        temp->setVal(accu);
        return temp;
    }
    else
    {
        string s1 = a->getChaine();
        s1.erase(s1.length()-1,1);

       return new Expression(s1 + " fact'");
    }
}


Constante* logarithme(Constante* a, const Type& T)
{
    if (!isExpression(a->getChaine()))
    {
        Reel* temp1 = convertirReel(a);

        temp1->setVal(log10(temp1->getVal()));

        if(T == entier)
            return convertirEntier(temp1);
        else if(T == rationnel)
            return convertirRationnel(temp1);
        else
            return temp1;
    }
    else
    {
        string s1 = a->getChaine();
        s1.erase(s1.length()-1,1);

       return new Expression(s1 + " log'");
    }
}


Constante* logarithmeN(Constante*a, const Type& T)
{
    if (!isExpression(a->getChaine()))
    {
        Reel* temp1 = convertirReel(a);

        temp1->setVal(log(temp1->getVal()));

        if(T == entier)
            return convertirEntier(temp1);
        else if(T == rationnel)
            {
            Rationnel* n = convertirRationnel(temp1);
            n->simplifier();
            return n;
            }
        else
            return temp1;
    }
    else
    {
        string s1 = a->getChaine();
        s1.erase(s1.length()-1,1);

       return new Expression(s1 + " ln'");
    }
}


Constante* racine(Constante*a, const Type& T)
{
    if (!isExpression(a->getChaine()))
    {
        Reel* temp1 = convertirReel(a);

        temp1->setVal(sqrt(temp1->getVal()));

        if(T == entier)
            return convertirEntier(temp1);
        else if(T == rationnel)
            {
            Rationnel* n = convertirRationnel(temp1);
            n->simplifier();
            return n;
            }
        else
            return temp1;
    }
    else
    {
        string s1 = a->getChaine();
        s1.erase(s1.length()-1,1);

       return new Expression(s1 + " sqrt'");
    }
}


Constante* carre(Constante*a, const Type& T, const Type& Tcomplexe)
{
    if (!isExpression(a->getChaine()))
    {
        return multiplication(T, Tcomplexe, a, a);
    }
    else
    {
        string s1 = a->getChaine();
        s1.erase(s1.length()-1,1);

       return new Expression(s1 + " sqr'");
    }
}


Constante* cube(Constante*a, const Type& T, const Type& Tcomplexe)
{
    if (!isExpression(a->getChaine()))
    {
        return multiplication(T, Tcomplexe, a, carre(a, T, Tcomplexe));
    }
    else
    {
        string s1 = a->getChaine();
        s1.erase(s1.length()-1,1);

       return new Expression(s1 + " cube'");
    }
}


Constante* inverse(Constante* a, const Type& T)
{
   if (!isExpression(a->getChaine()))
    {
        if(T == entier)
        {
            Reel* temp = convertirReel(a);
            temp->setVal(1 / temp->getVal());
            return convertirEntier(temp);
        }
        else if(T == rationnel)
        {
            Rationnel* temp = convertirRationnel(a);
            int i = temp->getNum()->getVal();
            temp->getNum()->setVal(temp->getDen()->getVal());
            temp->getDen()->setVal(i);
            temp->simplifier();
            return temp;
        }
        else{
            Reel* temp = convertirReel(a);
            temp->setVal(1/temp->getVal());
            return temp;
        }
    }
    else
    {
        string s1 = a->getChaine();
        s1.erase(s1.length()-1,1);

       return new Expression(s1 + " inv'");
    }
}



Constante* signe(Constante*a, const Type& T, const Type& Tcomplexe)
{
    if (!isExpression(a->getChaine()))
    {
        if(T == entier)
        {
            Entier* temp = convertirEntier(a);
            temp->setVal(-1 * temp->getVal());
            return temp;
        }
        else if(T == rationnel)
        {
            Rationnel* temp = convertirRationnel(a);
            temp->getNum()->setVal(-1 * temp->getNum()->getVal());
            return temp;
        }
        else if(T == reel)
        {
            Reel* temp = convertirReel(a);
            temp->setVal(-1 * temp->getVal());
            return temp;
        }
        else
        {
            Complexe* temp = convertirComplexe(a, Tcomplexe);
            temp->setReel(signe(temp->getReel(), Tcomplexe, Tcomplexe));
            temp->setIm(signe(temp->getIm(), Tcomplexe, Tcomplexe));
            return temp;
        }
    }
    else
    {
        string s1 = a->getChaine();
        s1.erase(s1.length()-1,1);

       return new Expression(s1 + " sign'");
    }
}

