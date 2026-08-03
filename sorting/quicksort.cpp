#include <iostream>
#include <vector>
using namespace std;

int pivotPos( vector<int> &nums , int start , int end , int pivot ){

    int idx = start - 1;
    int i = start;

    while( i <= end ){

        if( nums[i] <= pivot ){

            idx++;
            swap( nums[idx] , nums[i] );

        }

        i++;
    }

    return idx;




}


void quickSort( vector<int> &nums , int start , int end ){

    int pivot = nums[end];

    if( start >= end ){

        return;

    }

    int pivotIdx = pivotPos( nums , start , end , pivot );

    quickSort( nums , start , pivotIdx - 1 );
    quickSort( nums , pivotIdx + 1 , end );


}
int main(){

    vector<int> nums = {2,3,1,4,5};
    int start = 0;
    int end = nums.size()-1;

    quickSort( nums , start , end );

    for( int val: nums ){

        cout << val << " ";
    }


}