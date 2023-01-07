#pragma once
#ifndef __HOUSE_H__
#define __HOUSE_H__

#include <iostream>
#include <string>

// ≤˙∆∑¿‡House
class House
{
public:
	House();
	virtual ~House();
	void setFloor(std::string iFloor);
	void setWall(std::string iWall);
	void setRoof(std::string iRoof);
	void printfHouseInfo();

private:
	std::string floor;
	std::string wall;
	std::string roof;
};

#endif // !__HOUSE_H__
