#include <iostream>
#include <vector>
using namespace std;
int main(){


    vector<int> nums1 = { 1,2,3,4,5 };

    cout << nums1.at(2) << endl;
    cout << nums1.front() << endl;
    cout << nums1.back() << endl;

    nums1.push_back(6);

    cout << nums1.size() << endl;
    cout << nums1.capacity() << endl;







}
