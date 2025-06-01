#include <stdio.h>

int a[10], n;
void heapify(int[], int);

int main() {
    printf("Enter the number of array elements: ");
    scanf("%d", &n);
    int i;
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    heapify(a, n);
    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    return 0;
}

void heapify(int a[], int n) {
    int k;
    for (k = 1; k < n; k++) {
        int key = a[k];
        int c = k;
        int p = (c - 1) / 2;
        while (c > 0 && key > a[p]) {
            a[c] = a[p];
            c = p;
            p = (c - 1) / 2;
        }
        a[c] = key;
    }
}