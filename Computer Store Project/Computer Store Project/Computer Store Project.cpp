#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <conio.h>
#include <vector>
using namespace std;

class Person {
protected:
	char* true_cust_user, *true_cust_pass, *false_cust_user, *false_cust_pass, *true_owner_user, *true_owner_pass, *false_owner_user, *false_owner_pass;
public:
	/*This class will hold variables for username and password*/
	Person(){}
};

class Inventory {

};

class Finance {

};

class Owner {

};

class Customer {
public:
	void loginCustomer()
	{
		cout << "Customer class called!" << endl;
	}
};

class ComputerStore {
	vector<Customer> customer; //Dynamic array of objects
	Owner owner;
	char program_start_choice;
	int size_of_arr;
public:
	ComputerStore()
	{
		program_start_choice = 'n'; size_of_arr = 0;
	}
	void startStore()
	{
		while (1) //While loop to keep program running until user wants to end.
		{
			system("cls");
			printf("\t\t\t\tWelcome to ComputerStoze\n\t\t\t\t1) Login as Customer\n\t\t\t\t2) Login as Owner\n\t\t\t\t3) Register"
				"\n\t\t\t\t4) Exit\n\t\t\t\tInput: ");
			//if statements for the respective choice
			program_start_choice = _getch();
			if (program_start_choice == '1')
			{
				//ask login for customer
				/*Use a ranged loop to access each array object and
				find the necessary file for login and password*/
				for (Customer x : customer)
				{
					x.loginCustomer();
				}
				exit(0);
			}
			else if (program_start_choice == '2')
			{
				//ask login for owner	
			}
			else if (program_start_choice == '3')
			{
				//create an object everytime users login
				customer.push_back(Customer());
				
			}
			else if (program_start_choice == '4')
			{
				exit(0);
			}
		}
		
	}
};

int main(int argc, char** argv)
{
	system("color E4");
	ComputerStore shop;
	shop.startStore();
}