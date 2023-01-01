#include<stdio.h>
 int fact(int ,int );
 
 int main()
{
    int a,b,C;
    printf("ENTER THE VALUE OF n : ");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF r : ");
    scanf("%d",&b);
 C = factorial(a,b);
printf(" nCr = %d\n",C);
return 0;
}
int factorial(int n,int r) {
int  i,p,npr;

unsigned long long fact=1,p

fact=1,rfact=1;
p=n-r;
 if(n<0 && p<0)
 printf("factorial of negative number doesnot exist");
 else
 {for (i=1;i<=n;++i) {
 fact*=i;
 } 
 for (i=1;i<=r;++i)
 { rfact*=i;}
 
 p=n-r;
 
  for (i=1;i<=p;++i)
{ pfact*=i;
 } 
 npr=(fact/(rfact*pfact));
 }
return npr ;
}
 