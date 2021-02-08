/*This is a C-Program that lets the user input an English alphabet and prints if it is a vowel or a consonant (using switch case). If the user enters any character other than an alphabet it requests user to enter valid alphabet. User defined function has been used in this program.*/
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void typeOfAlphabet(char);
int main()
{
    char ch;
    printf("Enter the letter to check if it is a vowel or consonant. \n");
    scanf("%c", &ch);
    typeOfAlphabet(ch);
    getch();
    return 0;
}
void typeOfAlphabet(char n){
    int x;
    if (isalpha(n) != 0) // 0 : False, and any other integer represents True.
    {
        switch (n)
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a vowel.", n);
            break;
        default:
            printf("%c is a consonant.", n);
            break;
        }
    }
    else
    {
        printf("Please enter a valid alphabet");
    }
    return;
}
