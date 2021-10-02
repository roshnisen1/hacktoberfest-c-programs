#include<stdio.h>

int main(){
  int a=0;
  scanf("%d",&a);
//   use bitwise and operation
  (a&1)? printf("Odd"): printf("Even");
  
return 0;
} 
