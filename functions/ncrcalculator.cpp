#include <iostream>
using namespace std;


int ncr(int n , int r){

    int i;
    int j;
    int k;
    int deno1=1;
    int deno2=1;


    int num=1;

    

    for( i=1 ; i<=n; i++){

        num = num*i;

    }

    for( j=1; j<=(n-r) ; j++){

        deno1 = deno1*j;

    }

    for( k=1; k<=r ; k++ ){

        deno2 = deno2*k;

    }

    double ncr = num/(deno1*deno2);
    return ncr;
    







}



int main(){

    int n;
    int r;




    cout << "enter N - ";
    cin >> n;

    cout << "enter R -  ";
    cin >> r;


 cout << "the value is - " << ncr ( n , r);






}