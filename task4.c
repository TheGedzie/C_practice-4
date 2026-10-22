#include <stdio.h>

int main(void) {
    int i = 1;
    int N;
    int a = 1;      
    int sum = 0;  

    scanf("%d", &N);
    while (i <= N) {
        sum += a;   
        a = a + 3;  
        i++;
    }

    printf("%d\n", sum);

    return 0;
}

