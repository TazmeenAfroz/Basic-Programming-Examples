#include<stdio.h>
int lcm(int a, int b);
int main() {
int x,y,z;

    printf("ENTER TWO NUMBERS:");
    scanf("%d %d",&x,&y);

    z=lcm(x,y);

printf("L.C.M = %d\n",z);
}
int lcm(int a,int b)
{
    int i,gcd,lc;
    for(i=1;i<=a&&i<=b;i++)
    { if (a%i==0 && b%i==0 )
      gcd=i;
      }
      lc=(a*b)/gcd;
      return lc;




}
