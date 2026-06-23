#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int> &nums){

        int size = nums.size();



        int low = 0;
        int mid = 0;
         int high = size-1;

        while( mid <= high ){
            if( nums[mid] == 0 ){

                swap(nums[low] , nums[mid] );
                low++;
                mid++;
            }

            else if( nums[mid] == 1 ){

                mid++;
            }

            else {

                swap( nums[high] , nums[mid] );
                high--;

            }
        }

        


    }

    int print( vector<int> &nums){

        int i;

        for( i = 0 ; i < nums.size() ; i++ ){

            cout << nums[i] << " ";
        }
    }



int main(){

    vector<int> nums = { 1 , 0 , 1 , 1 , 2 , 2 , 2 , 0 , 0 , 1 };

    sort(nums);
    print(nums);


}