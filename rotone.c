#include <unistd.h>
int main (int ac , char **av)
{
	int i ;
	i=0;
	if(ac != 2)
	{
	    write(1, "\n", 1);
            return 0;
	}
	while(av[1][i])
	{
		if(av[1][i] >= 'a' && av[1][i] < 'z')
		{
			av[1][i]+=1;
			write(1, &av[1][i], 1);
		}
		else if(av[1][i] == 'z')
			write(1, "a", 1);
		else if(av[1][i] >= 'A' && av[1][i] < 'Z')
		{
			av[1][i]+=1;
			write(1, &av[1][i], 1);
		}
		else if(av[1][i] == 'Z')
		{
			write(1, "A", 1);
		}
		else 
			write(1, &av[1][i], 1);
	   i++;
	}
	write(1, "\n", 1);
	return 0;
} 
