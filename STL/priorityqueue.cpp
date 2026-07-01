#include <iostream>
#include <queue>
using namespace std; //priority queue sorts the elements in descending order by default
int main(){
    

    priority_queue<int> qu;

    qu.push(1);
    qu.push(5);
    qu.push(10);
    qu.push(3);


    while( !qu.empty() ){

        cout << qu.top() << endl;
        qu.pop();

    }

    cout << endl;
    cout << endl;

    // for ascending order



        priority_queue<int , vector<int> , greater<int>> qt;

    qt.push(1);
    qt.push(5);
    qt.push(10);
    qt.push(3);


    while( !qt.empty() ){

        cout << qt.top() << endl;
        qt.pop();

    }

}