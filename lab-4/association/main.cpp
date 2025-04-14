// asocjacja

#include <iostream>
#include "Person.h"
#include "Car.h"

using namespace std;

int main() {
    // Tworzymy obiekty Person i Car
    Person* john = new Person();
    Car* bmw = new Car();

    cout << "Poczatkowo:" << endl;
    cout << "John posiada: " << (john->getCar() ? "tak" : "nie") <<  endl;
    cout << "BMW ma wlasciciela: " << (bmw->getOwner() ? "tak" : "nie") << endl;
    cout << endl;

    // Ustawiamy powiazania
    john->setCar(bmw);
    bmw->setOwner(john); // Chociaz ustawilismy juz w Person::setCar, dla jasnosci mozemy to zrobic tez tutaj

    cout << "Po ustawieniu powiazan:" << endl;
    cout << "John posiada: " << (john->getCar() ? "tak" : "nie") << endl;
    if (john->getCar()) {cout << "Samochod Johna: " << john->getCar() << endl;
    }
        cout << "BMW ma wlasciciela: " << (bmw->getOwner() ? "tak" : "nie") << endl;
    if (bmw->getOwner()) {
        cout << "Wlasciciel BMW: " << bmw->getOwner() << endl;
    }
    cout << endl;

    // Sprawdzamy spojnosc powiazania z obu stron
    cout << "Sprawdzenie spojnosci:" << endl;
    if (bmw->getOwner() == john) {
        cout << "Wlasciciel BMW to John." << endl;
    }
    if (john->getCar() == bmw) {
        cout << "Samochod Johna to BMW." << endl;
    }
    cout << endl;
    
    delete john;
    delete bmw;

    return 0;
}