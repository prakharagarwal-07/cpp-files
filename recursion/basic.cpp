    #include <iostream>
    using namespace std;             //space complexity includes ---> the call stack depth * memory in each call

    void printNum(int n){

        if( n == 1 ){

            cout << 1 << " ";   // this is called base case
            return;
        }

        cout << n << " ";

        printNum(n-1);             //recursion as the function calls itself

    }
    int main(){

        printNum( 10 );



    }