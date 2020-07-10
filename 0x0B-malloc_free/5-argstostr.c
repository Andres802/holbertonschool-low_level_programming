#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *argstostr - concatena todos los argumentos dados
  *
  * @ac: numero de argumentos
  * @av: Arreglo de punteros a un string
  *
  * Return: puntero al nuevo string
  */

/*Tenemos que saber cuantos caracteres hay en total*/
char *argstostr(int ac, char **av)
{
        int filav = 0;
        int colav = 0;
        int total = 0;
        char *ptr;

        if (ac == 0 || av == NULL) /* primera condicion */
        {
                return (NULL);
        }
        /*recorrer av*/
        for (filav = 0, colav = 0; filav < ac; filav++)
        {
                colav = 0;
                while (av[filav][colav] != '\0') /*Recorre columnas*/
                {
                        total++;
                        colav++;
                }
                total++;
        }
        total++;
        ptr = malloc(total * sizeof(char));
        if (ptr == NULL)
        {
                return (NULL);
        }
        total = 0;
        for (filav = 0, colav = 0; filav < ac; filav++) /* (x < ac) */
        {
                colav = 0;
                while (av[filav][colav] != '\0')
                {
                        ptr[total++] = av[filav][colav];
                        colav++;
                }
                ptr[total] = '\n';
                total++;
        }
        ptr[total] = '\0';
        return (ptr);
}
