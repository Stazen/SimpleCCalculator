#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void AdvancedCalculator()
{

}

void SimpleCalculator()
{
    printf("Enter the calcul (sample : 10 + 10)\n");

    float x, y, res;
    char operator;

    scanf("%f %c %f", &x, &operator, &y);

    switch (operator)
    {
        case '+':
            res = x + y;
            break;    
        case '-':
            res = x - y;
            break;
        case '*':
            res = x * y;
            break;
        case '/':
            res = x / y;
            break;
        default:
            break;
    }

    printf("%.9g%c%.9g = %.6g\n\n",x,operator, y, res);
    goto exit;
    
    fail:
        printf("Fail.\n");
    exit:
        return 0;
}

int main(int argc, char *argv[])
{
    printf("===== Welcome to my calculator =====\nPlease choose a version of the calculator : \n1. Simple calculator \n2. Advanced calculator \n3. Exit\n");

    int choice;
    scanf("%i", &choice);

    switch (choice)
    {
        case 1:
            SimpleCalculator();
            break;
        case 2:
            AdvancedCalculator();
            break;
        case 3:
            return 0;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}