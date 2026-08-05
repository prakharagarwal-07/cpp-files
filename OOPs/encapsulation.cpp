#include <iostream>
#include <string>
using namespace std;

class Account{
private:

    double balance = 10;          //hiding the data
    string password;

public:

    void deposit(double amt){

        balance += amt;                       //limited access using member functions
    }

    double getBalance(){

        return balance;
    }

};

int main(){

    Account a1;

    a1.deposit(50);

    cout << a1.getBalance();




}