#include "Role.h"

Role::Role()
{
    title = "";
}

Role::Role(string t)
{
    title = t;
}

void Role::setTitle(string t)
{
    title = t;
}

string Role::getTitle() const
{
    return title;
}
