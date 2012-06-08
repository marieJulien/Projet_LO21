#ifndef EXPRESSION_H
#define EXPRESSION_H


#include "constante.h"

class Expression : public Constante
{

public:
    Expression(std::string const& val);
    std::string getExpr() const {return expr;} //renvoie la valeur de l'Expression
    void setExpr(const std::string& s) {expr = s;} //permet de modifier la valeur de l'Expression
    virtual std::string getChaine() const; //renvoie la chaine correspondant à l'Expression

private:
    std::string expr;
    void construireConstante(const std::string& val);
};

#endif // EXPRESSION_H
