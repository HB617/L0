#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string hash = argv[1];
        char c0[0] = "a";
        while (1)
        {
            printf("\nchar: %c\thash:%s\n",c0[0],crypt(c0[0],"ab"));
            if (strcmp(crypt(c0,"ab"),hash) == 0 )
            {
                printf("password is: %c",c0[0]);
                break;
            }
            else
            {
                if (c0[0] == 'Z')
                    c0[0] = 'a';
                if (c0[0] =='z')
                    break;
                c0[0]++;
            }
        }
        printf("%c\n",c0[0]);
    }
    else
    {
        printf("Usage: ./crack hash");
    }
}
