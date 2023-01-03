#include<stdio.h>
#include<math.h>
int main()
{
    int a=0,b=0,a1=0,b1=0,temp=0,tempA=0,count=0;
    float average,s=0;
  while(1)
   {
    printf("Enter new coordinates: \n");
    scanf("%d",&a1);
    scanf("%d",&b1);
        s=s+sqrt((a1-a)*(a1-a)+(b1-b)*(b1-b));
       temp=a;
       a=a1;
       a1=temp;
       tempA=b;
       b=b1;
       b1=tempA;
       count++;
       average=s/count;
    if (a==a1 && b==b1)
    break;
   }
   printf("Total distance is %.2f \n ",s);
   printf("Total Steps taken are %d \n ",count-1);
   printf("Average distance traveled per step is %.2f",average);
    return 0;
}