#include <iostream>
using namespace std;


int checkprime(int x){

    bool prime = true;



    int i;
    int j;
     
    for(  i=2 ; i<x ; i++ ){

        if( x % i == 0 ){


        prime = false ;
break;


    }
}

if (prime){return 1;}

else return 0;

}

int printprimeN(int x){

    int i;
    

    for ( i=2 ; i < x ; i++ ){

    if( checkprime(i) == 1 ){

        cout << i << " " ;




    }


}



}

 




        



    







int main(){

    int x;

    cout << "enter the number - ";
    cin >> x;

     printprimeN( x );






}