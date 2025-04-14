#include <iostream>
#include "Potega.h"
#include "Silnia.h"
#include "SymbolNewtona.h"
#include "Prawdopodobienstwo.h"

using namespace std;

int main()
{

    Potega p1(2, 3);
    Potega p2(3, -2);
    Potega p3(5, 0);

    cout << "2^3 = " << p1.oblicz() << endl;
    cout << "3^(-2) = " << p2.oblicz() << endl;
    cout << "5^0 = " << p3.oblicz() << endl;

    Silnia s1(5);
    Silnia s2(0);
    Silnia s3(-1);

    cout << "5! = " << s1.oblicz() << endl;
    cout << "0! = " << s2.oblicz() << endl;
    cout << "(-1)! = " << s3.oblicz() << endl;

    SymbolNewtona sn1(5, 2);
    SymbolNewtona sn2(6, 3);
    SymbolNewtona sn3(4, 5);

    cout << "C(5,2) = " << sn1.oblicz() << endl;
    cout << "C(6,3) = " << sn2.oblicz() << endl;
    cout << "C(4,5) = " << sn3.oblicz() << endl;

    Prawdopodobienstwo p_bern1(5, 2, 0.5);
    Prawdopodobienstwo p_bern2(6, 3, 0.3);
    Prawdopodobienstwo p_bern3(4, 2, 1.5);

    cout << "P(X=2 | n=5, p=0.5) = " << p_bern1.obliczPrawdopodobienstwo() << endl;
    cout << "P(X=3 | n=6, p=0.3) = " << p_bern2.obliczPrawdopodobienstwo() << endl;
    cout << "Nieprawidlowe = " << p_bern3.obliczPrawdopodobienstwo() << endl;

    return 0;
}