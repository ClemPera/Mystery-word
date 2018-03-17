#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Mystery.h"

using namespace std;

string melangerMot(string word)
{
    // word == motMystere
    int longeur(word.size());

    string finMystere("");
    for(int i(0); i < longeur;i++)
    {
        string MystereTemp(word);


        int position = rand() % MystereTemp.size();

        cout << "position : "<< position << endl;

        char wordTemp(MystereTemp[position]);


        cout << "wordTemp : " << wordTemp << endl; // afficher les lettre 1 par 1

        finMystere = finMystere + wordTemp;

        word.erase(position,1);
        //cout << "lettres effacer : " << toto << endl;

    }

    return finMystere;
}
