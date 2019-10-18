#include <stdio.h>

int main(){

    int N, x, y, i = 0, a;

    scanf("%d", &N);

    while (i < N){

        scanf("%d %d", &x, &y);

        a = (x * y) / 2;

        printf("%d cm2\n", a);
        i++;
    }

    return 0;
}
