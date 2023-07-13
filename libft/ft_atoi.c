#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int			ft_atoi(const char *str)
{
// {
// 	long			res;
// 	long			sign;
// 	unsigned int	i;

    int i;
	int sign;
	int res;

	res = 0;
	sign = 1;
	i = 0;
	
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i])
    //while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	//	str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	
	while (str[i] >= '0' && str[i] <= '9') 
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	
	return ((int)(res * sign));
}

int main()
{
	printf("%d\n", ft_atoi("123456789"));
	printf("%d\n", atoi("123456789"));
	return (0);
}