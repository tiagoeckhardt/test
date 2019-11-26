#include<stdio.h>

int my_strcmp(char *strg1, char *strg2);
 
int main()
{
 
    printf("strcmp(\"a\", \"a\") = %d\n", my_strcmp("a", "a") );
    printf("strcmp(\"a\", \"b\") = %d\n", my_strcmp("a", "b") );
    printf("strcmp(\"a\", \"c\") = %d\n", my_strcmp("a", "c") );
    printf("strcmp(\"z\", \"d\") = %d\n", my_strcmp("z", "d") );
    printf("strcmp(\"abc\", \"abe\") = %d\n", my_strcmp("abc", "abe") );
    printf("strcmp(\"apples\", \"apple\") = %d\n", my_strcmp("apples", "apple") );
 
    // signal to operating system program ran fine
    return 0;
}
 
int my_strcmp(char *strg1, char *strg2)
{
 
    while( ( *strg1 != '\0' && *strg2 != '\0' ) && *strg1 == *strg2 )
    {
        strg1++;
        strg2++;
    }
 
    if(*strg1 == *strg2)
    {
        return 0; // strings are identical
    }
 
    else
    {
        return *strg1 - *strg2;
    }
}
