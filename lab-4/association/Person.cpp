//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Person.cpp
//  @ Date : 18/03/2025
//  @ Author : 
//
//


#include "Person.h"
#include "Car.h"

void Person::setCar(Car* newCar) {
    car = newCar;
}

Car* Person::getCar() {
    return car;
}

