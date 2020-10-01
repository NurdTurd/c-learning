/*
** EPITECH PROJECT, 2019
** do-op
** File description:
**
*/

#include <stdio.h>

void my_putchar(char c) { write(1, &c, 1); }

int my_put_nbr(int nb) {
  int modulo;
  if (nb < 0) {
    my_putchar('-');
    nb = nb * (-1);
  }
  if (nb >= 0) {
    if (nb >= 10) {
      modulo = (nb % 10);
      nb = (nb - modulo) / 10;
      my_put_nbr(nb);
      my_putchar(48 + modulo);
    } else {
      my_putchar(nb % 10 + 48);
    }
  }
}
/*
int do_op (int ac, char **av)
{
    if(av[1] || av[3] == NULL)
    {
        return (84);
    }

    if(av[2] != '+' || '-' || '*' || '/' || '%') {
        my_putchar('0');
        return (84);
    }

    if(av[2] == '/' && av[3] == '0') {
        my_putstr("Stop: division by zero");
        av[2] = '$';
    }
    if(av[2] == '%' && av[3] == '0') {
        my_putstr("Stop: modulo by zero");
        av[2] = '$';
    }

    switch(av[2])
    {
    case '+':
        av[1] + av[3];
    case '-':
        av[1] - av[3];
    case '*':
        av[1] * av[3];
    case '/':
        av[1] / av[3];
    case '%':
        av[1] % av[3];
    default:
        my_putstr("wtf frrr");
    }
}
*/
int main(int ac, char **av) {
  if (av[1][0] || av[3][0] == NULL) {
    return (84);
  }

  if (av[2][0] != '+' || '-' || '*' || '/' || '%') {
    my_putchar('0');
    return (84);
  }

  if (av[2][0] == '/' && av[3][0] == '0') {
    my_putstr("Stop: division by zero");
    av[2] = '$';
  }
  if (av[2][0] == '%' && av[3][0] == '0') {
    my_putstr("Stop: modulo by zero");
    av[2] = '$';
  }

  int resultat = 0;
  if (av[2][0] == '+') {
    resultat = av[1][0] + av[3][0];
  } else if (av[2][0] == '-') {
    resultat = av[1][0] - av[3][0];
  } else if (av[2][0] == '/') {
    resultat = av[1][0] / av[3][0];
  } else if (av[2][0] == '%') {
    resultat = av[1][0] % av[3][0];
  }
  my_put_nbr(resultat);
}
