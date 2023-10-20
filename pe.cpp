#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int cases;
    cin >> cases;

    for (int t = 0; t < cases; ++t) {
        int n;
        cin >> n;
        int evolution_times[20];

        for (int i = 0; i < n; ++i) {
            cin >> evolution_times[i];
        }


        sort(evolution_times, evolution_times + n);

        int total_waiting_time = 0;
        int cumulative_time = 0;

        for (int i = 0; i < n; ++i) {
            cumulative_time += evolution_times[i];
            total_waiting_time += cumulative_time;
        }

        cout << total_waiting_time << endl;
    }

    return 0;
}