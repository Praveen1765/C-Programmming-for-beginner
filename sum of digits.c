
#include<stdio.h> 
int main() {
int sum=0,num,rem; 
  scanf("%d", &num); 
  while (num!=0) { 
    rem=num%10;
    sum=sum+rem;
    num=num/10;
}
printf("The sum of digits is...%d\n",sum); return 0;
}
