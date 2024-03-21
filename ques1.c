#include <stdio.h>

void circular_shift_right(int *a, int *b, int *c) {
    int temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}

int main() {
    int x = 5, y = 8, z = 10;
    
    printf("Before circular shift: x = %d, y = %d, z = %d\n", x, y, z);
    
    circular_shift_right(&x, &y, &z);
    
    printf("After circular shift: x = %d, y = %d, z = %d\n", x, y, z);
    
    return 0;
}
