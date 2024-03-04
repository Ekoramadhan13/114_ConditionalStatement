#include <iostream>
using namespace std; 

int main()
{
    srand(time(0));

    int nbilA, nbilB;
    string status;


    nbilA = rand() % 11;
    nbilB = rand() % 11;

    if (nbilA == nbilB) {
        status = "Bilangannya sama";
    }
    else if (nbilA > nbilB) {
        status = "Bilangan A lebih besar dari bilangan B";
    }
    else
    {
        status = "Bilangan A lebih kecil dari bilangan B";
    }


    cout << "Bilangan A =" << nbilA << endl;
    cout << "Bilangan B =" << nbilB << endl;
    cout << "status BIlangan=" << status << endl;

    cout << nbilA;


    return 0;

}

        

