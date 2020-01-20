Task 1- make program print out elements from array
#include <stdio.h>

int main(void) {
  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
  for (int i=0; i<=9; i++){
    printf("Element %d = %d  ", i, array[i]);
  }
  
  return 0;
}


Task 2-make program assign random numbers to array then print
#include <stdio.h>

int main(void) {
    srand(time(0));
 int array[10] = {};
  for (int i=0; i<=9; i++){
    array[i]=rand()%100;
  }
  for (int i=0; i<=9; i++){
    printf("Element %d = %d  ", i, array[i]);
  }
  return 0;
}
