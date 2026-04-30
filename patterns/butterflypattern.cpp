#include <iostream>
using namespace std;
int main(){

    int i;
    int j;
    int k;
    int m;
    int l;
    int o;
    int q;


    int p;

    int n;
     
    cout << "enter the number -" ;
    cin >>n;

    for ( i=1 ; i<=n; i++){

        for( j=1 ; j<=i; j++){

            cout << "*";

        }
        
        for( k=1 ; k<=2*(n-i) ; k++){
            cout << " ";

        }

       for( l=1 ; l<=i ; l++){

        cout <<"*";
       }
       cout <<endl;
//bottom loop

                       
    }

    for( m=n; m>0 ; m--){

        for ( p=m ; p>0 ; p--){

            cout <<"*";


        }
        for( q=2*(n-m) ; q>0 ; q--){

            cout <<" ";  

        }

        for ( o=m; o>0 ; o--){

            cout << "*";

        }

        cout << endl;





    }


 
    


    }
