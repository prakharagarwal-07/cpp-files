#include <iostream>
using namespace std; 

class circularQueue{
public:

    int* arr;
    int currSize , cap;
    int f;
    int r;

    circularQueue( int x ){

        cap = x;
        arr = new int[cap];
        currSize = 0;
        f = 0;
        r = -1;

    }

    void push(int data){

        if( currSize == cap ){

            cout << "the Queue is full";
        }

        r = (r+1)%cap;
        arr[r] = data;
        currSize++;


    }

    void pop(){

        if( currSize == 0 ){

            cout << " the Queue is empty ";
            return;

        }

        f = (f+1)%cap;
        currSize--;



    }

    int front(){

        if( empty() ){

            cout << "the Queue is empty";
            return 0;
        }

        return arr[f];




    }

    bool empty(){

        if( currSize  == 0 ){

            return true;

        }

        return false;


    }



};

int main(){

    circularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    cq.push(4);

    while( !cq.empty() ){

        cout << cq.front() << " ";
        cq.pop();
    }








}