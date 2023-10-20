#include <iostream>
using namespace std;

long long total_swaps;
const int MAX_N = 1000;

void merge(int heights[], char classes[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int left_heights[MAX_N];
    char left_classes[MAX_N];
    int right_heights[MAX_N];
    char right_classes[MAX_N];

    for (int i = 0; i < n1; i++) {
        left_heights[i] = heights[left + i];
        left_classes[i] = classes[left + i];
    }

    for (int i = 0; i < n2; i++) {
        right_heights[i] = heights[mid + 1 + i];
        right_classes[i] = classes[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (left_heights[i] <= right_heights[j]) {
            heights[k] = left_heights[i];
            classes[k] = left_classes[i];
            i++;
        } else {
            heights[k] = right_heights[j];
            classes[k] = right_classes[j];
            j++;
            total_swaps += n1 - i;
        }
        k++;
    }

    while (i < n1) {
        heights[k] = left_heights[i];
        classes[k] = left_classes[i];
        i++;
        k++;
    }

    while (j < n2) {
        heights[k] = right_heights[j];
        classes[k] = right_classes[j];
        j++;
        k++;
    }
}

void mergeSort(int heights[], char classes[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(heights, classes, left, mid);
        mergeSort(heights, classes, mid + 1, right);
        merge(heights, classes, left, mid, right);
    }
}

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }

        int heights[MAX_N];
        char classes[MAX_N];
        total_swaps = 0;

        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> classes[i];
        }

        mergeSort(heights, classes, 0, n - 1);

        for (int i = 0; i < n; i++) {
            cout << heights[i] << " ";
        }
        cout << endl;

        for (int i = 0; i < n; i++) {
            cout << classes[i];
        }
        cout << endl;

        cout << total_swaps << endl;
    }

    return 0;
}
