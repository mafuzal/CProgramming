#include <stdio.h>
#include <string.h>
int main()
{
    char src[50], dest[50];
    strcpy(src, "This is source");
    strcpy(dest, "This is a destination");

    strncat(dest, src, 15);
    printf("Final destination string: |%s|",dest);

    printf("\n");
    printf("strcmp(\"A\", \"A\") is ");
    printf("%d\n",strcmp("A","A"));

    printf("\n");
    printf("strcmp(\"A\", \"B\") is ");
    printf("%d\n",strcmp("A","B"));

    printf("\n");
    printf("strcmp(\"B\", \"A\") is ");
    printf("%d\n",strcmp("B","A"));

    printf("\n");
    printf("strcmp(\"C\", \"A\") is ");
    printf("%d\n",strcmp("C","A"));

    printf("\n");
    printf("strcmp(\"Z\", \"a\") is ");
    printf("%d\n",strcmp("Z","a"));

    printf("\n");
    printf("strcmp(\"apples\", \"apple\") is ");
    printf("%d\n",strcmp("apples","apple"));

    if(strncmp("astronomy","astro",5) == 0)
    {
        printf("Found: astronomy");
    }

    if(strncmp("astounding","astro",5) == 0)
    {
        printf("Found:astounding");
    }

    return 0;
}
