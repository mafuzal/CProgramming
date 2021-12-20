#include <stdio.h>

enum Day{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
int main()
{
    for(enum Day day = Monday; day <= Sunday; day++)
    {
        if(day == Wednesday)
        continue;

        printf("It's not Wednesday!\n");
    }

    int p,q;
    printf("Enter a value for p:");
    scanf("%d",&p);
    while(p>0)
    {
        printf("%d\n",p);
        printf("Enter a value for q:");
        scanf("%d",&q);
        while(q>0)
        {
            printf("%d\n",p*q);
            if(q>100)
                break;
            scanf("%d",&q);
        }

        if(q>100)
            break;
        scanf("%d",&p);
    }

}