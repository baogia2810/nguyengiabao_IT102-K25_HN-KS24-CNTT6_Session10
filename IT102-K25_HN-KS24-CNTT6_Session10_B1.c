#include <stdio.h>

int main() {
    int arr[] = {3, 7, 2, 9, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, found = 0;

    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phan tu o vi tri %d\n", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Khong tim thay phan tu\n");
    }

    return 0;
}
