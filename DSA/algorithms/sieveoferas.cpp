#include <iostream>
#include <vector>
using namespace std; 


int countPrimes(int &n) {

        int i;

        vector<bool> isPrime( n , true );


        int count = 0;
        

        for( i = 2 ; i < n ; i++ ){

            if( isPrime[i] ){

                count++;

                for(int j = i+i ; j < n ; j = j+i ){

                    isPrime[j] = false;
                }
            }


        }

        return count;
        
    }

int main(){

    int n = 50;

    cout << countPrimes( n );
    













}
