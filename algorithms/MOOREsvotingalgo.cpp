#include <iostream>
#include <vector>
using namespace std;

int majority(vector<int> nums){

     int i;
        int freq = 0;
        int answer;

        for ( i = 0 ; i < nums.size() ; i++ ){
            if( freq == 0) { answer = nums[i] ; }

            if( nums[i] == answer ) { freq++ ; }
            else { freq-- ; }




        }
        return answer;

        

            
        
        
}


int main(){

    vector<int> nums = { 1, 1, 1, 1, 3, 4, 5, 2, 2, 2, 2, 2};

    cout << majority(nums);

}