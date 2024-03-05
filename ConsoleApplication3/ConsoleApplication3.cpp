// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int bilangan;
    srand(time(0));

    bilangan = rand() % 10;

    cout << "bilangan awal = " << bilangan << endl;

    if (bilangan >= 5) {
   // yang didalam kurung namanya operator
        bilangan = 2 * bilangan;
    }

    cout << "bilangan akhir = " << bilangan << endl;
    return 0;

   
}




