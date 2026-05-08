#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> vec = { 1, 2, 3};
    cout << vec[0] << endl;  //element at index 0

    vector<char> vec1(5 , 'b');  // (size , value at each index)

    cout << vec1[4] << endl;

        vec1.push_back('X');
        vec1.push_back('t');



    for(char i :  vec1) {                   // for loop SYNTAX for VECTORS
        cout << i << " ";
    }

    cout << endl;
    
    vec.front();



    cout << vec.size() << endl;   //size

    cout << vec.at(1) << endl;

    cout << vec1.capacity()<<endl;







    



}