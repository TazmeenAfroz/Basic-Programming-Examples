#include<stdio.h>
int main(){
    int matrix1[10][10],matrix2[10][10],mult[10][10],r1,r2,c1,c2;
    printf("ENTER THE NUMBER OF ROWS AND COLUMNS FOR FIRST MATRIX \n");
    scanf("%d %d",&r1,&c1);
    printf("ENTER THE NUMBER OF ROWS AND COLUMNS FOR SECOND MATRIX \n");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2)
    {
        printf("SORRY MATRIX CAN'T BE MULTIPLY AS NO OF ROWS OF C1 IS NOT EQUAL TO R2");
    }
else
{
    for(int i=0;i<r1;i++)
    {
        for (int j=0;j<c1;j++)
        {
            printf(" ENTER THE FIRST MATRIX ELEMENT [%d][%d] \n",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }
     for(int i=0;i<r2;i++)
    {
        for (int j=0;j<c2;j++)
        {
            printf(" ENTER THE SECOND MATRIX ELEMENT [%d][%d] \n",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }

    }
   
for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int sum=0;
            for(int k=0;k<c1;k++)
            {
                sum=sum+(matrix1[i][k]*matrix2[k][j]);
            } mult[i][j]=sum;
                             }
                                 }
    printf("\n");
 }                 
}
           