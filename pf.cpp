#include <iostream>
using namespace std;

const int MAX_W = 100;
const int MAX_N = 100;

// 定義一個2D陣列用來儲存路徑數量
long long dp[MAX_W + 1][MAX_N + 1];

int countPaths(int W, int N, int danger[MAX_W][MAX_N]) {
    // 初始化dp陣列，將所有元素設為0
    for (int i = 0; i <= W; i++) {
        for (int j = 0; j <= N; j++) {
            dp[i][j] = 0;
        }
    }

    // 初始位置為1種路徑
    dp[1][1] = 1;

    // 填充dp陣列
    for (int i = 1; i <= W; i++) {
        for (int j = 1; j <= N; j++) {
            // 如果該位置是危險的，則路徑數量設為0
            if (danger[i - 1][j - 1] == 1) {
                dp[i][j] = 0;
            } else {
                // 否則，路徑數量等於上方和左方的路徑數量之和
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
    }

    // 返回右下角位置的路徑數量
    return dp[W][N];
}

int main() {
    int T; // 測試案例數
    cin >> T;

    while (T--) {
        int W, N; // 東西向和南北向道路的數目
        cin >> W >> N;

        // 創建危險位置的陣列
        int danger[MAX_W][MAX_N];
        for (int i = 0; i < W; i++) {
            for (int j = 0; j < N; j++) {
                danger[i][j] = 0; // 初始化所有位置為非危險
            }
            int M; // 危險位置的數量
            cin >> M;
            for (int j = 0; j < M; j++) {
                int d;
                cin >> d;
                danger[i][d - 1] = 1; // 標記危險位置
            }
        }

        long long paths = countPaths(W, N, danger);
        cout << paths << endl;
    }

    return 0;
}
