#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long A[n];
    
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    long long current_sum = 0;
    long long max_sum = 0;
    
    for (int i = 0; i < n; i++) {
        current_sum = max(A[i], current_sum + A[i]);
        
        max_sum = max(max_sum, current_sum);
    }
    
    cout << max_sum << endl;
    
    return 0;
}
