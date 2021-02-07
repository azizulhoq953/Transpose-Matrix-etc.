
#include<stdio.h>
int main()
{

    int n,i,sum=0;
    printf("Enter Any Multipal Number=");
    scanf("%d",&n);

        printf("1^2+2^2+3^2+4^2+...%d\n",n);
        for
        (i=1;i<=n; i++)
        {
            sum=sum+i*i;
        }
        printf("Number Is Multiple=%d\n",sum);

    getch();

}








