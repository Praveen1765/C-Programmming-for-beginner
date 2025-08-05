#include<stdio.h> 
int main() { 
int n;
scanf("%d", &n);
int evensum=0, oddsum=0; 
for (int i=1;i<=n;i++){ 
  if (i%2==0)
    evensum=evensum+i;
}
for (int i=1;i<=n;i++){
if(i%2!=0)
  oddsum=oddsum+i;
}
printf("The even sum is...%d\n", evensum);
printf("The odd sum is...%d\n",oddsum);
return 0;
}
