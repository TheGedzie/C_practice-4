#include <stdio.h>

double ma_to_a(double ma);

int main(void) {
    double value;

    while (scanf("%lf", &value) == 1) {
        printf("%.2f\n", ma_to_a(value));
    }

    return 0;
}
double ma_to_a(double ma) {
    const double COEFF = 1000.0;
    return ma / COEFF;
}

