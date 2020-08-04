#include <stdio.h>

int main(){

    long long int n, d;

    scanf("%lli", &n);

    d = (n * (n - 3)) / 2;

    printf("%lli\n", d);

    return 0;
}
