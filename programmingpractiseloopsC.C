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

TASK 5
  #include <stdio.h>

int main(void) {
  int terms=0;
  int sum=0;
  int number=1;
 
  printf("This series adds a number to the sum that increments in one digit with the number 1, going 1,11,111,1111 etc. Enter a number of terms for the series\n");
 scanf("%d", &terms);
for (int i=1;terms>=i; i++){
     sum=(sum+number);
     number=((number*10)+1);
}
 printf("Your sum is %d", sum);
 
 return 0;
}

TASK 6
  /* C Program to find Perfect Number using For Loop */

# include <stdio.h>   

int main()   
{   
 int number1=0;
 int number2=0; 
 int series=0;
  
 printf("\n Please Enter starting value \n") ;   
 scanf("%d", &number1);   
  printf("\n Please Enter ending value \n") ;   
 scanf("%d", &number2);  
 for(int i=number1; i<number2; i++)   
  {   

   for(int j=1; j<i; j++ ){
     if(i%j==0){
       series=(series+i);
       
        }
        
   }
      if(series==i){
          printf(" %d ", i);
        }
  }    

return 0 ;   
}

TASK 7
  #include<stdio.h>
int main() {
    int i;
    int space;
    int rows;
    int k=0;
    int count=0;
    int count1=0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i=1; i<=rows; ++i) {
        for (space=1; space<=rows-i; ++space) {
          printf("  ");
          ++count;
        }
        while (k!=2*i-1) {
            if (count <= rows-1)
            { printf("%d ", i+k);
              ++count;
            }
            else {
              ++count1;
              printf("%d ", (i+k-2*count1));
            }
            ++k;
        }
        count1=count=k=0;
        printf("\n");
    }
    return 0;
}

Task 8
  #include <stdio.h>
int main()
{
  int number=0;
  int reverse = 0;
  printf("Enter a number\n");
  scanf("%d", &number);

  while (number != 0)
  {
    reverse = reverse * 10;
    reverse = reverse + number%10;
    number = number/10;
  }

  printf("Reverse of the number = %d\n", reverse);

  return 0;
}

