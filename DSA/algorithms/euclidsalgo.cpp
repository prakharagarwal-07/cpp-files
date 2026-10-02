#include <iostream>
using namespace std;            /// too find GCD of two numbers

                                // a * b = lcm( a,b ) * gcd( a ,b )

int gcd( int a , int b ){

    while( a > 0 && b > 0 ){

        if( a > b ){

            a = a % b;

        }

        else{

            b = b % a;
        }
    }

    if( a == 0 ){
        return b;
    }

   

        return a;
    
}


int main(){

    int a = 20;
    int b = 28;

    cout << gcd( a , b );


}


