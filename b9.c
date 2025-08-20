#include <stdio.h>

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertElement(int *arr, int *size, int newValue, int position) {
    if (position < 0 || position > *size) {
        printf("Vi tri chen khong hop le.\n");
        return;
    }
    for (int i = *size - 1; i >= position; i--) {
        *(arr + i + 1) = *(arr + i);
    }

    *(arr + position) = newValue;
    (*size)++;
}
int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    printf("Mang ban dau: ");
    printArray(arr, n);
    int newValue = 99;
    int position = 2;
    insertElement(arr, &n, newValue, position);
    printf("Mang sau khi them phan tu %d vao vi tri %d: ", newValue, position);
    printArray(arr, n);
    return 0;
}