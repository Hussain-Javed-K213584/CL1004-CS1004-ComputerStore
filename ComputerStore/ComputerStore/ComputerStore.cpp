/*This is an application for a computer store.
This application will be used if the customer wants to buy something off the shop.
Step 1) A customer logs in with his id and pass.
 *If login or pass DNE then ask user to make one OR let him use app without registering 
 *Save ID and pass in a file*/
#include <iostream>
#include <cstring>
#include <string>
#include <ctime>
#include <fstream>
#include <conio.h>
using namespace std;
class Owner {
	string name;
public:
	Owner()
	{
		name = "Hussain Javed";
		
	}
	void LoginAsOwner()
	{

	}
};
class Customer {
	//logically customer class will have login stuff.
	string true_username, false_username, tru_pass, false_pass;
public:
	Customer(){}
	void LoginAsCustomer()
	{

	}
	
	void RegisterToApp()
	{

	}
};
class Shop {
private:
	char choice;
	Customer customer; //HAS-A customer
	Owner owner;
public:
	Shop()
	{
		choice = 'n';
	}
	void startShop()
	{
		cout << "\t\t\t\tWelcome to PcZone\n\n\n\n"
			<< "\t\t\t\t1) Login Owner\n"
			<< "\t\t\t\t2) Login Customer\n"
			<< "\t\t\t\t2) Register\n";
		choice = _getch();
		if (choice == '1')
		{
			owner.LoginAsOwner();
		}
		else if (choice == '2')
		{
			customer.LoginAsCustomer();
		}
		else if (choice == '3')
		{
			customer.RegisterToApp();
		}
	}
};
int main()
{
	Shop shop;
	shop.startShop();
}