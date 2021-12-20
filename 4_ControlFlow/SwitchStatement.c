#include <stdio.h>
int main()
{
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Saturday;

    switch(today)
    {
        case Monday:
            printf("Today is Monday. \n");
            break; // If there is no break, the ouput will jump to next case statement as well 
        case Tuesday:
            printf("Today is Tuesday. \n");
            break;
        case Wednesday:
            printf("Today is Wednesday. \n");
            break;
        case Thursday:
            printf("Today is Thursday. \n");
            break;
        case Friday:
            printf("Today is Friday. \n");
            break;
        default:
            printf("Today is a Weekend. \n");
            break;
    }

    //Example 2
    float value1, value2;
    char operator;

    printf("Type in your expression.\n");
    scanf("%f %c %f", &value1, &operator, &value2);

    switch(operator)
    {
        case '+':
            printf("%.2f\n",value1 + value2);
            break;
        case '-':
            printf("%.2f\n",value1 - value2);
            break;
        case '*':
            printf("%.2f\n",value1 * value2);
            break;
        case '/':
            if (value2 == 0)
                printf("Division by zero.\n");
            else
                printf("%.2f\n",value1 / value2);
            break;
        default:
            printf("Unknown operator.\n");
            break;        
    }
    return 0;

}