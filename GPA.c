#include<stdio.h>
#include<string.h>
int main()
{
    float points,total=0.0,GPA,credithour=0.0,totalhour=0.0;
    char grade[10];
    int subjects;
    printf("Enter Number of sujects :");
    scanf("%d",&subjects) ;
    for(int i= 1;i<=subjects;i++)
    {
        printf("Enter your grade in subject (%d) : \n",i );
        scanf("%s",grade);
        printf("Enter your Credit hour of  subject (%d) : \n",i);
        scanf("%f",&credithour);
        totalhour=totalhour+credithour;
        if ( strcmp(grade,"A") == 0 )
        {
            points=4.0;
        }
        else if (strcmp(grade,"A-")==0)
        {
            points=3.67;
        }
          else if (strcmp(grade,"B+")==0)
        {
            points=3.33;
        }
          else if (strcmp(grade,"B")==0)
        {
            points=3.0;
        }
          else if(strcmp(grade,"B-")==0)
        {
            points=2.67;
        }
          else if (strcmp(grade,"C+")==0)
        {
            points=2.33;
        }
          else if (strcmp (grade,"C")==0)
        {
            points=2.0;
        }
          else if (strcmp (grade,"C-")==0)
        {
            points=1.67;
        }
          else if (strcmp(grade,"D+")==0)
        {
            points=1.33;
        }
          else if (strcmp(grade,"D+")==0)
        {
            points=1.00;
        }
          else if (strcmp(grade,"F")==0)
        {
            points=0;
        }
    
     total=total+points*credithour;
    }
GPA=total/totalhour;
printf("Your GPA is %.2f ",GPA);
return 0;
}