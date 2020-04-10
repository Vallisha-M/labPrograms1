#include <stdio.h>
#include <limits.h>
int main()
{
    int marks[5][3];
    int lar[]={INT_MIN,INT_MIN,INT_MIN};
    int i,j,k;
    for(i=0;i<5;i++)
    {
        printf("***STUDENT %d***\n",i+1);
        for(j=0;j<3;j++)
        {
            printf("Enter marks in subject %d : ",j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    for(j=0;j<3;j++)
    {
        for(i=0;i<5;i++)
        {
            if(lar[j]<marks[i][j])
            {
                lar[j]=marks[i][j];
            }

        }
    }
    for(i=0;i<3;i++)
        printf("Highest marks in subject %d is : %d\n",i+1,lar[i]);
    return 0;
}
