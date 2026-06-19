#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int> &array){


    int i;

    for( i = 1 ; i < array.size() ; i++ ){

        int current = array[i];
        int prev = i - 1; 

        while( prev >= 0 && array[prev] > current ){

            array[prev + 1] = array[ prev ];
            prev--;
        }

        array[prev+1] = current ;


    }
}



void printarray(vector<int> &array){

    int i;

    for( i = 0 ; i < array.size() ; i++ ){

        cout << array[i] << " ";
    }

}


    




    


int main(){

    vector<int> array = { 4,1,2,5,3};

    sort (array);
    
    printarray( array );



}
