#include <iostream>
using namespace std;

bool check( vector<int> &nums  , int n ){

    if( n == 1 ){

        

        return true;

        
    }

    if( nums[n-1] >= nums[n-2] ){

    return check( nums , n-1 );

    }

    else{


        return false;
    }





}
int main(){

    vector<int> nums = { 1,2,3,4,5 };
    int n = nums.size();


    cout << check( nums , n );

}