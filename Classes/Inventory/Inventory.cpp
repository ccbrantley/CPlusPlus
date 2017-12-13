#include "Inventory.h"
Inventory::Inventory()
{
	this->itemNo = 0;
	this->quantity = 0;
	this->cost = 0;
	this->totalCost = 0;
}
Inventory::Inventory(int itemNo, int quantity, double cost) {
	this->itemNo = itemNo;
	this->quantity = quantity;
	this->cost = cost;
	Inventory::setTotalCost(quantity, cost);
}
void Inventory::setItemNo(int itemNo) {this->itemNo = itemNo;}
void Inventory::setQuantity(int quantity) { this->quantity = quantity; }
void Inventory::setCost(double cost) { this->cost = cost; }
void Inventory::setTotalCost(int quantity, double cost) { this->totalCost = quantity * cost; }
int Inventory::getItemNo() { return this->itemNo; }
int Inventory::getQuantity() { return this->quantity; }
double Inventory::getCost() { return this->cost; }
double Inventory::getTotalCost() { return totalCost; }
string Inventory::print() {
	stringstream s;
	s << "Item #: " << itemNo << endl << "Quantity: " << quantity << endl << "Cost: " << cost << endl << "Total Cost: " <<
		totalCost << endl;
	return s.str();
}
Inventory::~Inventory()
{
}
