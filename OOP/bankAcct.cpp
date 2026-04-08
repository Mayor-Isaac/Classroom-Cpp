/* Bank Account Implementation*/
#include <iostream>
#include <string>
using namespace std;
class BankAccount{ // a new type of object made possible by the class keyboard;
    public: //access specifier
        string name; //member variable of the BankAccount class
        int balance; //member variable of the BankAccount class
};

int main(){
    BankAccount account1; //an instance of BankAccount class
    account1.name = "Ayokunle"; //dot operator allows you to get at the member variables of the BankAccount object
    account1.balance = 3000;
    cout << account1.name << " has " << account1.balance << " dollars" << endl;
    
    BankAccount account2; //another instance of BankAccount class
    account2.name = "Victoria"; //dot operator allows you to get at the member variables of the BankAccount object
    account2.balance = 1000;
    cout << account2.name << " has " << account2.balance << " dollars" << endl;
    account2.balance = account2.balance - 100;
    cout << account2.name << " has " << account2.balance << " dollars" << endl;

    return 0;
}