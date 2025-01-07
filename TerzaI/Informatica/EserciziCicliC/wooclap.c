#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {
        int sum = 0;
        for (int j = 1; j <= i; j++) {
            sum += j;
        }
        printf("%d = %d\n", i, sum);
    }
    return 0;
}
