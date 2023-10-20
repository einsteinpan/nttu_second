#include <iostream>

int counter(int n, int m, int sum) {
    if (n % 2 == 0 && n <= m) {
        sum++;
        return counter(n / 2, m, sum);
    } else {
        if (n != 1 && n <= m) {
            sum++;
            if (3 * n + 1 <= m) {
                return counter(3 * n + 1, m, sum);
            }
            return sum;
        }
        return sum + 1;
    }
}

int main() {
    int n, m;
    int k = 0;

    while (std::cin >> n >> m) {
        if (n < 1 || m < 1) {
            break;
        }
        k++;
        int max = 0;
        if (counter(n, m, 0) > max) {
            max = counter(n, m, 0);
        }
        std::cout << "Case " << k << ": K = " << n << ", limit = " << m << ", number of terms = " << max << std::endl;
    }

    return 0;
}
