#pragma once
#define CAR_H

// CIS 1202 501
// Matthew Brinkman
// 11/29/2020

#include<iostream>
#include<iomanip>
#include<string>
#include "vehicle.h"

using namespace std;

class Car : public Vehicle
{
public:
	Car();
	Car(string newManufacturerName, int newManufacturerYear,
		 int newNumberOfDoors);
	
	int getNumberOfDoors();
	void setNumberOfDoors(int newNumberOfDoors);
	void displayInfo();

private:
	int numberOfDoors;
};