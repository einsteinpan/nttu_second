#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n && n > 0) {
        int profits[n];
        for (int i = 0; i < n; i++) {
            cin >> profits[i];
        }

        bool allNegative = true;
        for (int i = 0; i < n; i++) {
            if (profits[i] >= 0) {
                allNegative = false;
                break;
            }
        }

        if (allNegative) {
            cout << "0" << endl;
            continue;
        }

        int max_profit = profits[0];
        int current_profit = profits[0];

        for (int i = 1; i < n; i++) {
            current_profit = max(profits[i], current_profit + profits[i]);
            max_profit = max(max_profit, current_profit);
        }

        cout << max_profit << endl;
    }

    return 0;
}
