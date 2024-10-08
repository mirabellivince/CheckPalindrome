/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int check_palindrome(char string[])
{
    
    int len = strlen(string)-1;
    char *front = string;
    char *back = string;
    back += len;
    
    while (front != back)
    {
        if (*front != *back)
        {
            return 0;
        }
        front++;
        back--;
    }
    
    return 1;
}




int main()
{
    char str[] = "racecar";
    int pali = check_palindrome(str);
    
    printf("%d",pali);

    return 0;
}
