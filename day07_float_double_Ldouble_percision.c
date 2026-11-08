#include <stdio.h>
int main(){
    float var = 3.147852369123456789;
    double var1 = 3.147852369123456789;
    long double var2 = 3.147852369123456789;
    printf("%f\n", var);
    printf("%.3f\n",var1);
    printf("%Lf\n",var2);
    return 0;

}