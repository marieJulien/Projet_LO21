#include "pile.h"

using namespace std;

Pile* Pile::instanceUnique = 0;

Pile& Pile::donneInstance()
{
    if(instanceUnique == 0)
        instanceUnique = new Pile;
    return *instanceUnique;
}

void Pile::libereInstance()
{
    if(instanceUnique != 0)
        delete instanceUnique;
    instanceUnique = 0;
}

Pile::Pile()
{
}

Pile::~Pile()
{
    if(instanceUnique != 0)
        delete instanceUnique;

    while(!p.empty())
    {
        delete p.top();
        p.pop();
    }
}

Constante* Pile::sommetPile()
{
    return p.top();
}

void Pile::ajouterPile(Constante* ptr)
{
    p.push(ptr);
}

Constante* Pile::extrairePile()
{
    if(!p.empty()){
    Constante* test = p.top();
    p.pop();
    return test;
    }
    else return NULL;
}
Constante* Pile::dupliquer()
{
    Constante* temp = p.top();
    string s = temp->getChaine();

    if(temp == NULL) return NULL;

    if(temp->getType() == entier)
    {
        Entier* Dup = new Entier(s);
        return Dup;
    }
    else if(temp->getType() == rationnel)
    {
        Rationnel* Dup = new Rationnel(s);
        return Dup;
    }
    else if(temp->getType() == reel)
    {
        Reel* Dup = new Reel(s);
        return Dup;
    }
    else
    {
        Complexe* temp2 = dynamic_cast<Complexe*>(temp);
        Complexe* Dup = new Complexe(s, temp2->getContient());
        return Dup;
    }
}
void Pile::viderPile()
{
    while(!p.empty())
    {
        p.pop();
    }
}
