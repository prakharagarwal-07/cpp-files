#include <iostream>
using namespace std;
int main(){

    int k ;


    int i;
    int j;
    int n;

    cout << "enter the number - ";
    cin >> n;


    for ( i=1 ; i<=n ; i++){




        for( k=1 ; k<i ; k++){

            cout << " " ;

        }

        for ( j=n ; j>=i ; j--){

            cout << i  ;



        }

        cout << endl;


    }





}