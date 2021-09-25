/ Create a function that displays all digits, on a single line, by ascending order.

# include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void) 
{
	char i;
	char n;
	
	i = 48;
	n = 10;
	while (i <= 57) 
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar(n);
}

int main(void) 
{
	ft_print_numbers();
	return 0;
}
