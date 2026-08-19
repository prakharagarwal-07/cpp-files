#include <iostream>
#include <vector>
using namespace std;

vector<int> prevSmall( vector<int> nums ){

    stack<int> s;
    vector<int> ans;

    for( int i = 0 ; i < nums.size() ; i++ ){

        while( !s.empty() && s.top() >= nums[i] ){

            s.pop();

        }

        if( s.empty() ){

            ans.push_back(-1);

        }

        else{

            ans.push_back(s.top());
        }

        s.push(nums[i]);
    }

    return ans;



}


int main(){


    vector<int> nums = { 3 , 4 , 9 , 0 , 6 , 10 , 10 , 1 };

    vector<int> answer = prevSmall( nums );

    for( int val: answer ){

        cout << val << " ";
    }



}