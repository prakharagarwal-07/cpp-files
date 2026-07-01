#include <iostream>
#include <deque>
using namespace std;
int main(){

    //implemented using dynamic arrays
    //therefore random access is available i.e deq[0],de1[3] etc is valid
    //which is not valid for lists


    deque<int> deq = { 1, 2 };

    deq.push_back(4);
    deq.push_front(33);
    deq.emplace_front(12);
    deq.pop_back();

    for( int x : deq ){

        cout << x << " ";

    }
}