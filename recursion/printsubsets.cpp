#include <iostream>
using namespace std;

void subset( vector<int> &nums , vector<int> &ans , int i ){

    if( i == nums.size() ){

        for( int val : ans ){

            cout << val << " ";

        }

        cout << endl;

        return;
    }

    ans.push_back( nums[i] );



    subset( nums , ans , i+1 );

    ans.pop_back();


    subset( nums , ans , i+1 );






}



int main(){

    int i = 0;
    vector<int> ans;

    vector<int> nums = { 1,2,3 };  //number of subsets == 2^n

    subset( nums , ans , i);





}