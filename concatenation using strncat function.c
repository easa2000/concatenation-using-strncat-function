// strncat function

#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50] = "Programming ";
    char str2[] = "In C";
    strncat(str1,str2,4);
    printf("\n str1 = %s",str1);
}
