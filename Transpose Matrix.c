#include<stdio.h>
int main()
//Transpose Matrix
{
    int A[10][10],transpose[10][10],row,col,j,i;
    printf("Enter Matrix Row And Colms=");
    scanf("%d %d",&row,&col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d ",&A[i][j]);
        }
    }

    //Transpose Matrix

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            transpose[j][i]=A[i][j];
        }printf("\n");
    }
    //Printing Matrix

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",A[i][j]);
        }printf("\n");
    }

    //Printing Transpose Matrix
    printf("\n Transpose Matrix=");
    printf("\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",transpose[i][j]);
        }printf("\n");

    }

    getch();

}
