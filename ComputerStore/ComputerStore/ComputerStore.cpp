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
//template<typename T>
//class LoginSystem {
//	T place_username, real_user, place_pass, real_pass;
//	char choice;
//public:
//	/*This will call the
//	template to login
//	or register the customer.*/
//	void LogintoApp()
//	{
//		system("cls");
//		cout << "\t\t\t\tUsername: ";
//		getline(cin >> ws, place_username);
//		cout << "\t\t\t\tPassword: ";
//		getline(cin >> ws, place_pass);
//	}
//	void RegisterApp()
//	{
//
//	}
//};
class Customer {
	//logically customer class will have login stuff
public:
	void test()
	{
		cout << "Function test of customer called :)";
	}
};
class Shop {
private:
	char choice;
	Customer customer; //HAS-A customer
public:
	Shop()
	{
		choice = 'n';
	}
	void startShop()
	{
		cout << "\t\t\t\tWelcome to PcZone\n\n\n\n"
			<< "\t\t\t\t1) Login\n"
			<< "\t\t\t\t2) Register\n";
		choice = _getch();
		if (choice == '1')
		{
			
		}
		else if (choice == '2')
		{
			customer.test();
		}
	}
};
int main()
{
	Shop shop;
	shop.startShop();
}