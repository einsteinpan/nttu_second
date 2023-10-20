#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int stairs[n]; 
    int dp[n + 1];  

    for (int i = 0; i < n; i++) {
        cin >> stairs[i];
    }

    dp[0] = 0;  // 起始位置
    dp[1] = stairs[0];  // 第1階的扣分

    for (int i = 2; i <= n; i++) {
        dp[i] = min(dp[i - 1], dp[i - 2]) + stairs[i - 1];
    }

    cout << dp[n] << endl;

    return 0;
}







