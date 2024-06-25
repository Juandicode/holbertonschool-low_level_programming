#include "main.h"
/**
 *_strcat - function that ocncatenates two strings.


int length_of_string, v1;

length_of_string = 0;
while (dest[length_of_string] != '\0')
{
length_of_string++;
}
for (v1 = 0; src[v1] != '\0'; v1++, length_of_string++)
{
dest[length_of_string] = src[v1];
}
dest[length_of_string] = '\0';
return (dest);
}
