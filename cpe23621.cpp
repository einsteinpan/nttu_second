#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    int b[1005]={0};
    int t=0;
    int b2=0;
    while(cin >>n){       
        if(i > 0 && b[i] < b[i-1]){
            cin >> b[i];
            if(b[i]<=b[i-1]){
                b2=1;
            }
        }
    }
}