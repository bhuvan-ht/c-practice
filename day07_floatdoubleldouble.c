#include <stdio.h>

int main(void) {
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(long double));

    float var = 3.147852369123456789;
    double var1 = 3.147852369123456789;
    long double var2 = 3.147852369123456789L;

    printf("%f\n", var);
    printf("%f\n", var1);
    printf("%Lf\n", var2);

    return 0;
}