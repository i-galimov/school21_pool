#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s2 + i))
	{	
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);

}

int	main(void)
{		
	char	s1[] = "TTTT";
	char	s2[] = "YYYY";
	printf("%s\n", strcpy(s1, s2));
	printf("%s\n", ft_strcpy(s1, s2));
}
