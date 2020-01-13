# Unit2--comsci-shin

**Project**
----------------
1.[Planning](#planning)

**Project Planning** 
------------------
**Defining the Problem**

The year is 2050, there is an established Moon base and Mars base.
A communication system must be created between earth and mars, and moon and mars. 
The problem is that the Earth station can only communicate with morse, while the Moon station can only use binary. 
This communication system has to have an input of english, and output of morse/binary, using only 2 button inputs as well as leds and buzzers. 
Must also be able to recieve messages- type in binary/morse convert to english.

**Sucess Criterions**
MOON BASE OPERATIONS
-Turn Morse into English
-Turn English into Binary
-Must be easy to use- (operator does not need to understand morse/binary)
-Materials used has to be
Only 2 buttons
2-3 Lights
1 LCD monitor
Buzzers


**Conditions and problems**
-How to dissplay mssg in English?
-How to switch between input (Rx) and sending (7x)
-Morse vs binary
-LED limitations- only 2-3 bulbs per station

**2 buttons to alphabetical words**
TASK- Create a program that turns 2 button inputs into words, then print them to serial monitor
IDEA- Make the left button cycle from a-z, right button to select alphabetical letter to add to word, both buttons to print word.
Implementation- Make array with entire alphabet, when left button pressed, cycle in the array from a-z-a-z, when right button pressed, add the current character in array to the word, press both buttons to relay word to user.

code 
![alphabet](Alphabet.png)

**CLASSWORK and Development**
---------------
Making a binary counter that can count to 15

**Counting in Different Bases**
Our basic counting system is counting in base 10. This means that there are 10 possible digits - 0,1,2,3,4,5,6,7,8,9. When we reach the final digit in base 10 (9), we go up a digit to 10, then continue. Binary is counting in base 2- using only 1 and 0.
Counting in Binary is as follows-


![BinaryTable](binarycountingtable.png)

Other Examples-
Base 4- 0,1,2,3,10,11,12,13,20,21,22,23,30...
Base 8- 0,1,2,3,4,5,6,7,10,11,12,13,14,15,16,17...

**Conversion of Binary-Decimaal and Vice Versa**
From Binary-Decimal
-Line up the squares of 2- starting from 2^0 at the first digit, 2^1 , 2^2, and on and on.
-For every digit, if there is a 0, neglect the power of two that is assosciated with the digit
-For every digit, if there is a 1, add the power of two that is assosciated with the digit to a sum.
-The sum is your decimal number

Example- 10011011 to decimal
8 digits- left to right - 1, 2, 4, 8, 16, 32, 64, 128
There are 1's on the 1st,2nd,4th,5th,8th digits
Add the powers of two corresponding to digits- 1+2+8+16+128
Decimal = 155

From Decimal-Binary
divide decimal number by 2 until reaching 0, for every remainder, a 1, for every division without remainder, 0

Example- 63 to binary
63/2 = 31 r1 . 31/2 = 15 r1, 15/2 = 7 r1, 7/2 = 3 r1, 3/2 = 1 r1, 1/2 = 0 r1
binary- 111111

**Logic Gates**

Logic Gates are used to express conditions in boolean algebra.
2 states- True(1)/False(0) can be expressed in boolean algebra.
Shows inputs, and results of outputs.

NOTGATE- Turns 1 input into opposite as output- 1->0, 0->1.

ANDDGATE- Has 2 inputs, 1 output. if both inputs are 1, output becomes 1, all other conditions result in output 0

NANDGATE- Serves as an And gate with a Not following it.outputs are opposite of AndGate. Output is only 0 when both inputs are 1.

ORGATAE- If one of the two inputs are 1, the output will be 1, both inputs can be 1 and output will still be 1

NORGATE- If one of the two inputs are 1, the output will be 0, only instance of  output=1 is when both inputs are 0

XORGATE(exclusive or)- If one of the two inputs are 1, the  output will be 1, if both inputs are 1, output will be 0.

XNORGATE(exclusive not or)- Combining XORGATE and XNORGATE, the output will be 1 if both inputs are 0, or if both inputs are 1.

Truth tables are tables that show the values of inputs and outputs (0/1) based on the logic gate.


![logicgates](logicgates.jpg)


These Logic gates can be used in diagrams to simplify boolean problems, and construct code that is more efficient, as the diagrams will show you the necessary outputs, and will save you from coding each conddition seperately.
These logic gate diagrams can be converted into boolean algebra

The logic gates expressed in boolean algebra are as follows, 
F=output
A=Input1 B=Input2

![algebraboolean](algebraboolean.jpg)

These are the rules of Boolean Algebra

![algebrabooleanrules](algebrabooleanrules.gif)

s
Example Diagram

![logicgatediagram](Logicgatediagram.jpg)

**KMAPs and boolean algebra**
Kmaps are a method of turning inputs/outputs into boolean algebra
This works by mapping the possible inputs/outputs on a table, pairing 1s and finding constants and adding them.

![kmap](kmap.jpg)


**Segments Converter**

Task- using leds, make a number display going from 0-7 which operates on 3 buttons
Solution- Make a truth table, inputs are A B C, line numbers 0-7 as outputs, then individually look at which leds will have value 1, 0 for each number displayed, using these values, make kmaps to figure out what to code.

![numbers](numbers.jpg)


s


**What Is Usability???**
Definition: Ease of access and use of a product, to achieve its goal.
citation-https://www.interaction-design.org/literature/topics/usability

**Human-Centered Design (HCD)**
Discoverability- when a product is designed in such a way that the user can tell its functions/capabilities from looking/interacting with it.
Feedback- 

**Binary- Hexadecimal**
Hexadecimals are used as shortened ways to expresss binary.
It utilizes base 16, using characters 0-9-A-F




![hexatable](hexadecimal.png)

**Learning C**
Introduction homework tasks (1/7/2020) 

Task 1- Write a C program that checks if two integers entered by the user are equal
https://repl.it/repls/SugaryQuarterlyTrials
Task 2-Write a C program that checks if a year provided by the user is a gap year
https://repl.it/repls/NumbWeakServers

Classwork on C (1/8/2020)
Code for Tasks can be found in repository files- PractisingC Classwork


**The Machine Cycle**
We learned the machine cycle, as well as a program that stores a number 20 into ram slot 14
Cycle of processes are as follows- Fetch(retrieve instruction from memory), Decode(translate retrieved instruction into commands), Execute(run the command)
Registries-temporary storages
Ram-memory
CPU-executes the programs



**CODE**
----------
Learning to use arduino
1 configuring 3leds 

![arduinoledbasic](basicled.png)

before void setup,
define each light as int based on connected port
``int red = 10;``

During void setup,
define light as output (buttons will be input)
``pinMode(red, Output);`` [where int "red" shows pinnumber, can be replaced by real number]

During void loop, (process)
to activate led 
``digitalwrite(red, HIGH);``
High-on
``digitalwirte(red, LOW);``
Low-off

3 Buttons, 2 leds, according to table

We had to replicate the input/output results of a tabale with 3 buttons and 2 led, this is the table

![table](table.png)

Here is the arduino circuitry

![arduino](tablearduino.png)


The code:
1.)create integers for every button and light, in void setup define buttons and lights as inputs and outputs
2.)Define "state" values which means a button has been pressed, StateA for button  A, StateB for button B, StateC for button C. These "state" variables will work to shorten code in if statements
3.)create if statements that correspond to each condition- for example for 001, ``if((!stateA && !stateB && stateC)){ digitalWrite(light1, HIGH); digitalWrite(light2, HIGH); }``
4.) repeat this process for every input condition.

