#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void addition()
{
    printf("Enter the numbers you want to add: ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("The sum of a and b is %d\n", a + b);
}
void subtraction()
{
    printf("Enter the numbers you want to subtract: ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("The subtraction of a and b is %d\n", a - b);
}
void multiplication()
{
    printf("Enter the numbers you want to multiply: ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("The multiplication of a and b is %d\n", a * b);
}
void division()
{
    printf("Enter the numbers you want to divide: ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("The division of a and b is %f\n", a / b);
}
void modulus()
{
    printf("Enter the numbers you want to find modulus of: ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("The modulus of a and b is %d\n", a % b);
}
int fact(int n)
{
    if(n <= 1) return 1;
    return n * fact(n - 1);
}
void factorial()
{
    int n;
    printf("Enter the number you want the factorial of: ");
    scanf("%d", &n);
    long long int factorial = fact(n);
    printf("\nFactorial of %d is %d", n, factorial);
}
int p(int x, int n)
{
    if(n == 0) return 1;
    int temp = p(x, n / 2) * p(x, n / 2);
    return (n % 2 != 0) ? (temp * x) : (temp);
}
void power()
{
    int x;
    int n;
    printf("Enter the base and the power: ");
    scanf("%lf%lf", &x, &n);
    int ans = p(x, n);
    printf("The power is %lf", ans);
}
void square()
{
    int n;
    printf("Enter the number you want the square of: ");
    scanf("%lf", &n);
    int ans = p(n, 2);
    printf("The square of %lf is %lf", n, ans);
}
void cube()
{
    int n;
    printf("Enter the number you want the cube of: ");
    scanf("%lf", &n);
    int ans = p(n, 3);
    printf("The cube of %lf is %lf", n, ans);
}
void squareroot()
{
    double b;
    printf("Enter the number you want the square root of : ");
    scanf("%lf", &b);
    double s = sqrt(b);
    printf("The square root of %lf is %lf", b, s);
}

int main()
{
    printf("\t\tWelcome to the scientific calculator!!\n\n");
    int c;
    printf("\n####### Press 0 to quit the program ########\n");
    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction \n");
    printf("Enter 3 for Multiplication \n");
    printf("Enter 4 for Division \n");
    printf("Enter 5 for Modulus\n");
    printf("Enter 6 for Power \n");
    printf("Enter 7 for Factorial \n");
    printf("Enter 8  for square \n");
    printf("Enter 9  for cube \n");
    printf("Enter 10 for squareroot\n\n");

    while (1)
    {
        printf("\n\nEnter the operation you want to do: ");

        scanf("%d", &c);

        switch (c)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            modulus();
            break;
        case 6:
            power();
            break;
        case 7:
            factorial();
            break;
        case 8:
            square();
            break;
        case 9:
            cube();
            break;
        case 10:
            squareroot();
            break;
        case 0:
            exit(0);
        default:
            printf("\nInvalid operation!!!!\n");
        }
    }
    return 0;
}