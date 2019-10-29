/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** Reverse string given
*/

void my_swap2(char *a, char *b)
{
    char t;

    t = *b;
    *b = *a;
    *a = t;

}

char *my_revstr(char *str)
{
    int i = 0;
    char x = 0;
    char y = 0;

    while (str[i] != '\0') {
        i++;
    }
    y = i - 1;
    while (x <= (i / 2)) {
        my_swap2(&str[x], &str[y]);
        x++;
        y--;
    }
    return (str);
}
