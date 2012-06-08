#include "reel.h"

using namespace std;

Reel::Reel(const std::string& val)
{
    construireConstante(val);
    genre = reel;
}

std::string Reel::getChaine() const
{
    stringstream ss;
    ss << valeur;

    return ss.str();
}

void Reel::construireConstante(const std::string& val)
{
    valeur = atof(val.c_str());
}

Reel::Reel(const std::string& val, const Type& T1, const Type& T2)
{
    if(T1 == rationnel)
    {
        float num, denom, i;
        i = val.find_first_of('/');
        num = atof(val.substr(0, i).c_str());
        denom = atof(val.substr(i+1).c_str());

        float f = num / denom;

        valeur = f;
        genre = reel;
    }
    else if(T1 == reel || T1 == entier)
    {
        construireConstante(val);
        genre = reel;
    }
    else if(T1 == complexe)
    {
        int i = val.find_first_of('$');
        string re = val.substr(0, i);

        Reel temp(re, T2);
        valeur = temp.getVal();
        genre = reel;
    }
}
Reel& Reel::operator+=(Reel const& e)
{
   valeur += e.valeur;
   return *this;
}
Reel& Reel::operator-=(Reel const& e)
{
    valeur -= e.valeur;
    return *this;
}
Reel& Reel::operator*=(Reel const& e)
{
    valeur *= e.valeur;
    return *this;
}
Reel& Reel::operator/=(Reel const& e)
{
    valeur /= e.valeur;
    return *this;
}

Reel operator+(Reel const& a, Reel const& b)
{
    Reel temp(a);
    temp += b;
    return temp;
}
Reel operator-(Reel const& a, Reel const& b)
{
    Reel temp(a);
    temp -= b;
    return temp;
}
Reel operator/(Reel const& a, Reel const& b)
{
    Reel temp(a);
    temp /= b;
    return temp;
}
Reel operator*(Reel const& a, Reel const& b)
{
    Reel temp(a);
    temp *= b;
    return temp;
}
