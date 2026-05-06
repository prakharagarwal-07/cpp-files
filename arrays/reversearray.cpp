#include <iostream>
#include <algorithm>


using namespace std;



void reverse_array( int array[] , int size ){

    int i;
    int start;
    int end;

    for ( start = 0 , end = size -1 ; start < end ; start++ , end-- ){

        swap( array[start] , array[end] );

    }


}



int main(){
    int size = 6;

    int array[  ] = { 1 , 2 , 3 , 4 , 5 , 6};

    reverse_array(array , size);


    for ( int i = 0 ; i < size ; i++){

        cout << array[i] << " ";

    }

return 0 ;
}