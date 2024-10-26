#include <stdio.h>

// Function to check if a number is even or odd using bitwise operator
void checkEvenOdd() {
    int num;
    printf("Enter a number to check even or odd: ");
    scanf("%d", &num);
    if (num & 1) {
        printf("%d is odd\n", num);
    } else {
        printf("%d is even\n", num);
    }
}

// Function to swap two numbers using a third variable
void swap() {
    int a, b;
    printf("Enter two numbers to swap: ");
    scanf("%d %d", &a, &b);
    int temp = a;
    a = b;
    b = temp;
    printf("After swap: a = %d, b = %d\n", a, b);
}

// Function to generate Fibonacci series up to n terms
void generateFibonacci() {
    int n;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);
    int t1 = 0, t2 = 1, nextTerm;
    printf("Fibonacci Series: %d, %d", t1, t2);
    for (int i = 1; i <= n-2; ++i) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

// Function to compute quotient and remainder
void computeQuotientRemainder() {
    int dividend, divisor;
    printf("Enter dividend and divisor to compute quotient and remainder: ");
    scanf("%d %d", &dividend, &divisor);
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;
    printf("Quotient: %d, Remainder: %d\n", quotient, remainder);
}

// Function to print ASCII value of a given character
void printASCIIValue() {
    char c;
    printf("Enter a character to print its ASCII value: ");
    scanf(" %c", &c);
    printf("ASCII value of %c is %d\n", c, c);
}

int main() {
    checkEvenOdd();
    swap();
    generateFibonacci();
    computeQuotientRemainder();
    printASCIIValue();
    return 0;
}