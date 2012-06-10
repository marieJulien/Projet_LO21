#include "complexe.h"

using namespace std;

Complexe::Complexe(const std::string& val, const Type& T) : p_Reel(), p_Im()
{
    genre = complexe;
    contient = T;
    construireConstante(val);
}

Complexe::Complexe(const Complexe & a)
{
    contient = a.contient;
    genre = a.genre;

    switch(a.contient)
    {
        case entier:{
            p_Reel = new Entier(a.getReel()->getChaine());
            p_Im = new Entier(a.getIm()->getChaine());
            break;
        }
        case rationnel:{
            p_Reel = new Rationnel(dynamic_cast<Rationnel*>(a.getReel())->getChaine());
            p_Im = new Rationnel(dynamic_cast<Rationnel*>(a.getIm())->getChaine());
            break;
        }
        case reel:{
            p_Reel = new Reel(a.getReel()->getChaine());
            p_Im = new Reel(a.getIm()->getChaine());
            break;
        }
    default:
        break;
    }
}

std::string Complexe::getChaine() const
{
    stringstream ss;

    switch(contient)
    {
        case entier:{
            Entier* temp1 = dynamic_cast<Entier*>(p_Reel);
            Entier* temp2 = dynamic_cast<Entier*>(p_Im);
            ss << temp1->getChaine() << "$" << temp2->getChaine();
            break;}

        case reel:{
            Reel* temp1 = dynamic_cast<Reel*>(p_Reel);
            Reel* temp2 = dynamic_cast<Reel*>(p_Im);
            ss << temp1->getChaine() << "$" << temp2->getChaine();
            break;}

        case rationnel:{
            Rationnel* temp1 = dynamic_cast<Rationnel*>(p_Reel);
            Rationnel* temp2 = dynamic_cast<Rationnel*>(p_Im);
            ss << temp1->getChaine() << "$" << temp2->getChaine();
            break;}
    default:
        break;
    }

    return ss.str();
}

Complexe::~Complexe()
{
    delete p_Reel;
    delete p_Im;
}

void Complexe::construireConstante(const std::string& val)
{
    int i = val.find_first_of('$');
    string temp1 = val.substr(0, i);
    string temp2 = val.substr(i+1);

    if(contient == entier)
    {
        p_Reel = new Entier(temp1);
        p_Im = new Entier(temp2);
    }
    else if(contient == rationnel)
    {
        Rationnel* n = new Rationnel(temp1);
                n->simplifier();
                p_Reel = n;

                Rationnel* n2 = new Rationnel(temp2);
                n2->simplifier();
                p_Im = n2;
    }
    else if(contient == reel)
    {
        p_Reel = new Reel(temp1);
        p_Im = new Reel(temp2);
    }
}

