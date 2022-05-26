#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
using namespace std;

class Inventory {

};

class Finance {

};

class Owner {

};

class Customer {

};

class ComputerStore {
	Customer* customer;
	Owner owner;
public:
	ComputerStore()
	{
		customer = new Customer;
	}
	void startStore()
	{

	}
};

int main(int argc, char** argv)
{
	system("color 0A");
}