#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Mystery.h"
using namespace std;

int main()
{

    string motMystere("");
    cout << "Entrer le mon mystere ici : " << endl;
    cin >> motMystere;

    string finMystere(melangerMot(motMystere));

    cout << "Le mot mystere a ete melanger: " << finMystere << endl;

    string mystereJ2("");

    while(true)
    {

        cout << "J2 : A toi de rentrer le mot mystere ici : ";
        cin >> mystereJ2;

        if(mystereJ2 == motMystere)
        {
            cout << "VRAI" << endl;
            //fin = true;
            break;
        }
        else
        {
             cout << "FAUX, recommence !" << endl;
        }
    }

    return 0;

    system("pause");
}
