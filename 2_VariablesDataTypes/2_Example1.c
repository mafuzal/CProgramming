#include <stdio.h>
#include <stdlib.h> 
int main()
{
    double width = 88.9;
    double height = 15.2;

    double perimeter = 0.0;
    double area = 0.0;

    perimeter = 2.0 * (width + height);
    area = width * height; 
    printf("Height:%.2f, Width:%.2f,Perimeter:%.2f\n", height,width,perimeter);
    printf("Height:%.2f, Width:%.2f,Area:%.2f\n", height,width,area);

    enum Matrix {MatrixI, MatrixII, MatrixIII=200, MatrixIV};
    enum Matrix M1 = MatrixI;
    enum Matrix M2 = MatrixII;
    enum Matrix M3 = MatrixIV;

    printf("The value of MatrixI is:%d\n",M1);
    printf("The value of MatrixII is:%d\n",M2);
    printf("The value of MatrixIV is:%d\n",M3);

    return 0;
}