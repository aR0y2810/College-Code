#include <stdio.h>
typedef struct {
    float real;       // Real part
    float imaginary;  // Imaginary part
} Complex;
int main() {
    Complex z1, z2;  
    printf("Enter the real part of z1: ");
    scanf("%f", &z1.real);
    printf("Enter the imaginary part of z1: ");
    scanf("%f", &z1.imaginary);
    printf("Enter the real part of z2: ");
    scanf("%f", &z2.real);
    printf("Enter the imaginary part of z2: ");
    scanf("%f", &z2.imaginary);
    Complex sum;
    sum.real = z1.real + z2.real;
    sum.imaginary = z1.imaginary + z2.imaginary;
    printf("Sum of z1 and z2: %.2f + %.2fi\n", sum.real, sum.imaginary);
    return 0;
}