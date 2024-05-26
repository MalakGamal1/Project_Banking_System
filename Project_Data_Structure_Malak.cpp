#include <iostream>
#include "Bank_System.h"
using namespace std;
int main()
{
	Banking_System Malak;
	int number;
	string name;
	double money , amount;
	cout << "Menue :" << endl;
	cout << "1- Create account" << endl
	   	 << "2- Delete account" << endl
		 << "3- Deposit" << endl 
		 << "4- Withdraw" << endl 
		 << "5- Check account balance" << endl 
		 << "6- Display account" << endl 
		 << "7- Count Accounts" << endl 
		 << "0- Exit" << endl;
	int check;
	cin >> check;
	while (check != 0) {
		switch (check) {
		case 1:
			cout << "Enter the Account Number , Nmae and Balance: ";
			cin >> number >> name >> money ;
			Malak.Create_account(number,name,money);
			cout << endl;
			break;

		case 2:
			cout << "Enter the Account Numer: ";
				cin >> number;
			Malak.Delete_account(number);
				cout << endl;
			break;

		case 3:
			cout << "Enter the Account Number and Amuont: ";
				cin >> number >> amount;
			Malak.Deposit(number, amount);
				cout << endl;
			break;

		case 4:
			cout << "Enter the Account Number and Amuont: ";
				cin >> number >> amount;
			Malak.Withdraw(number, amount);
				cout << endl;
			break;

		case 5:
			cout << "Enter the Account Number: ";
				cin >> number;
			Malak.Check_account_balance(number);
				cout << endl;
			break;

		case 6:
			Malak.Display_accounts();
				cout << endl;
			break;

		case 7 :
			Malak.count_accounts();
			break;

		default: cout << "Enter Number from 0 to 6" << endl;
		}
		cout << "Menue :" << endl 
			 << "1- Create account" << endl 
			 << "2- Delete account" << endl 
			 << "3- Deposit" << endl 
			 <<"4- Withdraw" << endl 
			 << "5- Check account balance" << endl 
			 << "6- Display" << endl 
			 << "7- Count Accounts" << endl
			 << "0- Exit" << endl;
		cin >> check;
	}
	return 0;
}