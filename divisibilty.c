#include <stdio.h>
int main(){
  int a ,b ;
  printf("The no. a is: \n");
  scanf("%d", &a);
  printf("The number b is: \n");
  scanf("%d", &b);
  a%b==0? printf("a is divisible by b and it's quotient is: \n %d", (a/b)): printf("a is not divisible by b \n The quotient is %d\n And the remainder is : %d",(a/b),(a%b));
  int c = a%2;
  switch(c){
    case 0:
       printf("\na is an even number");
       break;
    case !0:
       printf("\na is an odd number");
       break;
  }
  return 0;
}