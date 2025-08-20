#include <stdio.h>

int main() {
    int soNguyen = 100;
    int *conTroSoNguyen = &soNguyen;
    printf("--- Cach 1: Su dung ten bien thong thuong ---\n");
    printf("Gia tri cua bien soNguyen la: %d\n", soNguyen);
    printf("Dia chi cua bien soNguyen la: %p\n", &soNguyen);
    printf("\n");
    printf("--- Cach 2: Su dung con tro ---\n");
    printf("Dia chi ma con tro dang giu la: %p\n", conTroSoNguyen);
    printf("Gia tri ma con tro dang tro toi la: %d\n", *conTroSoNguyen);
    return 0;
}
