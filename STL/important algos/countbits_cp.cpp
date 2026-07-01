#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){

    int n = 15;
    long int x = 12345;
        long long int y = 123452345345;



    cout << __builtin_popcount(n) << endl;  //gives the number of 1 bits in n
        cout << __builtin_popcountl(x) << endl;  //used for long int
        cout << __builtin_popcountll(y) << endl;  // for long long int







}