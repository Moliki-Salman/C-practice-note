#include <stdio.h>

// Print an Integer (Entered by the User)
int main()
{
    int a;
    printf("Input UserInteger: ");
    scanf("%d", &a);

    printf("UserInteger is %d\n", a);

    return 0;
}

// Write a C program to Add Two Integers entered by a user

int main()
{
    int a, b, sum;

    printf("input firstInterger: ");
    scanf("%d", &a);
    printf("UserFirstInput is %d\n", a);

    printf("input SecondInterger: ");
    scanf("%d", &b);
    printf("UserSecondNumber is %d\n", b);

    sum = a + b;
    printf("sum of %d and %d  is %d ", a, b, sum);
    scanf("%d", &sum);

    return 0;
}
