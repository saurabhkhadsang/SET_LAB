// // C program to demonstrate 
// // Flawfinder
// #include <stdio.h>
// #include <string.h>
  
// // Driver code
// int main()
// {
//     char temp[100];
//     char str[] = "hello";
//     strcpy(temp, str);
//     printf("%s", temp);
//     return 0;
// }


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
  
// Driver code
int main()
{
    char *temp = (char*)malloc(6*sizeof(char));
    char str[] = "hello";
    strncpy_s(temp, 6, str, 5);
    temp[5] = '\0';
    printf("%s", temp);
    free(temp);
    return 0;
}
