//cpe22811
#include <iostream>
#include<bits/c++io.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  while(n--){
    int tr[100]={};
    int count=0;
    int l;
    cin>>l;
    for(int i=0;i<=l-1;++i){
      cin>>tr[i];
    }
    for(int i=0;i<=l-2;i++){
      for(int j=0;j<=l-i-2;j++){
        if(tr[j]>tr[j+1]){
          swap(tr[j],tr[j+1]);
          count++;
        }
      }
    }
    cout<<count<<endl;

    
  }
}
