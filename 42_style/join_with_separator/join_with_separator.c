#include <unistd.h>

void	put_str(char *str);

int		main(int counter, char **args)
{
	int		i;

	if(counter < 3)
	{	
		write(1, "\n", 1);
		return (0);
	}
	i = 2;
	while(counter > 2)
	{
		put_str(args[i]);
		if(counter > 3)
			put_str(args[1]);
		i++;
		counter--;
	}
	write(1, "\n", 1);
	return  (0);
}

void	put_str(char *str)
{
	int     i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
