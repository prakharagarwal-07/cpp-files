#include <iostream>
using namespace std;


int sum_array( int array[] , int size ){

    int sum = 0;

    int i;

    for( i = 0 ; i < size ; i++ ){

        sum = sum + array[i];

    }
    return sum;

}



int main(){

    int size;

    int i;

    cout << "enter the count of numbers you want to add - ";
    cin >> size;
            int array[size];


    cout << "enter the numbers you want to add - " << endl;

    for (  i = 0 ; i < size ; i++ ){

        cin >> array[i];

    }

    cout << "the sum is - " << sum_array( array , size );




}