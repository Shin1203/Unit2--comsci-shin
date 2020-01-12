TASK 1
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


TASK 2
 #include <stdio.h>
int main(void) {
  int terms=0;
  int cube=0;
  int count=0;
  printf("Enter number of terms to cube\n");
  scanf("%d", &terms);
  
  for (int i=1; i<=terms; i++){
    cube=(i*i*i);
    printf(" %d ", cube);
  }
  return 0;
}

TASK 3
#include <stdio.h>

int main(void) {
  int terms=0;
  int cube=0;
  int count=0;
  printf("Enter number of terms to cube\n");
  scanf("%d", &terms);
  
  for (int i=1; i<=terms; i++){
    cube=(i*i*i);
    printf(" %d ", cube);
  }
  return 0;
}
