// WebDev.cpp : Defines the entry point for the console application.
//Versiune Visual Studio 10.0
//
#include "StdAfx.h"
#include <iostream>
#include <list>
#include "superFunctie.h"

using namespace std;

int add_two(int val)
{
    return val + 2;
}

int substract_two(int val)
{
    return val - 2;
}

int multiply_by_two(int val)
{
    return val * 2;
}

list<int> execute(list<superFunctie> x,int i)
{
    list<int> result;
    for(list<superFunctie>::iterator it=x.begin(); it != x.end(); ++it)
    {
        result.push_back(it->call(i));
    }
    return result;
}

int main()
{
	superFunctie a(add_two),b(substract_two),c(multiply_by_two);
    list<int> rezultat;
	int i = 0;
    list<superFunctie> lista;

	lista.push_back(a);
	lista.push_back(b);
	lista.push_back(c);

	rezultat=execute(lista,4);
	for(list<int>::iterator it=rezultat.begin(); it != rezultat.end(); ++it)
	{
		cout << *it;
		cout << "\n";
	}
    lista.clear();
    rezultat.clear();
	system("pause");

    return 0;
}
