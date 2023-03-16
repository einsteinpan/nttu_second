#include <iostream>
using namespace std;

int main(){
    int n;
    int a[1005]={0};
    while(cin >> n){
        int sorted = 1;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(i > 0 && a[i] < a[i-1]){
                sorted = 0;
            }
        }
        if(sorted){
            cout << "The array is sorted in non-decreasing order.\n";
        }
        else{
            cout << "The array is not sorted in non-decreasing order.\n";
        }
    }
    return 0;
}