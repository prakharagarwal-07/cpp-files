#include <iostream>
using namespace std;
int main(){
    int n;


    int i;
    int j;
    

    cout << "enter your number  - "; //reverse pattern
    cin >> n;

    for( i=1; i<=n; i++){

        for ( j=i; j>0; j--){

            cout << j << " ";
            


        }

        cout << endl;

    }





}