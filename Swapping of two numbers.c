
#include<stdio.h>
int main() { 
int a,b;
scanf("%d %d",&a,&b);
int temp=a;
a=b;
b=temp;
printf("The value of a after swapping..%d\n",a);
printf("The value of b after swapping..%d\n",b); return 0;
}
