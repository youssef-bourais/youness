

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *arr;
    if(min > max)
        return NULL;
    arr = malloc(sizeof(int)* (max - min));

    int i = 0;
    while(min < max)
    {
        arr[i] = min;
        i++;
        min++;
    }
    return arr;
}

int ft_ultimate_range(int **range, int min, int max)
{
    if(min > max)
    {
        *range = NULL;
        return 0;
    }
    *range = malloc(sizeof(int)*(max - min));

    if(*range == NULL)
        return -1;
    int i = 0;
    while (min < max)
    {
        (*range)[i] = min;
        i++;
        min++;
    }
    return (max - min);
}



int main(int ac, char **av)
{
    int *arr;
    ft_ultimate_range(&arr, atoi(av[1]), atoi(av[2]));
    // arr = ft_range(atoi(av[1]), atoi(av[2]));

    int i = 0;
    while(i < atoi(av[2]) - atoi(av[1]))
    {
        printf("%d ", arr[i]);
        i++;
    }
}






