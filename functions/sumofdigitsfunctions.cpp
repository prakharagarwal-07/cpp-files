#include <iostream>
using namespace std;

int sumofdigits(int x){

    int digsum =0;



    for( x ; x>0 ; x = x/10 ){

        int lastdig = x % 10;   

        

         digsum = digsum + lastdig;

    }

return digsum;



}



int main(){

    int number;

    cout << "enter the number - " ;
    cin >> number;

    cout << "sum of digits is -"  << sumofdigits(number);





}