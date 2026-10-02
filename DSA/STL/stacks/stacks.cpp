#include <iostream>
#include <stack>
using namespace std;
int main(){

    stack<int> st;

    st.push(4);
    st.emplace(8);
    st.push(12);

        stack<int> st2;

    st2.swap(st);

    cout << st2.top() << endl ;



    cout << st.size() << endl;

    while( !st2.empty() ){

        cout << st2.top() << endl;

        st2.pop();
    }



    
}