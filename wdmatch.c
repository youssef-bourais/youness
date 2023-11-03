#include <unistd.h>

void ft_putstr(char *str)
{
    int i ;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
int main(int ac , char **av)
{
    char *tmp;
        if(ac != 3)
        {
            write(1, "\n", 1);
            return 0;
        }
        tmp = av[1];
        while(*tmp && *av[2])
        {
            while(*tmp == *av[2] && *tmp && *av[2])
            {
                    av[2]++;
                    tmp++;
            }
            av[2]++;
        }
        if(!(*tmp))
            ft_putstr(av[1]);    
}

