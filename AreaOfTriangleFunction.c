/*This is a program that lets the user enter the three sides of a triangle. Then, it calculates and prints the area of the triangle. User-defined function has been used in this program.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
float area(float, float, float);
int main()
{
    float a, b, c;
    printf("This is a program to calculate the area of a triangle provided you input the lengths of all 3 sides of the triangle.\n");
    printf("Enter the length of the three sides of the Triangle.\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("The area of the triangle is = %f square units\n", area(a, b, c));
    return 0;
}
float area(float x, float y, float z)
{
    float s = (x + y + z) / 2;
    float a = sqrt(s * (s - x) * (s - y) * (s - z));
    return a;
}
