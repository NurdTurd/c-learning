/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it
** File description:
** returns the factorial of the number given
*/

int my_putchar(char c)
{
    write(1, &c, 1);
}

int my_compute_factoriel_it(int nb)
{
    int resultat = 1;
    if (nb < 0 || nb > 12) {
        return (0);
    }
    else if (nb == 0) {
        return (1);
    }
    else {
        while (nb > 1) {
            resultat = resultat * nb;
            nb--;
        }
    }
    return (resultat);
}

int main(void)
{
    return (my_compute_factoriel_it(5));
}
