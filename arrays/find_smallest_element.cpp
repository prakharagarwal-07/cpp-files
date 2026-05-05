#include <iostream>
#include <climits>

using namespace std;




int smallest_element( int array[] , int size ){



    int i;
    int smallest = INT_MAX ;


    for( i = 0 ;  i < size ; i++ ){

        if ( array[i] < smallest ) {  smallest = array[i]; }

        
    }




    return smallest;

}




int main(){


    int size;
    int i;


    cout << "enter the size of array - ";
    cin  >> size ;

    int array[size];


    for( i=0 ; i<size ; i++){

        cout << "enter the " << i+1  << " element ";

        cin >> array[i];

    }


    cout << "the smallest element is - " << smallest_element( array , size);









}







