#include<stdio.h> 
#define size 5   
int main()
{    
int num[size],n,i;    
printf("Enter the size of the array:");    
scanf("%d",&n);
printf("Enter the array elements");    
for(i=0;i<n;i++)
scanf("%d",&num[i]);    
printf("The array elements are\n");    
for(i=0;i<n;i++)   
printf("%d\n",num[i]);    
printf("\n");
return 0;  
}    
