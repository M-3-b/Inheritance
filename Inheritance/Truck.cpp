// CIS 1202 501
// Matthew Brinkman
// 11/29/2020

#include<iostream>
#include<iomanip>
#include<string>
#include "Truck.h"

using namespace std;


Truck::Truck(string newManufacturerName, int newManufacturerYear, int newTowingCapacity)
	: Vehicle(newManufacturerName, newManufacturerYear), towingCapacity(newTowingCapacity)
{}

int Truck::getTowingCapacity()
{
	return towingCapacity;
}

void Truck::setTowingCapacity(int newTowingCapacity)
{
	towingCapacity = newTowingCapacity;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing capacity in pounds: " << towingCapacity << endl;
}