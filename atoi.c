/* Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str); */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int cp;
	int	minus;

	i = 0;
	minus = 0;

	while (str[i])
	{	
		if (str[i] == 45)
		{	
			minus++;
			i++;
		}
		else if (str[i] > 47 && str[i] < 58)
		{	
			cp = cp * 10 + str[i] - '0';
			i++;
		}			
		else 
			i++;
	}
	if (minus % 2 == 1)
		cp = -cp; 
	return (cp);
}

int	main(void)
{
	printf("%d\n", ft_atoi("  kjh-123007450dfgfeh2"));
}
