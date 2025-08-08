#include <stdio.h>

int main() {
    int arr[] = {8, 3, 5, 1, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key, j;

    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
