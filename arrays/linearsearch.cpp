#include <iostream>
using namespace std;
int array[] = { 1, 2, 3, 4, 5};
int size = 5;

int findelement( int x ){

    int i;

    for( i = 0 ; i < size ; i++ ){

        if ( array[i] == x ){ return i;  ; 
                               break;}
    



}


return -1;

}


int main(){

    int x;

    cout << "enter the number you want to find - ";
    cin >> x;

    cout << "the index number is - " <<  findelement( x ) ;






}





