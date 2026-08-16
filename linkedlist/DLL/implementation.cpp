#include <iostream>
using namespace std;


class Node{
public:

    Node* next;
    Node* prev;
    int val;

    Node(int x){

        next = NULL;
        prev = NULL;
        val = x;

    }


};


class DoublyList{
public:

    Node* head;
    Node* tail;

    DoublyList(){

        head = tail = NULL;

    }

    void print(){


        Node* temp = head;

        while( temp != NULL ){

            cout << temp->val << " ";
            temp = temp->next;   

        }




    }


    void push_front(int x){

        if(head == NULL){

            Node* newNode = new Node(x);
            head = tail = newNode;

        }

        else{

            Node* newNode = new Node(x);
            newNode->next = head;
            head->prev = newNode;
            head = newNode;


        }   
    }

    void push_back(int y){

        if( tail == NULL ){

            Node* newNode = new Node(y);
            head = tail = newNode;

        }

        else{

            Node* newNode = new Node(y);
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode; 


        }
    }

    void pop_front(){

                    Node* temp = head;


        if( head == NULL ){

            return;


        }

        if( head->next == NULL ){

            head = tail = NULL;
            delete temp;
        }

        else{


            head = head->next;

            head->prev = NULL;

            delete temp;
        }
    }

    void pop_back(){
                Node* temp = tail;


        if( tail == NULL ){

            return;

        }

        if( tail->prev == NULL ){

            tail = head = NULL;
            delete temp;

        }

        else{

        tail = tail->prev;
        tail->next = NULL;
        delete temp;

        }

    
    }

    




};






int main(){


    DoublyList d1;

    d1.push_front(1);
    d1.push_front(2);
    d1.push_front(3);
    d1.push_front(4);
    d1.push_front(5);
    d1.push_back(10);
    d1.pop_front();
    d1.pop_back();

    d1.print();




}