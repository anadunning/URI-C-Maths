#include <stdio.h>

int main(){

    int B, T, A;

    scanf("%d", &B);
    scanf("%d", &T);

    A = (T + B) * 35;

    if (A > 5600) {
        printf("1\n");
    }
    else if (A < 5600) {
        printf("2\n");
    }
    else {
        printf("0\n");
    }

    return 0;
}
