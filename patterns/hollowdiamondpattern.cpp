#include <iostream>
using namespace std;
int main(){

    int i; 
    int j; 
    int k;
    int l;
    int m;
    int p;

    

    int n; 

    cout << "enter the number - ";
    cin >> n;


    for ( i=1 ; i<=n ; i++ ){ 

        for ( j = n-i ; j>0 ; j--){

            cout << " ";

        }
        cout <<"*";

        if ( i>1 ){


        for ( k = 1 ; k<= 2*(i-1)-1 ; k++ ){

            cout << " ";


        }
        cout << "*";
    }
        cout << endl;




    }

                                //new outer loop

    for( l = 1 ; l<n ; l++ ){

        for ( m = 1 ; m<=l ; m++ ){

            cout << " ";

        }
        cout << "*";

        if ( l<n-1 ){


            for ( p = 1 ; p<=2*(n-1-l)-1 ; p++ ){

                cout << " ";



            }
            cout << "*";










        }
        cout << endl;



    }




}