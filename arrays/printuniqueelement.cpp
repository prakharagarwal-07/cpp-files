#include <iostream>
using namespace std;
int main(){

    int i;
    int j;


    int size = 12;


    int array[] = { 1 , 2 , 3 , 1 , 2 , 4  , 5 , 8 , 9 , 9 , 5 , 10 };


    for( i = 0 ; i < size ; i++ ){


            bool isunique = true ;

        for( j = 0 ; j < size ; j++ ){
            if ( array[i] == array[j] && i!=j ) { isunique = false ; 
            break;}
            
        }
        if (isunique){ cout << array[i] << " ";}

    }


}