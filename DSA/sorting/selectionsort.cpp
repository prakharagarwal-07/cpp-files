#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int> &array ){

    int i;
    int j;

    int size = array.size();

    for( i = 0 ; i < size ; i++ ){

        int smallestindex = i;

        for( j = i + 1 ; j < size ; j++ ){

            if(array[j] < array[smallestindex]){

                smallestindex = j;
            }
        } 

          swap(array[i] , array[smallestindex]);
          

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

    sort(array);
    printarray(array);



}