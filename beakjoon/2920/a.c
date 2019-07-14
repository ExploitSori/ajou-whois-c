#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void)
{
    char s1[17];
    for (int i = 0; i < 15; i++)
    {
        scanf("%c", &s1[i]);
        
    }
    s1[16] = '\0';
    printf("%s\n", s1);
    if (strcmp(s1,"1 2 3 4 5 6 7 8")==0)
        printf("ascending");
    else if (strcmp(s1,"8 7 6 5 4 3 2 1")==0)
        printf("descending");
    else
        printf("mixed");

    return 0;
}
