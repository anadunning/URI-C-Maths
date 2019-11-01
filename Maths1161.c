#include <stdio.h>

int main(){

    long long int M, N, i, Mf = 1, Nf = 1;

    while(scanf("%lli %lli", &M, &N) != EOF){

        for(i = M; i >= 1; i--){
            Mf = Mf * i;
        }

        for(i = N; i >= 1; i--){
            Nf = Nf * i;
        }

        printf("%lli\n", Mf + Nf);

        Mf = Nf = 1;
    }

    return 0;
}
