#include<stdio.h>
main()
{
    int n;

    printf("Enter weekday num[1 to7]:");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        
        //case 4, case 5, case 6

        case 7:
            printf("Saturday");
            break;
        default:
            printf("Invalid Number");
            
    }
}