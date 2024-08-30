#include <stdio.h>


//take somthing return somthing
int sum(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

float divide(int num1, int num2) {
    return num1 / num2;
}
int modulus(int num1, int num2) {
    return num1 % num2;
}

int main() {
    int n;

    do {
        printf("\nPress 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %%");
        printf("\nPress 0 for exit");
        printf("\n\nEnter a choice: ");
        scanf("%d", &n);

        if (n != 0) {
            int num1, num2;
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);

            switch (n) {
                case 1: {
                    int sumans = sum(num1, num2);
                    printf("addtion of %d and %d is %d\n", num1, num2, sumans);
                    break;
                }
                case 2: {
                    int subans = subtract(num1, num2);
                    printf("Substraction of %d and %d is %d\n", num1, num2, subans);
                    break;
                }
                case 3: {
                    int multians = multiply(num1, num2);
                    printf("multiplication of %d and %d is %d\n", num1, num2, multians);
                    break;
                }
                case 4: {
                    float divans = divide(num1, num2);
                    if (num2 != 0) { 
                        printf("division of %d and %d is %.2f\n", num1, num2, divans);
                    }
                    break;
                }
                case 5: {
                    int modans = modulus(num1, num2);
                    printf("Modulus of %d and %d is %d\n", num1, num2, modans);
                    break;
                }
                default:
                    printf("Invalid choice. Please try again.\n");
                    break;
            }
        }

    } while (n != 0); 

    return 0; 
}