#include <iostream>
#include <set>
using namespace std;
int main(){

    set<int> s;   //set stores only unique values adding the same values again will not add in the set


    s.insert(10); //ascending order storage

    s.insert(1);
    s.emplace(2);
    s.insert(3);


    s.insert(5);


    s.insert(1);
    s.emplace(2);
    s.insert(3);

    s.erase(2);



    cout <<"lower bound is = " <<  *(s.lower_bound(4)) << endl;

    //lower_bound(key) tells that the returned value cannot be smaller than the key but can be equal to it


    //LB and UB is used only for sorted containers
    //upper_bound(key) gives the value greater than the key but not equal  to the key

    cout << "upper bound is = " << *(s.upper_bound(9)) << endl;



    for( int val : s ){

        cout << val << endl;

    }

    cout << endl;

    cout << s.size() << endl;

    cout << s.count(2);



                 

}
