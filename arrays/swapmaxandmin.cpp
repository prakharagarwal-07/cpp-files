#include <iostream>
#include <climits>
using namespace std;

int minimum( int array[] , int size ){

    int smallest = INT_MAX;
    int smallestindex = -1;
    int i;


    for( i = 0 ; i < size ; i++ ){

        if( array[i] < smallest ){ smallest = array[i] ;
        smallestindex = i; }
    }
    return smallestindex;


}

int maximum( int array[] , int size ){

    int largestindex = -1;
    int largest = INT_MIN;
    int i;


    for( i = 0 ; i < size ; i++ ){

        if( array[i] > largest ){ largestindex = i;
                                  largest = array[i] ; }                       

    }
    return largestindex;


}

void swapMinMax( int array[] , int size ){

    swap( array[ minimum( array , size )] , array[maximum( array , size )] );
}



int main(){
    

    int size = 5;

    int array[] = { 1 , 2 , 0  , 5 , 1 };

    int i;





    swapMinMax( array , size );

    for( i = 0 ; i < size ; i++){

        cout << array[i] << " ";
    }



    





}

