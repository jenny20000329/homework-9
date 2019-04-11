#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
 
 int n1,n2,toto;
 
 for(n1=1;n1<=9;n1++){
  for(n2=1;n2<=9;n2++){
   printf("%d*%d=%d ",n1,n2,n1*n2);
  }
  printf("\n");
 }
 
 system("PAUSE");
 return 0;
}
