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
  /*Use if statement, and bigger than equal to to check if entered age is bigger than or equal to 18, if so the person can vote, otherwise they cannot */
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
  
/*The following if statement checks if every entered number is bigger than the other two, 
if the condition is met, then a message will print which number is the biggest,
with the else statement, if all three numbers are the same a different message is printed */
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

Task5
```
#include <stdio.h>

int main(void) {
  int x=0;
  int y=0;
  printf("Enter X coordinate\n");
 scanf("%d" ,&x);
 printf("Enter Y coordinate\n");
 scanf("%d" ,&y);

/*To find which of the quadrants a coordinate is in
,the if statement checks whether the values of x and Y are positive or negative, */
 if ( x > 0 && y > 0 ){
printf("Coordinate lies in quadrant 1");
 }
 
 if ( x < 0 && y > 0 ){
printf("Coordinate lies in quadrant 2");
 }

 if ( x < 0 && y < 0 ){
printf("Coordinate lies in quadrant 3");
 }

  if ( x > 0 && y < 0 ){
printf("Coordinate lies in quadrant 4");
 }
  return 0;
}
```
task 6
 ```
#include <stdio.h>

int main(void) {
int math=0;
int phy=0;
int chem=0;
  printf("Enter your math grade\n");
  scanf("%d", &math);
    printf("Enter your physics grade\n");
  scanf("%d", &phy);
    printf("Enter your chemistry grade\n");
  scanf("%d", &chem);

 /*totals are calculated by creating an integer which adds values of all 3 subjects*/
  int total=(math+phy+chem);
  int mathphy=(math+phy);
  /* following if statement checks if conditions are met for eligibility of admission*/
  if ( math >= 65 && phy >= 55 && chem >= 50 && total >= 180) {
    printf("The candidate is eligible for admisson\n");
  }
 else if ( mathphy >= 140){
   printf("The candidate is eligible for admisson\n");
 }
 else {
   printf("The candidate is not eligible for admission\n");
 }
  return 0;
}
```
 
task 7
  ```
  #include <stdio.h>

int main(void) {
  int temp=0;
  printf("Enter temperature in centigrade\n");
  scanf("%d", &temp);
/* the following if statements will check the various temperature conditions, then print a message if corresponding factors match*/

if ( temp < 0 ){
  printf("Freezing Weather");
}

if ( temp >= 0 && temp <= 10 ){
  printf("very cold weather");
}


if ( temp >= 20 && temp <= 30 ){
  printf("cold weather");
}


if ( temp >= 20 && temp <= 30 ){
  printf("Normal in temp");
}


if ( temp >= 30 && temp < 40 ){
  printf("It is hot");
}


if ( temp >= 40 ){
  printf("It is very hot");
}




  return 0;
}
  ```

task 8
 ```
 #include <stdio.h>

int main(void) {
  int angle1=0;
  int angle2=0;
  int angle3=0;
  
  printf("Enter value of angle 1\n");
  scanf("%d", &angle1);  
  printf("Enter value of angle 2\n");
  scanf("%d", &angle2);
  printf("Enter value of angle 3\n");
  scanf("%d", &angle3);

/* if angles do not add up to 180, it is not a triangle*/
int total=(angle1+angle2+angle3);

if (total != 180){
  printf("not a triangle\n");
  return 0;
}

/*a equilateral triangle's angles are all equal */
if ( angle1 == angle2 && angle2 == angle3){
  printf("The triangle is an equilateral\n");
}


/* a isosceles has 2 equal angles */
if ( angle1 == angle2 || angle2 == angle3 || angle1 == angle3){
  printf("The triangle is an isosceles\n");
}

/* a scalene triangle has no equal angles */
if ( angle1 != angle2 && angle1 != angle3 && angle2 != angle3 ){
  printf("The triangle is an scalene\n");
}


  return 0;
}
 ```
