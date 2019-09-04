#include <stdio.h>

int main(){

    int N, i;
    int dias = 0;
    float X;

    scanf("%d", &N);

    for(i = 0; i < N; i++){

        scanf("%f", &X);

        while (X > 1.0){
            X = X/2;
            dias++;
        }
        printf("%d dias\n", dias);
        dias = 0;
    }

    return 0;
}
