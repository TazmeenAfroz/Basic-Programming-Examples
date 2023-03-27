/*Write a program in which user will enter his name. The
name will be passed
to a function which will check whether the string was
palindrome or not and display a
message accordingly
CODE:*/
#include<stdio.h>
#include<string.h>
void palindrome(char str[]){
int i,n;
n=strlen(str);
for(i=0;i<n/2;i++)
{
int temp=str[i];
str[i]=str[n-1-i];
str[n-1-i]=temp;
}
}
int main(){
int value;
char c[20]={0},d[20]={0};
printf("ENTER ANY NAME :");
scanf("%s",c);
strcpy(d,c);
palindrome(c);
puts(c);

puts(d);
value= strcmp(c,d);
if(value==0)
printf("PALINDROME");
else
printf("Not a palindrome");

return 0;
}