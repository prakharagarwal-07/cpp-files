#include <iostream>
#include <vector>

using namespace std;


void sort( vector<int> &array ){


    int i;
    int j;
    int size = array.size();

    for( i = 0 ; i < size ; i++ ){

        for( j = 0 ; j < size - i - 1 ; j++ ){

            if( array[j] > array[j+1]){

                swap(array[j] , array[j+1]);
            }

            
        }
    }

    

}

void printarray(vector<int> &array){

    int i;

    for( i = 0 ; i < array.size() ; i++ ){

        cout << array[i] << " ";
    }
}



int main(){

    vector<int> array = { 4,1,5,2,3};

    sort( array ) ;
    printarray(array);



}

