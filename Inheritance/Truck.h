#pragma once
#define TRUCK_H

// CIS 1202 501
// Matthew Brinkman
// 11/29/2020

#include<iostream>
#include<iomanip>
#include<string>
#include "vehicle.h"

using namespace std;

class Truck : public Vehicle
{
public:
	Truck();
	Truck(string newManufacturerName, int newManufacturerYear,
		int newTowingCapacity);
	
	int getTowingCapacity();
	void setTowingCapacity(int newTowingCapacity);
	void displayInfo();

private:
	int towingCapacity;
};
