#include <stdio.h>
int main() {
    int a, b;
    printf("The number a is: \n");
    scanf("%d", &a);
    printf("The number b is: \n");
    scanf("%d", &b);

    if (a % b == 0) {
        printf("The number a is divisible by b \n and the quotient is: %d", (a / b));
    } else {
        printf("The number a is not divisible by b \n ");
        printf("The quotient when number a is divided by b is %d \n and the remainder is %d", (a / b), (a % b));
    }
}
