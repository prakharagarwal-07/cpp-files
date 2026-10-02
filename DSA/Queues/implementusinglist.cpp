#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node{
public:

    int val;
    Node* next;

    Node( int x ){

        val = x;
        next = NULL;

    }
};

class Queue{
public:

    Node* head;
    Node* tail;

    Queue(){

       
        head = tail = NULL;

    }

    void push( int a ){

        Node* newNode = new Node(a);

        if( empty() ){

            head = newNode;
            tail = newNode;


        }

        else{

            tail->next = newNode;
            tail = newNode; 

        }
    }

    void pop(){

        if( head == tail ){

            Node* temp = head;

            head = tail = NULL;

            delete(temp);

        }

        else{

            Node* temp = head;
            head = head->next;

            delete(temp);



             
        }
    }

    bool empty(){

        if( head == NULL ){

            return true;
        }

        return false;


    }

    void front(){

        if( head == NULL ){

            cout << " the Queue is empty ";
        }

        cout << head->val;
    }

   

};

int main(){

    Queue q1;

    q1.push(3);
    q1.push(4);
    q1.push(5);
    q1.pop();
    q1.push(6);

    while( !q1.empty() ){

        q1.front() ;
        q1.pop();
    }







}