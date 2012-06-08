#include "expression.h"



Expression::Expression(std::string const& val)
{
    construireConstante(val);
    genre = expression;
}


std::string Expression::getChaine() const
{
    return expr;
}

void Expression::construireConstante(const std::string& val)
{
    expr = val;
}
