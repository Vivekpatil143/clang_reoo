#include<stdio.h>
main()
{
    int m,p,c,total,avrg;

    printf("Enter 3 subs marks:");
    scanf("%d%d%d",&m,&p,&c);

    if(m>=40 && p>=40 && c>=40)
    {
        total = m+p+c;
        avrg = (m+p+c)/3;

        printf("total=%d\navrg=%d\n",total,avrg);
        
        if(avrg>=60)
            printf("FIRST DIV");
        else if(avrg>=50)
            printf("SECOND DIV");
        else
            printf("THIRD DIV");
    }
    else
        printf("FAIL");
}