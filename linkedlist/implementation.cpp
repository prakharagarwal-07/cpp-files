        #include <iostream>
        using namespace std;


        class Node{
        public:
            int data;
            Node* next;

            Node( int val ){
                data = val;
                next = NULL;
            }
        };


        class List{
        public:

            Node* head;
            Node* tail;

            List(){

                head = tail = NULL;
            }

            void push_front(int val){             //push front

                Node* newNode = new Node(val);

                if(head == NULL){

                    head = tail = newNode;
                    return;
                }

                else{
                    
                    newNode->next = head;
                    head = newNode;
                    return;




                }
            }





            void push_back( int val2 ){              //push back

                Node* newNode = new Node(val2);

                if( tail == NULL ){
                    head = tail = newNode;
                    return;
                }

                else{

                    tail->next = newNode;
                    tail = newNode;


                }


            }







    
            void print(){                           //print

                Node* temp = head;

                while( temp != NULL ){

                    cout << temp->data << " ";

                    temp = temp->next;
                }

                cout << endl;
            }







            void pop_front(){                            // pop front

            
                if( head == NULL ){

                    cout << " LL is empty ";
                    return;
                }

                if( head == tail ){

                    delete head;

                    head = tail = NULL;

                    return;

                    
                }



                Node* temp = head;

                head = head-> next;

                delete temp;
                return;
            }






            void pop_back(){                                             //pop back

                

                Node* temp = head;
                Node* del = tail;

                if( head == NULL ){

                    cout << " LL is empty ";
                    return;
                }

                if( head == tail ){

                    delete head;

                    head = tail = NULL;

                    return;

                    
                }

                while( temp->next != tail ){


                    temp = temp->next;

                }

                tail = temp;
                temp-> next = NULL;




                delete del;
            }



            void insert( int val , int pos ){                   //insert


                if( pos < 0 ){return;}

                if( pos == 0 ){

                    push_front(val);
                    return;
                }


                Node* newNode = new Node(val);
                Node* temp = head;

                for( int i = 0 ; i < pos - 1 ; i++ ){

                    temp = temp->next;

                }

                Node* nextNode = temp->next;

                temp->next = newNode;
                

                newNode->next = nextNode;

                return;

            }



            int search( int val ){                            //search


                Node* temp = head;
                int idx = 0;

                while( temp != NULL ){

                    if( temp->data == val ){

                        return idx;
                    }

                   

                    temp = temp->next;
                    idx++;
                }

                return -1;
            }



            int size(){                                    //size

                int idx = 0;
                Node* temp = head;

                while( temp != NULL ){

                    
                    idx++;
                    temp = temp->next;
                }

                return idx;
            }

            




        };




        int main(){

            List l1;

            l1.push_back(1);
            l1.push_back(2); 
            l1.push_back(3); 
            l1.push_front(7); 
            l1.push_front(8); 
            l1.push_front(9);


            l1.insert( 20 , 3 );
        



            l1.pop_front();
            l1.pop_back();



            l1.print();              //print the list


            cout << l1.search(90) << endl;


            cout << "size is - " << l1.size() << endl;

        



            
        }

