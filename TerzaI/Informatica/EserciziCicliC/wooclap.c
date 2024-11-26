#include <stdio.h>
int main() {
    int x = 1;
    do {
        printf("x = %d\n", x);
        if (x % 3 == 0) {
            x += 3;
        } else {
            x++;
        }
    } while (x < 15);
    return 0;
}
