/*
** EPITECH PROJECT, 2019
** strcpy
** File description:
** Copy one string into another
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
      	dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
