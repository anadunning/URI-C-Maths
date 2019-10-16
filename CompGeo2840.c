#include <stdio.h>
#define PI 3.1415

int main(){

    long long R, L, raio3;
    long long V, bal;

    scanf("%lld %lld", &R, &L);

    raio3 = R * R * R;

    V = ((PI * raio3) * 4) / 3;

    bal = L / V;

    printf("%lld\n", bal);

    return 0;
}
