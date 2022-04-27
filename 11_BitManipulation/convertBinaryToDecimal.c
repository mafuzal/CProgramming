#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int convertBinaryToDecimal(long long n);

int main()
{
    long long n;
    int result = 0;
    printf("Enter a binary number: \n");
    scanf("%lld", &n);
    
    result = convertBinaryToDecimal(n);
    printf("%lld in binary = %d in decimal\n", n, result);
    return 0;

}

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0;
    int i = 0;
    int remainder = 0;

    while(n != 0)
    {
        remainder = n % 10;
        n = n / 10;
        decimalNumber += remainder * pow(2,i);
        ++i;
    }

    return decimalNumber;
}

