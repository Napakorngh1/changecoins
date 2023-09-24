#include<stdio.h>
main()
{
    int a,b,c,sum = 0 ,num;
    printf("Enter number (000-999) :");
    scanf("%d",&num);
    a = num / 100;
    b = (num%100) / 10;
    c = (num%10);
    printf("Give 100 bank x %d\n",a);
    printf("Give 10 bank x %d\n",b);
    printf("Give 1 bank x %d\n",c);
}