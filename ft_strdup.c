#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> 
#include <string.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}

void ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

char *ft_strdup(char *str)
{
    char *s;

    s = malloc(sizeof(char)*ft_strlen(str));
    ft_strcpy(s, str); 
    return s;
}

//
// int ft_strcmp(char *s1, char *s2)
// {
//     int i = 0;
//     while(s1[i] && s2[i])
//     {
//         if(s1[i] != s2[i])
//             break;
//         i++;
//     }
//     return s1[i] - s2[i];
// }
//
// void ft_swap(char **a, char **b)
// {
//     char *tmp;
//
//     tmp = *a;
//     *a = *b;
//     *b = tmp;
// }
//
// void ft_putstr(char *str)
// {
//     int i = 0;
//     while (str[i])
//     {
//         write(1, &str[i++], 1);
//     }
// }
//


int main(int ac, char *av[])
{
    char *str;

    str = ft_strdup("youssef");

    printf("%s\n", str);

    // int i = 1;
    // while(i < ac)
    // {
    //     ft_putstr(av[i++]); 
    //     printf("\n");
    // }
    // printf("\n");
    //
    // i = 0;
    // while(i < ac - 1)
    // {
    //     int j = 0;
    //     while(j < ac - 1)
    //     {
    //         if(ft_strcmp(av[j], av[j + 1]) > 0)
    //         {
    //             ft_swap(&av[j], &av[j + 1]);
    //         }
    //         j++;
    //     }
    //     i++;
    // }
    //
    // i = 1;
    // while(i < ac)
    // {
    //     ft_putstr(av[i++]); 
    //     printf(" ");
    // }

}

//
// int main(int ac, char *av[])
// {
//     int *arr;
//     int temp;
//
//     arr = malloc(sizeof(int)*(ac - 1));
//
//     int i = 0;
//     while (i < ac - 1)
//     {
//         arr[i] = atoi(av[i + 1]);
//         i++;
//     }
//     i = 0;
//     while(i < ac - 1)
//     {
//         // printf("%d, ", arr[i]);
//         i++;
//     }
//     // printf("\n");
//     i = 0;
//     while(i < 10)
//     {
//         int j = 0;
//         while(j < 10)
//         {
//             if(arr[j] > arr[j + 1])
//             {
//                 printf("i=%d, j=%d\n", i, j);
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//             j++;
//         }
//         i++;
//     }
//     i = 0;
//     while(i < ac - 1)
//     {
//         // printf("%d, ", arr[i]);
//         i++;
//     }
// }
