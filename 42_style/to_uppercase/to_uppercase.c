#include <unistd.h>

void toUpperCase(char *str)
{
    int i = 0;
    while(str[i])
    {
        while(str[i] && str[i] >= 'a' && str[i] <= 'z')
            str[i++] -= 32;
        i++;
    }
    while(*str)
    {
        write(1, str, 1);
        str++;
    }
}

int main(int c, char **v)
{
    if(c == 2)
        toUpperCase(v[1]);
    write(1, "\n", 1);
    return (0);
}