
#include<stdio.h> 
int main() {
int n;
scanf("%d",&n);
int sum=0;
for (int i=1;i<=n/2;i++) 
if (n&i==0)
sum=sum+i;
if (n==sum)
printf("The given number is perfect number..\n");
else
printf("The given number is not perfect number..\n"); 
return 0;
}
