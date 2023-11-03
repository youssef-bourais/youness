#include <unistd.h>

void ft_inter(char *s1, char *s2)
{
    int tab[256] = {0};

    int i = 0;
    while(s2[i])
    {
        tab[(int)s2[i]] = 1;
        i++;
    }
    i = 0;
    while(s1[i])
    {
        if(tab[(int)s1[i]] == 1)
        {
            write(1, &s1[i], 1);
            tab[(int)s1[i]] = 2;
        }
        i++;
    }
    write(1, "\n", 1);
}




int main(int ac , char **av )
{
    if(ac != 3)
    {
        write(1, "\n", 1);
        return 0;
    }
    ft_inter(av[1], av[2]);	
}
