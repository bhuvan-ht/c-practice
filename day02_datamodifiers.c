#include <stdio.h>
#include <limits.h>
int main(){
    int var1 = INT_MIN;
    int var2 = INT_MAX;
    printf("the value of signed int is %d to %d\n",var1,var2);// for signed int it is fro -(2^31) to (2^31)-1 basically the n is 32 here 
    return 0;
}