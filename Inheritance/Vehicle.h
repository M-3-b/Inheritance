#pragma once
#define VEHICLE_H

// CIS 1202 501
// Matthew Brinkman
// 11/29/2020

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Vehicle
{
public:
	Vehicle();
	Vehicle(const string& ManufacturerName, int ManufacturerYear);
	
	string ManufacturerName();
	int ManufacturerYear();

	void setManufacturerName(const string& newManufacturerName);
	void setManufacturerYear(int newManufacturerYear);

	void displayInfo();

private:
	string manufacturerName;
	int manufacturerYear;

};
