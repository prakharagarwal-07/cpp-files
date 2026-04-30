#include <iostream>
using namespace std;
int main(){

    int n;


    int i;
    int j;
     
    char value = 'A';

    cout << "enter the number of lines - ";
    cin >> n;

    for ( i=1 ; i<=n; i++){

        for ( j=1 ; j<=n ; j++){


            cout << value << " ";

            value =  value + 1;



        }

        cout << endl;
        
    }





}