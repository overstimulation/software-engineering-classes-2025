#include <iostream>
#include "Building.h"
#include "Apartment.h"
#include "Room.h"

int main()
{

    Room *livingRoom = new Room(1, "Living Room", 25.5);
    Room *bedroom = new Room(2, "Bedroom", 15.0);
    Room *kitchen = new Room(3, "Kitchen", 12.0);

    Apartment *apt1 = new Apartment(1, 101, 40.5, livingRoom);
    Apartment *apt2 = new Apartment(2, 102, 27.0, bedroom);
    Apartment *apt3 = new Apartment(3, 103, 35.0, kitchen);

    Building *building = new Building(1, "123 Main Street");

    building->addApartment(apt1);
    building->addApartment(apt2);
    building->addApartment(apt3);

    building->displayBuilding();

    building->removeApartment(102);

    building->displayBuilding();

    delete livingRoom;
    delete bedroom;
    delete kitchen;
    delete apt1;
    delete apt2;
    delete apt3;
    delete building;

    return 0;
}