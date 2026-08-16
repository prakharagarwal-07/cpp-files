#include <iostream>
#include <vector>
using namespace std;

class Stack{
public:

    vector<int> v;

    void push( int x ){

        v.push_back(x);
    }

    void pop(){

        v.pop_back();

    }

    int top(){

        return v[v.size()-1];
    }

    bool empty(){

        return v.size() == 0;
    }



};


int main(){

    Stack s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);

    s1.pop();

    cout << s1.empty() << endl;

    while( !s1.empty() ){

        cout << s1.top() << " ";
        s1.pop();
    }
    cout << endl;

   


}