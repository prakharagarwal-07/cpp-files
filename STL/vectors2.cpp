#include <iostream>
#include <vector>
using namespace std;
int main(){

    //more functions


    vector<int> nums1 = { 1,2,3,4,5 };

    //vector<int> nums2(nums1); ---> initialises nums2 with ate elements of nums1.

    cout << nums1.at(2) << endl;
    cout << nums1.front() << endl;
    cout << nums1.back() << endl;

    nums1.push_back(6);

    cout << nums1.size() << endl;
    cout << nums1.capacity() << endl;

    nums1.erase(nums1.begin() + 1 );

    nums1.erase(nums1.begin() + 2 , nums1.begin() + 4);  // erase( start , end + 1 );

    nums1.insert(nums1.begin()+1 , 100 );  //insert.( positoion where insertion req , value to be inserted );

    int x;

    nums1.clear(); //---> clears whole vector !! 
    cout << nums1.empty() << endl; 


    for(int x : nums1 ){

        cout << x << " ";
    }









}
