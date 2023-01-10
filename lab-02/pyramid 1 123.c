
#include<stdio.h>
main()
{
    int i,j,k,rows,count,temp=1;
    printf("Enter number of rows:\n");
    scanf("%d",&rows);
    count=rows-1;

    for(i=1;i<=rows;i++)
    {
         int start=1;
        for(j=1;j<=count;j++)
        {
            printf(" ");

        }
        for(k=1;k<=temp;k++)
        {
            printf("%d",start);
            start++;

        }
        count--;
        temp+=2;

        printf("\n");
    }
}