Complexe::Complexe(const std::string& val, const Type& T, const Type& Tvoulu, const Type& Torigine) : p_Reel(), p_Im()
{
    if(Torigine == complexe) exit(12);

    if(T == rationnel)
    {
        switch(Tvoulu)
        {
            case entier:{
                contient = entier;
                Entier* temp1 = new Entier(val, rationnel);
                Entier* temp2= new Entier("0");
                p_Reel = temp1;
                p_Im = temp2;
                break;}

            case reel:{
                contient = reel;
                Reel* temp1 = new Reel(val, rationnel);
                Reel* temp2 = new Reel("0");
                p_Reel = temp1;
                p_Im = temp2;
                break;}

            case rationnel:{
                contient = rationnel;
                Rationnel* temp3= new Rationnel(val);
                Rationnel* temp4 = new Rationnel("0");
                temp3->simplifier();
                temp4->simplifier();
                p_Reel = temp3;
                p_Im = temp4;
                break;}
        default:
            break;
        }

        genre = complexe;
    }
    else if(T == entier)
    {
        switch(Tvoulu)
        {
            case entier:{
                contient = entier;
                Entier* temp1 = new Entier(val);
                Entier* temp2= new Entier("0");
                p_Reel = temp1;
                p_Im = temp2;
                break;}

            case reel:{
                contient = reel;
                Reel* temp3 = new Reel(val, entier);
                Reel* temp4 = new Reel("0");
                p_Reel = temp3;
                p_Im = temp4;
                break;}

            case rationnel:{
                contient = rationnel;
                Rationnel* temp3= new Rationnel(val, entier);
                Rationnel* temp4 = new Rationnel("0");
                temp3->simplifier();
                temp4->simplifier();
                p_Reel = temp3;
                p_Im = temp4;
                break;}
        default:
            break;
        }

        genre = complexe;
    }
    else if(T == reel)
    {
        switch(Tvoulu)
        {
            case entier:{
                contient = entier;
                Entier* temp1 = new Entier(val, reel);
                Entier* temp2= new Entier("0");
                p_Reel = temp1;
                p_Im = temp2;
                break;}

            case reel:{
                contient = reel;
                Reel* temp3 = new Reel(val);
                Reel* temp4 = new Reel("0");
                p_Reel = temp3;
                p_Im = temp4;
                break;}

            case rationnel:{
                contient = rationnel;
                Rationnel* temp3= new Rationnel(val, reel);
                Rationnel* temp4 = new Rationnel("0");
                temp3->simplifier();
                temp4->simplifier();
                p_Reel = temp3;
                p_Im = temp4;
                break;}
        default:
            break;
        }

        genre = complexe;
    }
    else if(T == complexe)
    {
        int i = val.find_first_of('$');
        string temp1 = val.substr(0, i);
        string temp2 = val.substr(i+1);

        switch(Tvoulu)
        {
            case entier:{
                contient = entier;
                Entier* temp3 = new Entier(temp1, Torigine);
                Entier* temp4 = new Entier(temp2, Torigine);
                p_Reel = temp3;
                p_Im = temp4;
                break;}

            case reel:{
                contient = reel;
                Reel* temp3 = new Reel(temp1, Torigine);
                Reel* temp4 = new Reel(temp2, Torigine);
                p_Reel = temp3;
                p_Im = temp4;
                break;}

            case rationnel:{
                contient = rationnel;
                Rationnel* temp3 = new Rationnel(temp1, Torigine);
                Rationnel* temp4 = new Rationnel(temp2, Torigine);
                temp3->simplifier();
                temp4->simplifier();
                p_Reel = temp3;
                p_Im = temp4;
                break;}
        default:
            break;
        }

        genre = complexe;
    }
}
Complexe& Complexe::operator+=(Complexe const& e)
{
    if(contient == entier)
    {
        Entier* temp1 = dynamic_cast<Entier*>(p_Reel);
        Entier* temp2 = dynamic_cast<Entier*>(p_Im);
        Entier* temp3 = dynamic_cast<Entier*>(e.getReel());
        Entier* temp4 = dynamic_cast<Entier*>(e.getIm());

        temp1->setVal(temp1->getVal() + temp3->getVal());
        temp2->setVal(temp2->getVal() + temp4->getVal());
    }
    else if(contient == rationnel)
    {
        Rationnel* temp1 = dynamic_cast<Rationnel*>(p_Reel);
        Rationnel* temp2 = dynamic_cast<Rationnel*>(p_Im);
        Rationnel* temp3 = dynamic_cast<Rationnel*>(e.getReel());
        Rationnel* temp4 = dynamic_cast<Rationnel*>(e.getIm());

        temp1->getNum()->setVal(temp1->getNum()->getVal()*temp3->getDen()->getVal() + temp3->getNum()->getVal()*temp1->getDen()->getVal());
        temp1->getDen()->setVal(temp1->getDen()->getVal() * temp3->getDen()->getVal());

        temp2->getNum()->setVal(temp2->getNum()->getVal()*temp4->getDen()->getVal() + temp4->getNum()->getVal()*temp2->getDen()->getVal());
        temp2->getDen()->setVal(temp2->getDen()->getVal() * temp4->getDen()->getVal());

        temp1->simplifier();
        temp2->simplifier();
    }
    else if(contient == reel)
    {
        Reel* temp1 = dynamic_cast<Reel*>(p_Reel);
        Reel* temp2 = dynamic_cast<Reel*>(p_Im);
        Reel* temp3 = dynamic_cast<Reel*>(e.getReel());
        Reel* temp4 = dynamic_cast<Reel*>(e.getIm());

        temp1->setVal(temp1->getVal() + temp3->getVal());
        temp2->setVal(temp2->getVal() + temp4->getVal());
    }

    return *this;
}
Complexe& Complexe::operator-=(Complexe const& e)
{
    if(contient == entier)
    {
        Entier* temp1 = dynamic_cast<Entier*>(p_Reel);
        Entier* temp2 = dynamic_cast<Entier*>(p_Im);
        Entier* temp3 = dynamic_cast<Entier*>(e.getReel());
        Entier* temp4 = dynamic_cast<Entier*>(e.getIm());

        temp1->setVal(temp3->getVal() - temp1->getVal());
        temp2->setVal(temp4->getVal() - temp2->getVal());
    }
    else if(contient == rationnel)
    {
        Rationnel* temp1 = dynamic_cast<Rationnel*>(p_Reel);
        Rationnel* temp2 = dynamic_cast<Rationnel*>(p_Im);
        Rationnel* temp3 = dynamic_cast<Rationnel*>(e.getReel());
        Rationnel* temp4 = dynamic_cast<Rationnel*>(e.getIm());

        temp1->getNum()->setVal(temp3->getNum()->getVal()*temp1->getDen()->getVal() - temp1->getNum()->getVal()*temp3->getDen()->getVal());
        temp1->getDen()->setVal(temp1->getDen()->getVal() * temp3->getDen()->getVal());

        temp2->getNum()->setVal(temp4->getNum()->getVal()*temp2->getDen()->getVal() - temp2->getNum()->getVal()*temp4->getDen()->getVal());
        temp2->getDen()->setVal(temp2->getDen()->getVal() * temp4->getDen()->getVal());

        temp1->simplifier();
        temp2->simplifier();
    }
    else if(contient == reel)
    {
        Reel* temp1 = dynamic_cast<Reel*>(p_Reel);
        Reel* temp2 = dynamic_cast<Reel*>(p_Im);
        Reel* temp3 = dynamic_cast<Reel*>(e.getReel());
        Reel* temp4 = dynamic_cast<Reel*>(e.getIm());

        temp1->setVal(temp3->getVal() - temp1->getVal());
        temp2->setVal(temp4->getVal() - temp2->getVal());
    }

    return *this;
}
Complexe& Complexe::operator*=(Complexe const& e)
{
    if(contient == entier)
    {
        Entier* temp1 = dynamic_cast<Entier*>(p_Reel);
        Entier* temp2 = dynamic_cast<Entier*>(p_Im);
        Entier* temp3 = dynamic_cast<Entier*>(e.getReel());
        Entier* temp4 = dynamic_cast<Entier*>(e.getIm());
        int i = temp1->getVal();
        temp1->setVal((i * temp3->getVal()) - (temp2->getVal() * temp4->getVal()));
        temp2->setVal((i * temp4->getVal()) + (temp3->getVal() * temp2->getVal()));
    }
    else if(contient == rationnel)
    {
        Rationnel* temp1 = dynamic_cast<Rationnel*>(p_Reel);
        Rationnel* temp2 = dynamic_cast<Rationnel*>(p_Im);
        Rationnel* temp3 = dynamic_cast<Rationnel*>(e.getReel());
        Rationnel* temp4 = dynamic_cast<Rationnel*>(e.getIm());

        int i = temp1->getNum()->getVal();
        int j = temp1->getNum()->getVal();

        temp1->getNum()->setVal(((temp1->getNum()->getVal()*temp3->getNum()->getVal()*temp2->getDen()->getVal()*temp4->getDen()->getVal() - temp2->getNum()->getVal()*temp4->getNum()->getVal()*temp1->getDen()->getVal()*temp3->getDen()->getVal())));
        temp1->getDen()->setVal((temp1->getDen()->getVal()*temp3->getDen()->getVal()*temp2->getDen()->getVal()*temp4->getDen()->getVal()));

        temp2->getNum()->setVal(((i*temp2->getNum()->getVal()*temp2->getDen()->getVal()*temp3->getDen()->getVal() + temp2->getNum()->getVal()*temp3->getNum()->getVal()*j*temp4->getDen()->getVal())));
        temp2->getDen()->setVal((temp1->getDen()->getVal()*temp3->getDen()->getVal()*temp2->getDen()->getVal()*temp4->getDen()->getVal()));

        temp1->simplifier();
        temp2->simplifier();
    }
    else if(contient == reel)
    {
        Reel* temp1 = dynamic_cast<Reel*>(p_Reel);
        Reel* temp2 = dynamic_cast<Reel*>(p_Im);
        Reel* temp3 = dynamic_cast<Reel*>(e.getReel());
        Reel* temp4 = dynamic_cast<Reel*>(e.getIm());
        float i = temp1->getVal();
        temp1->setVal((i * temp3->getVal()) - (temp2->getVal() * temp4->getVal()));
        temp2->setVal((i * temp4->getVal()) + (temp3->getVal() * temp2->getVal()));
    }

    return *this;
}

Complexe operator+(Complexe const& a, Complexe const& b)
{
        Complexe temp(a);
        temp += b;
        return temp;
}
Complexe operator-(Complexe const& a, Complexe const& b)
{
        Complexe temp(a);
        temp -= b;
        return temp;
}
Complexe operator*(Complexe const& a, Complexe const& b)
{
        Complexe temp(a);
        temp *= b;
        return temp;
}
