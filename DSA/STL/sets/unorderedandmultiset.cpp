#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main(){

    unordered_set<int> s;    //it has no ordered storage i.e non lexicographic
    s.insert(10); 
    s.insert(1);
    s.emplace(2);
    s.insert(3);


    s.insert(5);


    s.insert(1);
    s.emplace(2);
    s.insert(3);

    s.erase(2);


    for( int val : s ){

        cout << val << endl;

    }

    cout << endl;

    cout << s.size() << endl;

    cout << s.count(2);



                 

}
