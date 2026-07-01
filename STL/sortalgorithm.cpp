#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){


    vector<int> vec = {8,9,2,5,1,4};



    sort(vec.begin() , vec.begin() + 4 , greater<int>()); // greater<int>() ---> for descending sort

    for( int i = 0 ; i < vec.size() ; i++ ){
        cout << vec[i] << endl;
    }
}