#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string sentance ="is a mulitiple of 9 and hss 9-degree";
    string yes1 =" 1";
    string yes2=" 2";
    int m;
    m=n;
    int sum;
    while(m>0){
        sum+=m%10;
        m/=10;
    }

    if(n>0){
    while(cin>>n){
        if(n%9 ==0){
            if (sum%9==0 &&sum>10) 
            {
                cout<<n<<sentance<<yes2<<endl;
            }else{
                cout<<n<<sentance<<yes1<<endl;
            }
            
        }else{
            cout<<n<<"is notmulitiple of 9."<<endl;
        }
    }
    
    }else{
        cout<<n<<"is not mulitiple of 9."<<endl;
    }


}
