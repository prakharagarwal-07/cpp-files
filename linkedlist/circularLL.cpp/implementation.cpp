#include <iostream>
using namespace std;

class Node{
public:

    int data;
    Node* next;

    Node(int x){

        data = x;
        next = NULL;

    }
    


};

class CircularLL{
public:

    Node* head;
    Node* tail;

    CircularLL(){

        head = tail = NULL;

    }


    void print(){

        if( head == NULL ){

            return;
        }

        Node* temp = head;

        do{ 
            
            cout << temp->data << " ";
            temp = temp->next; 
            
        }
        
        while( temp != head );

        
    }

    void push_front( int y ){

        Node* newNode = new Node(y);
        

        if( head == NULL ){

            head = tail = newNode;
            tail->next = head;
        }

        else{

            newNode->next = head;
            head = newNode;
            tail->next = head;


        }
    }


    void push_back(int m){

        Node* newNode = new Node(m);

        if( tail == NULL ){

            head = tail = newNode;
            tail->next = head;
        }

        else{

            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }

    void pop_front(){

        if( head == NULL ){

            return;

        }

        if( head == tail ){

            delete head;
            head = tail = NULL;
        }

        else{

            Node* temp = head;
            head = head->next;
            delete temp;
            tail->next = head;
        }
    }

    void pop_back(){

        if( tail == NULL ){

            return;

        }

        if( tail == head ){

            delete tail;
            head = tail = NULL;

        }

        else{

            Node* temp = head;

            while( temp->next != tail ){

                temp = temp->next;

            }

            temp->next = tail->next;
            delete tail;
            tail = temp;
        }
    }



};


int main(){


    CircularLL l1;

    l1.push_back(1);
    l1.push_back(2);
    l1.push_front(10);
    l1.push_front(20);
    l1.push_back(3);
    l1.push_back(4);

    l1.pop_back();
    l1.pop_front();

    l1.push_back(100); 

    l1.print();


}