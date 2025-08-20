#include <stdio.h>

void tinhTong(int so1, int so2, int *conTroKetQua) {
    int ketQua = so1 + so2;
    *conTroKetQua = ketQua;
}
int main() {
    int soThuNhat = 15;
    int soThuHai = 20;
    int ketQuaTong;
    printf("Hai so nguyen la: %d va %d\n", soThuNhat, soThuHai);
    tinhTong(soThuNhat, soThuHai, &ketQuaTong);
    printf("Ket qua sau khi tinh tong la: %d\n", ketQuaTong);
    return 0;
}