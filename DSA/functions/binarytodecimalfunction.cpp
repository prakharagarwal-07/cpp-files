#include <iostream>
using namespace std;

int decimal(int x){

    int i;
    int digit;
    int prod;
    int sum = 0;
    int power = 1;



    for( i = x ; i > 0 ; i = i / 10){

        digit = i % 10 ;

        prod = digit*power;

        sum = sum + prod;



        power = power*2;


        

    }

    return sum;



}


int main(){

    int n;

    cout << "enter the binary form - ";
    cin >> n;

    cout << decimal( n );
    



}