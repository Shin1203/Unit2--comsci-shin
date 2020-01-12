#include <stdio.h>

int main(void) {
  int number=0;
  int sum=0;
  for (int i=0; i<10; i++){
    printf("Enter number \n");
    scanf("%d", &number);
    sum = (number+sum);
  
  }

  printf("Your sum is %d", sum);
  return 0;
}
