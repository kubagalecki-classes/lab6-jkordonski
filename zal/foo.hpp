#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>
using namespace std;

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    for_each(people.rbegin(), people.rend(), [&](Human& h){h.birthday();});

    trensform(people.begin(), people.end(), ret_v.rbegin(), [&](Human& h)
     {
     if (h.isMonster()==true){return 'n';}
     else{return 'y';}
     });

    return ret_v;
}
