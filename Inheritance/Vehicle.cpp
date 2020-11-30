// CIS 1202 501
// Matthew Brinkman
// 11/29/2020

#include<iostream>
#include<iomanip>
#include<string>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle() : manufacturerName(""), manufacturerYear(0)
{}

Vehicle::Vehicle(const string& newManufacturerName, int newManufacturerYear)
	: manufacturerName(newManufacturerName), manufacturerYear(newManufacturerYear)
{}

string Vehicle::ManufacturerName()
{
	return manufacturerName;
}

int Vehicle::ManufacturerYear()
{
	return manufacturerYear;
}

void Vehicle::setManufacturerName(const string& newManufacturerName)
{
	manufacturerName = newManufacturerName;
}

void Vehicle::setManufacturerYear(int newManufacturerYear)
{
	manufacturerYear = newManufacturerYear;
}

void Vehicle::displayInfo()
{
	cout << "Manufacturer's Name: " << manufacturerName << endl;
	cout << "Manufacturer's Year: " << manufacturerYear << endl;
}