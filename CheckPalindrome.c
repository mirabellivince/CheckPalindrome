#include <stdio.h>
#include <string.h>

int check_palindrome(char string[])
{
    
    int len = strlen(string)-1;
    char *front = string;
    char *back = string;
    back += len;
    
    while (front < back)
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
