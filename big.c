#include<stdio.h>
main()
{
    int x,y,z,big;

    printf("Enter 3 diff nums:");
    scanf("%d%d%d",&x,&y,&z);

    if(x>y)
    {
        if(x>z)
            big=x;
        else
            big=z;
    }
    else
    {
        if(y>z)
            big=y;
        else
            big=z;
    }
    printf("biggest num=%d",big);

}