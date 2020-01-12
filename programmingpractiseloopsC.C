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

TASK 4
  #include <stdio.h>

int main(void) {
  int number=0;
  double sum=0;
  

  printf("Enter number to calculate sum of harmonic series\n");
  scanf("%d",&number);

  for(double i=1; i<=number; i++){
sum=(sum+(1/i));
  }
  printf("The sum of the harmonic series of %d is %f",number,sum);
  return 0;
}
