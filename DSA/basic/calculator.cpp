#include <iostream>
using namespace std;
int main(){

    cout << "**********CALCULATOR**********" <<endl;
    char op;
    double n1;
    double n2;

    cout << " chose the operation you want to perform  ( +,-,*,/ ) " <<endl;

    cin >> op;

    cout << "enter  number1  : "<<endl<<endl ;
    cin >> n1  ;

    cout << "enter number2 : "<<endl <<endl;
    cin >> n2;


    switch(op){
        case '+':
        cout << n1 + n2 ;
        break;

        case '-':
        cout << n1 -n2 ;
        break;

        case '*':
        cout << n1* n2;
        break;

        case '/':
        cout << n1/n2;
        break;


    }


}