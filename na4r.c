// no awk for real

#include <string.h>
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	index;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	index = 0;
	while ((nptr[index] >= 9 && nptr[index] <= 13) || nptr[index] == 32)
		index++;
	if (nptr[index] == '+' || nptr[index] == '-')
	{
		if (nptr[index] == '-')
			sign = -1;
		index++;
	}
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		result = result * 10 + (nptr[index] - 48);
		index++;
	}
	return (result * sign);
}

int main(int ac , char *av[])
{
    if(ac == 1)
        return(printf("error : <5ask flag mor command>\n"),1);
    int str_n = ft_atoi(av[1]);
    char str[str_n][1024];
    int rem = str_n;
    while (str_n != 0)
    {
        scanf("%s",str[str_n]);
        str_n--;
    }
    printf("%s",str[1]);
    return(0);
}
