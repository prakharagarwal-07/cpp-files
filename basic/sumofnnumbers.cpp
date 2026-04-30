#include <iostream>
using namespace std;
int main(){

    int n;

    cout << "enter the number upto which you want to calculate the sum - ";
    cin >> n;

    int i;
    int sum = 0;



    for ( i = 1 ; i <= n ; i++){

       sum = sum + i;
       
    }
    
    cout <<"the sum is = "<< sum;

}