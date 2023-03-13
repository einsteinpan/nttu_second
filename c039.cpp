#include <iostream>
using namespace std;

int main(){
    int vir;
    int n =22;
    int m = 1;
    int max=0,min=0;;
    if(m-n>0){
        max=m;
        min=n    ;  
    }else{
        max=n;
        min=m;
    }
    int sum=1;
    for(int i =max;i>=min;i--){
    while (n!=m){
        if(n%2!=0){
            n=3*n+1;
            sum+=1;
            // cout<<n<<endl;
        }else{
            sum=n/2;
            // cout<<n<<endl;
            sum+=1;
        }
    }   
       
    }
    if(sum>vir){
        vir =max;
    }
    cout<< n<<" "<< m<<" "<<sum<<endl; 
}
