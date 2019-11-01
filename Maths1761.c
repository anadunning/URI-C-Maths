#include <stdio.h>
#include <math.h>
#define PI 3.141592654

int main(){

    double A, B, C, s, h;

    while (scanf("%lf %lf %lf", &A, &B, &C) != EOF){

        h = (tan(A * (PI / 180.0)) * B) + C;
        s = 5 * h;

        printf("%.2lf\n", s);
    }
    return 0;
}
