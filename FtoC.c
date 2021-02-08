/*This is a C program that lets the user enter a value of temperature in degree Farhenheit. Then it converts and prints out the value of temperature in degrees Celcius. */
#include <stdio.h>
#include<conio.h>
int main(){
    float c,f;
    printf("Enter the degree in farhenheit");
    scanf("%f", &f);
    c=(f-32)*(5.0/9.0);
    printf("%f degrees farhenheit when converted into celcius is = %f degrees centigrade", f,c);
    getch();
    return 0;
}
