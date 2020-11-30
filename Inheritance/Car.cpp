// CIS 1202 501
// Matthew Brinkman
// 11/29/2020

#include<iostream>
#include<iomanip>
#include<string>
#include "Car.h"

using namespace std;


Car::Car(string newManufacturerName, int newNumberOfDoors, int newManufacturerYear)
	: Vehicle(newManufacturerName, newManufacturerYear), numberOfDoors(newNumberOfDoors)
{}

int Car::getNumberOfDoors()
{
	return numberOfDoors;
}

void Car::setNumberOfDoors(int newNumberOfDoors)
{
	numberOfDoors = newNumberOfDoors;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Number of Doors: " << numberOfDoors << endl;
}