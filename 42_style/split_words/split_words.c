#include <unistd.h>
#include <stdlib.h>

int lenOfWord(char *str)
{
    int count = 0;
    while(*str && *str != ' ' && *str != '\t')
    {
        count++;
        str++;
    }
    return count;
}

void splitWords(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
    {
        while(str[i] && (str[i] == ' ' || str[i] == '\t'))
            i++;
        if(!str[i])
		break;
	while(str[i] && str[i] != ' ' && str[i] != '\t')
        {
            write(1, &str[i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
}

int main(int argc, char **argv)
{
    if(argc == 2)
        splitWords(argv[1]);
    else
        write(1, "\n", 1);
    return (0);
}



/*#include <unistd.h>

int lenOfWord(char *str)
{
    int count = 0;
    while(*str && *str != ' ' && *str != '\t')
    {
        count++;
        str++;
    }
    return count;
}

void splitWords(char *str)
{
    char words[50][400];
    int j = 0;
    int i = 0;
    int k;
    while(str[i])
    {
        while(str[i] && (str[i] == ' ' || str[i] == '\t'))
            i++;
            
        if(str[i])
        {
            int end = lenOfWord(str + i) + i;
            int k = 0;
            while(i < end)
            {   
                words[j][k] = str[i];
                i++;
                k++;
            }
            words[j][k] = '\0';
            j++;
        }
    }
    j = 0;
    k = 0;
    while(words[j])
    {
        k = 0;
        while(words[j][k])
            write(1, &words[j][k++], 1);
        write(1, "\n", 1);
        j++;
    }
}

int main()
{
    splitWords("  one two  three   ");
    return 0;
}*/
