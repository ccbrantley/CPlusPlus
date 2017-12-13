#pragma once
#include <sstream>
#include <string>
using namespace std;
class Inventory
{
public:
	Inventory();
	Inventory(int itemNo, int quantity, double cost);
	void Inventory::setItemNo(int);
	void Inventory::setQuantity(int);
	void Inventory::setCost(double);
	void Inventory::setTotalCost(int, double);
	int Inventory::getItemNo();
	int Inventory::getQuantity();
	double Inventory::getCost();
	double Inventory::getTotalCost();
	string Inventory::print();
	~Inventory();
private:
	int itemNo, quantity;
	double cost, totalCost;
};
