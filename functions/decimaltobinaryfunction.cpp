#include <iostream>
using namespace std;

int binary(int x){

    int i;
    int rem;
    int power = 1;
    int bin;
    int sum = 0;





    for( i=x ; i>0 ; i = i/2 ){

        rem = i % 2 ;

        bin = rem*power;

        sum = sum + bin;

        power = power*10;

        

       



    }
    return sum;





}



int main(){

    int n;

    cout << "enter the number - ";
    cin >> n;

    cout << binary( n );



}