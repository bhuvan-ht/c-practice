#include <stdio.h>
#include <limits.h>
int main(){
    unsigned int var1 = 0;
    unsigned int var2 = UINT_MAX;
    printf("the value of unsigned int is %u to %u\n",var1,var2);// FOR THIS ITS 2^n-1 basically the n is 32 here
    return 0;
}