#include <iostream>
#include <string>
using namespace std;

class Banking_System {
private:
    struct node {
        int number;
        string name;
        double balance;
        node* next; };
    node* head;

public:
    Banking_System();       // constractor 
    void Create_account(int account_number, const string& name, double balance); // prototype 
    void Display_accounts();
    void Delete_account(int account_number);
    void Check_account_balance(int account_number);
    void Deposit(int account_number, double amount);
    void Withdraw(int account_number, double amount);
    void count_accounts();
};