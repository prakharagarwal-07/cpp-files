#include <iostream>
#include <string>
using namespace std;
int main(){

    string ans;


    int x = 123;

    string s = to_string(x);

    for( char c : s ){

        ans.push_back(c);


    }

    cout << ans;
}