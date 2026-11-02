#include <stdio.h>
#include <limits.h>
int main(){
    long int var1 = LONG_MIN;
    long int var2 = LONG_MAX;
    printf("the value of the signed long int is %ld to %ld\n",var1,var2);// for signed long int it is fro -(2^63) to (2^63)-1 basically the n is 64 here
    return 0;
}