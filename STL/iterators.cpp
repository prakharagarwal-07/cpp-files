#include <iostream>
#include <vector>
using namespace std;
int main(){

    //iterators ---> vec.begin() and end() 
    // vec.begin() ---> saves the location of the 0th index.
    // vec.end() ---> saves the location of index next to last index where no value exists.



    vector<int> nums1 = { 1,2,3,4,5 };

    cout << *(nums1.begin()) << endl;





    for( auto it = nums1.begin() ; it != nums1.end() ; it++ ){   //using special iterator to print vector

        cout << *( it ) << " ";
    }

    cout << endl;


    //reverse_iterator imp

    // auto can be written in place of 
    // vector<int> :: reverse_iterator itr; c++ understands automatically


    for( auto itr = nums1.rbegin() ; itr != nums1.rend() ; itr++){

        cout << *(itr ) << " ";
    }










}
