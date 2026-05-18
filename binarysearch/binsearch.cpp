#include <iostream>
#include <vector>
using namespace std;


int binarysearch( vector<int>& array , int& target ){


    int size = array.size();
    int start = 0;
    int end = size-1 ;

    while( start <= end ){

        int mid = ( start + end )/2 ;

        if ( target < array[mid] ){ end = mid -1 ;}
        else if ( target > array[mid] ){ start = mid + 1 ; }
        else if( target == array[mid] ){ return mid ; }


    }

    return -1;

}
int main(){        
    
    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    int target;

    cout << "enter the target - " ;
    cin >> target ;

    cout << "the req index is - "<< binarysearch( array , target );


}