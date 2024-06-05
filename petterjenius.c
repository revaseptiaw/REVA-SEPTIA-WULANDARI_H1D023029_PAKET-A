#include <stdio.h>

int main() {
    // Definisikan array dan pointer yang digunakan
    int arr[] = {1, 6, 13, 16, 25, 26};
    int *pointarr = arr;
    int n = sizeof(arr) / sizeof(arr[0]);

    // Cetak isi array sebelum perubahan
    printf("Daftar halaman sebelum perubahan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ubah value pada array 
    for (int i = 0; i < n; i++) {
        pointarr[i] = pointarr[i];
    }

    // Cetak isi array setelah perubahan
    printf("Daftar halaman setelah perubahan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
