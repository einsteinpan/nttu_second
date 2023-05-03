#include <iostream>
using namespace std;

int aa(int y1,int x1){
    int one=0;
    one =x1;
    int sum = 0,count=0;
    int high =0;
    while(y1 >0){
        y1--;
        one++;
        //high++;
    }
    sum=one;
    one--;
    for(int i=one;i>=1;i--){
        sum = sum+i;
        count++;
    }
    sum+=count;
    sum+=high;
    return sum;

}
int main(){
    int x0,y0,x1,y1,n;
    int total =0;
    cin>>n;
   for(int text=0 ;text<=n;text++){ 
    cin>>x0>>y0>>x1>>y1;
    total = aa(x0,y0) -aa(x1,y1);
    cout<<total<<endl;
   // cout<<aa(1,3)<<endl;
   }
}