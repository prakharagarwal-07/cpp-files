#include <iostream>
using namespace std;
int main(){

    long  prod = 1;



    int n;
    int i;

    cout << "enter the number of whihc factorial you want to find - ";
    cin >> n;

    for( i = 1 ; i <= n ; i++){

        prod = prod*i;


    }

    cout << "the factorial of " << n << " is " << prod ;






    return 0;   
}