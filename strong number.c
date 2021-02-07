#include<stdio.h>
int main() //uncomplete programming knowladge ;
{
    int num,sum=0,rem,temp,fact,i;
    printf("Enter Any Integer Number=");
    scanf("%d",&num);
    temp=num;
    while (temp!=0)
    {
         rem=temp%10;
        fact=1;
        for (i=1;i<=rem; i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;

        temp=temp/10;
    }
        if (sum==num)
            printf("Number is strong %d",num);

            else
            printf("Number is Not Strong",num);



  getch();

}
