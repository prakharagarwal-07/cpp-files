#include <iostream>
using namespace std;
int main(){
    int n;


    int i;

    bool prime ;



    cout << "enter the number - ";
    cin >> n;


    for( i=2 ; i<=(n-1); i++ ){

        if( n%i==0  ) { 
            prime = false;
            break;
            
         }

        else { prime = true; }
    }
    
        if ( prime == true ){ cout << "number is prime ";}
        else { cout << "number is not prime ";}



}