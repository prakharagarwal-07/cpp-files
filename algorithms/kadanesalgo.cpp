#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int kadane( vector<int>& nums ){
    int start;
        int end;
        int k;

        int maxSum = INT_MIN;  int currentSum = 0;

        for( start = 0 ; start < nums.size() ; start++){

            currentSum = currentSum + nums[start];
            maxSum = max(currentSum , maxSum);

            if (currentSum < 0){ currentSum = 0 ;}

            




            }
                       return maxSum;

}

int main(){

    vector<int> nums = {1, 2, 3, 4, 5};

    cout << kadane( nums );


    
}