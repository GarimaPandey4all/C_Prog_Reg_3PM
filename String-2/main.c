#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    char str2[10];
    char fullName[20];

    printf("Enter any string-1:");
    gets(str);

    printf("Enter any string-2:");
    gets(str2);

//    printf("Length of the String: %d\n", strlen(str));
//    printf("Uppercase of the String: %s\n", strupr(str));
//    printf("Lowercase of the String: %s\n", strlwr(str));

//    printf("String 1 is copying into String 2: %s\n", strcpy(str2, str));
//    printf("String 1 is copying into String 2: %s\n", strcpy(str2, "Delhi"));
//    printf("String 2 is: %s\n", str2);

//    concatenation/joining
//    printf("Concatenation/joining of two string is: %s\n", strcat(str, str2));

    //String Compare

//    str = abc
//    str2 = aac
//
//    ASCII:
//        a-z: 97 to 122
//        A-Z: 65 to 90

    if(strcmp(str, str2) == 0)
    {
        printf("Both the Strings are same");
    }
    else {
        printf("Not the same Strings");
    }

    return 0;
}
