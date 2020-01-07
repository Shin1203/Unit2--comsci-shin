Task 1
```
#include <stdio.h>

int main(void) {
  int num=0;
  printf("Enter number\n");
  scanf("%d" ,&num);
  /*Using the % operator, the number is divided by 2, the outcomes will be the remainder, 
  if the remainder is 0 the number perfectly divided into 2, therefore it is even, if not the number is odd  */
  if ( num%2 == 0 ) {
    printf("number is even\n");
  }
  else {
    printf("Number is odd\n");
  }
  return 0;
}
```

Task 2
```
#include <stdio.h>

int main(void) {
  int num=0;
  printf("Enter number\n");
  scanf("%d" ,&num);
/*Using the if operator, when entered number is bigger than 0, message is printed showing that number is positive,
and if not message is shown that number is negative*/
  if ( num > 0 ){
    printf("Number is positive\n");
  }
else {
  printf("Number is negative\n");
}
  return 0;
}
```
Task 3
```
#include <stdio.h>

int main(void) {
  int age=0;
  printf("Enter age\n");
    scanf("%d" ,&age);
  \*Use if statement, and bigger than equal to to check if entered age is bigger than or equal to 18, if so the person can vote, otherwise they cannot *\
  if ( age >= 18 ){
    printf("Congratulations, you can vote\n");
  }
  else {
printf("Sorry, you are too young to vote\n");
      }
  return 0;
}
```

Task 4
```
#include <stdio.h>

int main(void) {
 int num1=0;
 int num2=0;
 int num3=0;
  printf("Enter number 1\n");
  scanf("%d" ,&num1);
  printf("Enter number 2\n");
  scanf("%d" ,&num2);
    printf("Enter number 3\n");
  scanf("%d" ,&num3);
  
\*The following if statement checks if every entered number is bigger than the other two, 
if the condition is met, then a message will print which number is the biggest,
with the else statement, if all three numbers are the same a different message is printed *\
if ( num1 > num2 && num1 > num3 ) {
  printf("The biggest number is the first, %d", num1);
}
else if ( num2 > num1 && num2 > num3 ) {
  printf("The biggest number is the second, %d", num2);
}
else if ( num3 > num1 && num3 > num2 ) {
  printf("The biggest number is the third, %d", num3);
}
else {
  printf("All three entered numbers are equal");
}

}

```
