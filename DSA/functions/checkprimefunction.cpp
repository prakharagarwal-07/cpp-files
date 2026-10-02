#include <iostream>
using namespace std;

int prime(int x){

    bool prime;


    int i;

    
    for( i=2; i<x; i++){

        if( x % i == 0){

            prime = false;


             break;
       }
       else {  prime = true; }
 }

 if (  prime ){

    cout<< "the number is prime ";

 }

 else { cout << "the number is not prime "; 
}


}



int main(){

    int x;

    cout << "enter the number - ";
    cin >> x;
    


    prime( x );



}