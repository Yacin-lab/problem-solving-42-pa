#include <stdio.h>

void readText(char *txt)
{
    printf("Enter your text: ");
    scanf("%[^\n]", txt);
}

int encryption(char *txt)
{
    int key = 2;
    while(*txt)
    {
        *txt += key;
        txt++;
    }
    return key;
}

void decryption(char *txt, int key)
{
    while(*txt)
    {
        *txt -= key;
        txt++;
    }
}

int main(void)
{
    char txt[1000];
    int key;
    readText(txt);
    printf("\nText: %s\n\n", txt);
    key = encryption(txt);
    printf("After Encryption Text: %s\n", txt);
    decryption(txt, key);
    printf("After Decryption Text: %s\n", txt);
    return (0);
}
