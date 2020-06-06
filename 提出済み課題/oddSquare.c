#include <stdio.h>
 
int main(){
    
  int number;

  for(number = 1; number < 100; number = number + 2) {
    printf("%d\n", number*number);
  }
  
  return 0;
}
