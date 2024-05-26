#include "Bank_System.h"
Banking_System::Banking_System() {
    head = NULL;                       
}

void Banking_System::Create_account(int number, const string& name, double balance) {
    node* new_node = new node;
    new_node->number = number;
    new_node->name = name;
    new_node->balance = balance;
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
    }
    else {
        node* last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = new_node;
    }
}

void Banking_System::Display_accounts() {
    if (head == NULL) {
        cout << "The System is Empty" << endl;
    }
    else {
        node* current_node = head;
        while (current_node != NULL) {
        
            cout << "Account Number : " << current_node->number
                << ", Name : " << current_node->name
                << ", Balance : " << current_node->balance << endl;
            current_node = current_node->next;
        }
    }
}

void Banking_System::Delete_account(int number) {
    if (head == NULL) {
        cout << "The System is Empty" << endl;
        return;
    }
    node* current = head;
    node* previous = NULL;

    if (current->number == number) {
        head = current->next;
        delete current;
        return;
    }

    while (current != NULL && current->number != number) {
        previous = current;
        current = current->next;
    }

    if (current == NULL) {
        cout << "Account not found in the System" << endl;
        return;
    }

    previous->next = current->next;
    delete current;
}

void Banking_System::Check_account_balance(int number) {
    node* current = head;
    while (current != NULL) {
        if (current->number == number) {
            cout << "Name : " << current->name << " , Balance : " << current->balance << endl;
            return;
        }
        current = current->next;
    }
    cout << "Account not found" << endl;
}

void Banking_System::Deposit(int number, double amount) {
    node* current = head;
    while (current != NULL) {
        if (current->number == number) {
            current->balance += amount;
            cout << "New Balance : " << current->balance << endl;
            return;
        }
        current = current->next;
    }
    cout << "Account not found" << endl;
}

void Banking_System::Withdraw(int number, double amount) {
    node* current = head;
    while (current != NULL) {
        if (current->number == number) {
            if (current->balance >= amount) {
                current->balance -= amount;
                cout << "New Balance : " << current->balance << endl;
            }
            else {
                cout << "Error , Check your Balance" << endl;
            }
            return;
        }
        current = current->next;
    }
    cout << "Account not found" << endl;
}

void Banking_System::count_accounts() {
    int count = 0;
    if (head == NULL) {
        cout << "The System is Empty" << endl;
    }
    else {
        node* current_node = head;
        while (current_node != NULL) {
            count++;
            current_node = current_node->next;
        }
    }
    cout << "Count of accounts : " << count << endl;
}