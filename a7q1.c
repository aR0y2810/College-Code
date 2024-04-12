struct complex
{
    float real;
    float imaginary;
};
int main()
{
    struct complex z1, z2;
    printf("Enter the real part of z1: ");
    scanf("%f", &z1.real);
    printf("Enter the imaginary part of z1: ");
    scanf("%f", &z1.imaginary);
    printf("Enter the real part of z2: ");
    scanf("%f", &z2.real);
    printf("Enter the imaginary part of z2: ");
    scanf("%f", &z2.imaginary);
    struct complex sum, sub, mult;
    sum.real = z1.real + z2.real;
    sum.imaginary = z1.imaginary + z2.imaginary;
    sub.real = z1.real - z2.real;
    sub.imaginary = z1.imaginary - z2.imaginary;
    mult.real = (z1.real * z2.real) - (z1.imaginary * z2.imaginary);
    mult.imaginary = (z1.real * z2.imaginary) + (z1.imaginary * z2.real);
    printf("Sum of z1 and z2: %.2f + %.2fi\n", sum.real, sum.imaginary);
    printf("Difference of z1 and z2: %.2f + %.2fi\n", sub.real, sub.imaginary);
    printf("Multiply of z1 and z2: %.2f + %.2fi\n", mult.real, mult.imaginary);
    return 0;
}
