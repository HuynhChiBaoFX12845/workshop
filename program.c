#include <stdio.h>

int main()
{
    int num1, num2;
    char op;
    printf("Nhap phep toan: ");
    scanf("%c", &op);

    printf("\nNhap vao 2 so a, b: ");
    scanf("%d%d", &num1, &num2);

    switch (op)
    {
        case '+':
            printf("Result = %d", num1 + num2);
            break;
        case '-':
            printf("Result = %d", num1 - num2);
            break;
        case '*':
            printf("Result = %d", num1 * num2);
            break;
        case '/':
            if (num2 == 0)
            {
                printf("can't / 0");
            }
            else
            {
                printf("Result= %.2f", (float)num1 / num2);
            }
            break;

        default:
            printf("Underfined %c!", op);
            break;
        }
}