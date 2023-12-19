//#include<stdio.h>
int main()
{
    int fact=1,i,n=5;
   // scanf("%d",n);
    for (i=0;i<n;i++)
    {
       fact=fact*i;
    }
    printf("factorial of %d id %d",n,fact);
    return 0;
}