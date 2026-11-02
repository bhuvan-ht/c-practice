#include<stdio.h>
#include<limits.h>
int main(){
    unsigned long int var1 = 0;
    unsigned long int var2 = ULONG_MAX;
    printf("the value if usigneed long int is %lu to %lu\n",var1,var2);// for unsigned long int it is 0 to (2^64)-1 basically the n is 64 here
    return 0;
}