#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Stack{
public:

    list<int> l;

    void push( int x ){

        l.push_front(x);

        
    }

    void pop(){

        l.pop_front();

        

    }

    int top(){

        return l.front();

       
    }

    bool empty(){

        return l.size() == 0;

    }

       



};


int main(){

    Stack s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(18);
    s1.push(12);

    s1.pop();

    cout << s1.empty() << endl;

    while( !s1.empty() ){

        cout << s1.top() << " ";
        s1.pop();
    }
    cout << endl;

   


}