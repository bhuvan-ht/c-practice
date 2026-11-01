#include <stdio.h>

int main() {
    // 1. Integer Data Type
    int age = 25;
    
    // 2. Character Data Type
    char grade = 'A';
    
    // 3. Floating Point Data Type
    float temperature = 98.6f; // 'f' suffix specifies it as a float literal
    
    // 4. Double Precision Data Type
    double pi = 3.141592653589793;

    // Printing values using their respective format specifiers
    printf("Age (int): %d\n", age);
    printf("Grade (char): %c\n", grade);
    printf("Temperature (float): %.1f\n", temperature);// with 6-7 decimal places for float precision
    printf("Pi (double): %.15lf\n", pi);//15 decimal places for double precision

    return 0;
}
