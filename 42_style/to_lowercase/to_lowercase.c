#include <unistd.h>

void toLowerCase(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		write(1, &str[i++], 1);
	}
}

/*int main(int c, char **v)
{
	if(c == 2)
		toLowerCase(v[1]);
	write(1, "\n", 1);
	return (0);
}*/

int main(int c, char **v)
{
	int i = 1; // We skip the program name

        if(c > 1) // The program will execute if at least one argument is found
	{
		while(i < c) // Go to the end of the arguments
		{
                	toLowerCase(v[i]);
			
			// Add space unless we reach the last word
			if(i < c - 1)
				write(1, " ", 1);
			i++;
		}
	}
        write(1, "\n", 1);
        return (0);
}
