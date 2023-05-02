#include <iostream>
using namespace std;

int gcd(int a,int b){
    if( b==0 )
        return a;
    return gcd( b, a%b );
}

int main(){
    int a,b;
    int ans[502]={0};
    int n;
    for(int i=1;i<502;i++){    //i>j  so j~i of gcd store in ans(instead 0)
        ans[i]=ans[i-1];            
        for(int j=1 ;j<=i ;j++){
            ans[i]+=gcd(i,j);
        }
    }
    while(cin>>n ,n){
        cout<< ans[n]<<endl;
        return 0;
    }

}