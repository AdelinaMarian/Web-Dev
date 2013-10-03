#ifndef SUPERFUNCTIE_H
#define SUPERFUNCTIE_H
#include "StdAfx.h"
#include <iostream>
#include <assert.h>
#include <string.h>

class superFunctie
{
    int (*fptr)(int);
public:
    superFunctie();
    superFunctie(int (*fptr)(int));
    superFunctie(const superFunctie&);
    ~superFunctie();
    int call(int);
    void set(int (*fptr)(int));
};

#endif // SUPERFUNCTIE_H