#include <iostream>
using namespace std;
int main(){

    //to replace if/else statement
    //  condition ? exp1- if true : exp2 - if false ;

    int marks;

    cout <<"enter your marks - ";
    cin >> marks;


    marks >= 33   ? cout << " you pass ! " <<endl: cout << "you fail ! " <<endl;

    //for even or odd number

    int num;

    cout << "enter an integer - " <<endl;
    cin >> num;

    num % 2 == 0 
                ?  cout << "the integer is even " 
                : cout << "the integer is odd ";

}