#include <iostream>
using namespace std;
int main(){

    int i;
    int j;
    int k;
    int n;
    int m;



    cout << "enter the number - ";
    cin >> n;
    
    for( i=1 ; i<=n ; i++){

        for( k=1 ; k<=(n-i) ; k++){

            cout << " ";



        }


        for (j=1 ; j<=i ; j++){

            cout << j ;



        }


        for( m=i-1 ; m>0 ; m-- ){

            cout << m; 

        }



        cout << endl;
    }



}