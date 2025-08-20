#include <stdio.h>

void inMangBangConTro(int *arr, int size) {
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int main() {
    int soNguyen[] = {10, 20, 30, 40, 50};
    int kichThuoc = sizeof(soNguyen) / sizeof(soNguyen[0]);
    inMangBangConTro(soNguyen, kichThuoc);
    return 0;
}