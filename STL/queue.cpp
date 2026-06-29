#include <iostream>
#include <queue>
using namespace std;
int main(){

    queue<int> qu;  //first in first out = FIFO

    qu.push(1);
    qu.push(2);
    qu.push(3);

    cout << qu.size() << endl;

    cout <<  endl;

    while( !qu.empty() ){

        cout << qu.front() << endl;
        qu.pop();

    }

    cout << endl;
    cout << qu.size() << endl;
}//rest of the fxns are same as stacks