#include <stdio.h>

//
// char *ft_strrev(char *str)
// {
// 	char tmp;
// 	int i;
// 	int j ;
// 	i = 0;
// 	while(str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	i--;
// 	j = 0;
// 	while(i > j)
// 	{	
// 		tmp = str[i];
// 		str[i] = str[j];
// 		str[j] = tmp;
// 		j++;
// 		i--;
// 	}
// 		
//
// 	return str;
// }
//
//

int *ft_sorttab(int *arr, int size)
{

    int tmp;
    int i = 0;
    int k = 0;
    while(k + 1 < size)
    {
        i = 0;
        while(i + 1 < size)
        {
            if(arr[i] > arr[i + 1])
            {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            }
            i++;
        }
        k++;
    }
	return arr;
}

int main ()
{

    int arr[] = {2, 1 , 4 ,- 1, 0};

    ft_sorttab(arr, 5);

    int i = 0;
    while(i < 5)
    {

        printf("%d ", arr[i]);
        i++;
    }
} 	

