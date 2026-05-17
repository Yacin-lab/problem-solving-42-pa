#include <stdio.h>

int ft_strcmp(char *str1, char *str2)
{
    int i = 0;
    while(str1[i])
    {
        if(str1[i] != str2[i])
            return (0);
        i++;
    }
    return (1);
}

void password(char *message, char *pwd)
{
    printf("%s", message);
    scanf("%3s", pwd);     // "%3s" for read just 3 letters (It automatically adds \0 in the end)
}

void guessPassword(char *pwd)
{
    char trial[4];	// i + j + k + \0 = 4 char
    int c = 1;

    char i = 'A';
    while(i <= 'Z')
    {
        char j = 'A';
        while(j <= 'Z')
        {
            char k = 'A';
            while(k <= 'Z')
            {
                trial[0] = i;
                trial[1] = j;
                trial[2] = k;
                trial[3] = '\0';
                printf("TRIAL [%d]: %s\n", c, trial);
                if(ft_strcmp(trial, pwd))
                {
                    printf("\nPassword is %s\n", trial);
                    printf("Found after %d Trial(s)\n", c);
                    return;
                }
		c++;
                k++;
            }
            j++;
        }
        i++;
    }
}

int main(void)		// hawl t3mlha b recursion
{
    char pwd[4];
    password("Pleas enter your password (3-Letters UPPER): ", pwd);
    guessPassword(pwd);
    return (0);
}
