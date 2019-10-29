/*
** EPITECH PROJECT, 2019
** my_compute_factorial_rec
** File description:
**
*/

int my_compute_factorial_rec(int nb)
{
    int f;

    if (nb == 0)
        return (1);
    if (nb < 0)
        return (0);
    f = nb * my_compute_factorial_rec(nb - 1);
    return (f);
}
