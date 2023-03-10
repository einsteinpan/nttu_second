#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;
    int n;  //statement stack
    while(cin >> n && n){
        int parity =0;
        while (n)
        {
            parity +=n%2;
            st.push(n%2);
            n/=2;
        }
        cout <<"the parity of";
        while (st.size())
        {
            cout<<st.top(); 
            st.pop();
        }
        cout<<"is"<<parity<<" (mod 2).\n";
        
    }
    

}