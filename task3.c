#include <stdio.h>

int main(void) {
    int i = 1;
    int N;
    unsigned long long int a = 1;

    scanf("%d", &N);

    while (i <= N) {
        printf("%llu ", a);
        a = a * 1000;
        i++;
    }
    return 0;
}
