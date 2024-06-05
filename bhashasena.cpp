#include <iostream>
using namespace std;

// Fungsi Linear Search
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

// Fungsi Binary Search
int binarySearch(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int tengah = left + (right - left) / 2;
        if (arr[tengah] == x) {
            return tengah;
        }
        if (arr[tengah] < x) {
            left = tengah + 1;
        } else {
            right = tengah - 1;
        }
    }
    return -1;
}

int main() {
    int n =1;
    int m =100;
    int x;
    cin >> n >> m;

    int array_A[n];
    int array_B[m];

    // Input Array A
    for (int i = 0; i <= n; i++) {
        cin >> array_A[i];
    }

    // Input Array B
    for (int i = 0; i <= m; i++) {
        cin >> array_B[i];
    }

    // Input yang dicari
    cin >> x;

    // Pencarian
    int index_A = linearSearch(array_A, n, x);
    int index_B = binarySearch(array_B, m, x);

    // Output hasil pencarian
    if (index_A && index_B) {
        cout << "keduanya " << index_A << " " << index_B;
    } else if (index_A) {
        cout << "BHASA " << index_A;
    } else if (index_B) {
        cout << "SENA " << index_B;
    } else {
        cout << "tidak ditemukan";
    }

    return 0;
}

