#include <stdio.h>

int main()
{
    float english,maths,physics;
    float sum, average;
    printf("Enter marks of three subjects: \n");
    scanf("%f%f%f", &english,&maths,&physics);
    sum = english+maths+physics;
    average = sum/ 3.0;
    printf("sum of all marks = %.2f\n", sum);
    printf("Average marks = %.2f\n", average);

    return 0;
}
