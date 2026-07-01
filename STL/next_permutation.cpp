#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    vector<int> vec = {1,2,3,4};

     next_permutation(vec.begin() , vec.end());

     for( int val : vec ){

        cout << val << " ";
     }

     cout << endl;

          prev_permutation(vec.begin() , vec.end());
                    prev_permutation(vec.begin() , vec.end());


               for( int val : vec ){

        cout << val << " ";
     }




}