#include<stdio.h>
int main(){
int arr1[8]= {1,2,3,4,5,6,3,2};
int arr2[6] ={1,2,3,7,7,2};
int arr3[14];
int n1=8,n2=4,n3=0,count;
for(int i=0;i<n1;i++)
{      for(int j=i+1;j<n1;j++)
        {
          if (arr1[i]==arr1[j])
            {
               for(int k=j;k<n1-1;k++)
                 {
                    arr1[k]=arr1[k+1];
                 }
    n1--;
    j--;
            } 
        }
arr3[i]=arr1[i];
n3=n1;
}

for(int i=0;i<n2;i++)
        { for(int j=i+1;j<n2;j++)
            {
              if (arr2[i]==arr2[j])
                   {
                     for(int k=j;k<n2-1;k++)
                      {
                        arr2[k]=arr2[k+1];
                      }
    n2--;
    j--;
                    } 
            }
 count=0;
    for(int j=0;j<n1&&!count;j++)
    
        if(arr2[i]==arr1[j])
        count=1;
        
       
    
         if(!count)
          arr3[n3++]=arr2[i];
        }
        printf("\n UNION OF TWO MATRICES IS : ");
for(int i=0;i<n3;i++)
    
    printf("%d,",arr3[i]);

return 0;

}