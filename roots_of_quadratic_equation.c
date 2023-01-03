#include<math.h>
#include<stdio.h>

int main() {
    
    double a,b,c,disc,root1,root2;
    printf("ENTER THE NUMBERS");
    scanf("%lf %lf %lf",&a,&b,&c);
disc=b*b-4*a*c;
if(a>0 && b>0 && c>0)
{
    if(disc>0)
    {
       root1=(-b+sqrt(disc) )/2*a;
       root2=(-b-sqrt(disc))/2*a;
       printf("%lf %lf",root1,root2);
} 
if(disc<0)
{
    root1=(-b+sqrt(-1*(disc)))/2*a;
    root2=(-b-sqrt(-1*(disc)))/2*a;
     printf("%lf %lf",root1,root2);
}
if(disc=0)
{
    root1=root2=-b/(2*a);
     printf("%lf %lf",root1,root2);
}
}
else
if(a<0 || b<0 || c<0)
printf("Negative values aren't allowed");
else 
printf("Values can't be zero");
return 0;

}