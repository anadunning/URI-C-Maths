#include <stdio.h>

int main(){

    long long int A, B, i, sum = 0, count = 0;

    scanf("%lli %lli", &A, &B);

    for(i = A; i <= B; i++){
        count++;
        sum = ((A + B) * count) / 2;
    }

    printf("%lli\n", sum);

    return 0;
}
