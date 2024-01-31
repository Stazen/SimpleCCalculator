#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    printf("Enter the calcul (sample : 10 + 10)");

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

float SimpleCalculator()
{

}

float AdvancedCalculator()
{

}