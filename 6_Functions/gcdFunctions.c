#include <stdio.h>
#include <stdlib.h>

//Function Declaration 
int gcd(int u, int v);
float absoluteValue(float x);
float squareRoot(float x);


int main()
{
 
    printf(" The gcd of 150 and 135 is %d\n", gcd(150,35)); 
    printf(" The gcd of 100 and 255 is %d\n", gcd(100,25));
    printf(" The absolute value of %.2f is %.2f\n",-23.6,absoluteValue(-23.6));
    printf("SquareRoot of %.2f is %.2f\n", 4.0,squareRoot(4.0));
    printf("SquareRoot of %.2f is %.2f\n", 16.0,squareRoot(16.0));
    printf("SquareRoot of %.2f is %.2f\n", -1.0,squareRoot(-1.0));
    printf("SquareRoot of %.2f is %.2f\n", 225.0,squareRoot(225.0));


    return 0;
}

int gcd(int u, int v)
{
    int temp;
    while( v!=0)
    {
        temp = u %v;
        u = v;
        v = temp;
    }

    return u;
}
float squareRoot(float x)
{
    const float epsilon = 0.0001;
    float guess = 1.0;
    float returnValue = 0.0;

    if(x<0)
    {
        printf("Negative arguments to squareRoot.");
        returnValue =  -1.0;
    }
    else
    {
        while(absoluteValue (guess *guess-x) >= epsilon)
            guess = (x/guess +guess)/2.0;
        returnValue = guess;
    }
    return guess;
}
float absoluteValue(float x)
{
    if(x<0)
        x = -x;
    return x;
}