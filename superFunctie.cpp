#include "StdAfx.h"
#include "superFunctie.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

superFunctie::superFunctie()
{
    fptr=NULL;
}
superFunctie::superFunctie(int (*new_func)(int))
{
    fptr=new_func;
}

superFunctie::superFunctie(const superFunctie& obj)
{
    fptr=NULL;
    fptr=obj.fptr;
}

superFunctie::~superFunctie()
{
    fptr=NULL;
}

int superFunctie::call(int argument)
{
    assert(fptr!=NULL);
    return fptr(argument);
}

void superFunctie::set(int (*new_func)(int))
{
    fptr=new_func;
}