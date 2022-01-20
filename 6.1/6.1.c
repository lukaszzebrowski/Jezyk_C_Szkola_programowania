#include <stdio.h>

char tab[26];
int i;

int main()
{
for (i = 0; i < 26; i++)
    tab[i] = 'a';
for(i=0; i<26;i++)
    printf("%c ", tab[i]);
        
return 0;
}