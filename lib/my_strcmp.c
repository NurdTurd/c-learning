/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** Reproduce the behavior of the strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i;

    for (i = 0; s1[i] == s2[i]; i++)
        if (s2[i] == '\0')
            return 0;
    return s1[i] - s2[i];
}
