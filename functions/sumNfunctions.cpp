#include <iostream>
using namespace std;

int i;



int sumN(int n){

    int sumN = 0;

    for ( i=1 ; i<=n ; i++){

        sumN = sumN + i;
        

    }

    return sumN;

}



int main(){

    int number;
    cout << "enter the number - ";
    cin >> number
;


    cout << sumN(number);




}