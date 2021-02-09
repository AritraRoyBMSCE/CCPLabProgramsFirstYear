/*This is a C-Program to to calculate the sum of squares of first n odd numbers, where n has been input by the user. User defined function and while loop has been used in this program.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
void sumofsquares(int);
int main(){
    int n;
    printf("Enter the value of n, the number upto which you want the sum of squares of odd numbers to be printed \n");
    scanf("%d", &n);
    sumofsquares(n);
    getch();
    return 0;
}
void sumofsquares(int a){
float sum=0; int i=1;
    while(i<=a){
        if(i%2 != 0) {
            sum=sum+pow(i,2);
        }
        i++;
    }
    printf("The sum of the squares of all odd numbers till %d is = %f ", a, sum);
    getch();
    return;
}
