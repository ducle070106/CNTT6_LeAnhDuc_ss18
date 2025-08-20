#include <stdio.h>

int find_element(int *arr, int size, int target_value) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == target_value) {
            return i;
        }
    }
    return -1;
}
