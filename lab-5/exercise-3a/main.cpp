#include "CarDealership.h"
#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    CarDealership dealership("Premium Motors", "123 Main Street");

    Car *toyota = new Car("Toyota", 2024, "Camry", 25000.0);
    Car *honda = new Car("Honda", 2024, "Civic", 22000.0);
    Car *tesla = new Car("Tesla", 2024, "Model 3", 45000.0);

    dealership.addCarToInventory(toyota);
    dealership.addCarToInventory(honda);
    dealership.addCarToInventory(tesla);

    toyota->startEngine();
    toyota->honkHorn();
    toyota->stopEngine();

    list<Car *> civics = dealership.getCarsByModel("Civic");
    for (Car *car : civics)
    {
        cout << car->getDetails() << "\n";
    }

    dealership.sellCar(honda, "John Smith", 21500.0);

    delete toyota;
    delete honda;
    delete tesla;

    return 0;
}