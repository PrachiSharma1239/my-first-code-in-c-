#include <stdio.h>

int main() 
{
    int x, y, z;
    
    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    printf("Enter the value of y: ");
    scanf("%d", &y);
    
    printf("Enter the value of z (1 for sum, 2 for subtract, 3 for divide, 4 for multiplication): ");
    scanf("%d", &z);

    int result;

    switch(z) {
        case 1:
            result = x + y;
            break;
        case 2:
            result = x - y;
            break;
        case 3:
            if (y != 0)
                result = x / y;
            else {
                printf("Error: Division by zero.\n");
                return 1; // Exiting with an error code
            }
            break;
        case 4:
            result = x * y;
            break;
        default:
            printf("Error: Invalid operation.\n");
            return 1; // Exiting with an error code
    }

    printf("Solution for x operator z is: %d\n", result);
    
    return 0;
}
