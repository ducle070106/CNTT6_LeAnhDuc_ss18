#include <stdio.h>
void swap(int *conTroA, int *conTroB) {
    int temp;
    temp = *conTroA;
    *conTroA = *conTroB;
    *conTroB = temp;
}
int main() {
    int a = 5;
    int b = 10;
    printf("Truoc khi hoan doi:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    swap(&a, &b);
    printf("\nSau khi hoan doi:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}