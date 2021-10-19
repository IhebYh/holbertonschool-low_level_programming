#include "main.h"
/**
* _strstr - locates a substring
*
* @haystack: the longer string to search
* @needle: the substring to search for
*
* Return: a pointer to the beginning of the located substring, or NULL if
* the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
int i = 0;
while (*haystack)
{
if (*haystack == *needle)
{
i++;
needle++;
if (*needle == '\0')
return (haystack);
}
haystack++;
}
return ('\0');
}
