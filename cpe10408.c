#include <stdio.h>
int main(){
    int s[100001]={};
    int i,a,b;
    for(i=1;i*i<100001;i++){
        s[i*i]=1;
    }
    for(i=1;i<100001;i++){
        s[i]+=s[i-1];
    }
    while(scanf("%d,%d",&a,&b)!=EOF){
        if(a==0 && b==0){
            break;
        }
        printf("%d\n",s[b]-s[a-1]);
    }
    return 0;

}