The code is as follows


int buttonA = 13;
int buttonB = 12;
int buttonC = 11;
int light1 = 3;
int light2 =4;
int stateA = 0;
int stateB = 0;
int stateC = 0;



void setup()
{
  pinMode(buttonA, INPUT);
  pinMode(buttonB, INPUT);
  pinMode(buttonC, INPUT);
  pinMode(light1, OUTPUT);
  pinMode(light2, OUTPUT);
}


void loop()
{
  
  stateA = digitalRead(buttonA);
  stateB = digitalRead(buttonB);
  stateC = digitalRead(buttonC);
  if((!stateA && !stateB && !stateC)){
    digitalWrite(light1, HIGH);
 digitalWrite(light2, HIGH);
}

if((!stateA && !stateB && stateC)){
    digitalWrite(light1, HIGH);
  digitalWrite(light2, HIGH);
}



if((!stateA && stateB && !stateC)){
    digitalWrite(light1, HIGH);
  digitalWrite(light2, LOW);
}


if((!stateA && stateB && stateC)){
    digitalWrite(light1, HIGH);
  digitalWrite(light2, LOW);
}

if((stateA && !stateB && !stateC)){
    digitalWrite(light1, LOW);
  digitalWrite(light2, HIGH);
}

if((stateA && !stateB && stateC)){
    digitalWrite(light1, HIGH);
  
      digitalWrite(light2, HIGH);
}

 if((stateA && stateB && !stateC)){
    digitalWrite(light1, HIGH);
    digitalWrite(light2, HIGH);
} 
  
  if((stateA && stateB && stateC)){
    digitalWrite(light1, HIGH);
    digitalWrite(light2, HIGH);
}
}



