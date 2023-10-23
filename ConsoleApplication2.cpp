#include <iostream>
#include "tab.h"
using namespace std;

int main()
{
    tab x(20), *y, z;

    x.Wypelnij();
    x.Wyswietl();
    y=x.Clone();

   
    y->Wyswietl();

    //z.Wypelnij();
    //z.Wyswietl();

  
    delete y;
}