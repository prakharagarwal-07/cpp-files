#include <iostream>
#include <vector>
using namespace std;

bool isValid( vector<int> &array , int mid , int m ){

    int i;
    int currentStudents = 1;
    int currentPages = 0;


    for ( i = 0 ; i < array.size(); i++ ){

        if( array[i] > mid){ return false ; }


        if( currentPages + array[i] <= mid){

            currentPages = currentPages + array[i];

        }

        else { 

            currentStudents++;
            currentPages = array[i];
        }


    }

    if( currentStudents <= m ){ return true ; }
    else { return false ; }
}





int findMin( vector<int> &array , int m ){

    int i;

    int size = array.size();
    int sum = 0;

    for( i = 0 ; i < size ; i++ ){

        sum = sum + array[i];

    }

    int start = 0;
    int end = sum;
    int mid;

    while( start <= end ){

        mid = start + (end-start)/2;


        if( isValid( array , mid , m)){

            end = mid -1;

        }

        else {

            start = mid + 1;
        }
    }

    return start;


}





int main(){

    vector<int> array = { 12 , 34 , 67 , 90 };
    int m = 2;                                  //students = m


    cout << "the number of min pages is - " << findMin( array , m );

    





}