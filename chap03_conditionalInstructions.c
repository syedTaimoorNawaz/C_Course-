// // C program to check weather a number is even or odd?
#include <stdio.h>

int main()
{
     int number;
     printf("\nEnter a number: ");
     scanf("%d", &number);

     if (number % 2 == 0)
     {
          printf("\n%d is even", number);
     }

     else
     {
          printf("\n%d is odd", number);
     }
     //Note That else is not necessory but optional
     return 0;
}

//Relational Operators

#include <stdio.h>

int main()
{
     int age;
     printf("Enter your age: ");
     scanf("%d", &age);

     if (age >= 90)
     {
          printf("You are above 90, you cannot drive!");
     }
     else
     {
          printf("You can drive.");
     }

     printf("");
     return 0;
}

// Logical Operator
#include <stdio.h>

int main()
{
     int age;
     int vipPass = 0;
     vipPass = 12;

     printf("Enter your age: ");
     scanf("%d", &age);
     // if (age >= 18 && age <= 70)
     if ((age >= 18 && age <= 70) || vipPass == 12)
     {
          printf("You are above 18 and bellow 70, you can drive");
     }

     else
     {
          printf("You cannot drive");
     }

     return 0;
}

// if else if else leader:

#include <stdio.h>

int main()
{
     int number;
     printf("\nEnter a number: ");
     scanf("%d", &number);

     if (number == 1)
     {
          printf("\nYour number is 1");
     }

     else if (number == 2)
     {
          printf("\nYour number is 2");
     }

     else if (number == 3)
     {
          printf("\nYour number is 3");
     }

     else
     {
          printf("\nits not 1, 2 and 3");
     }
     return 0;
}

// Coditional Operator: / one liner
//  A short hand if - else can be written using the condional or ternary operators:
// Syntax: condition ? expresion if true : else statement;
// ? and : in above this are ternary operators

#include <stdio.h>

int main()
{
     int number;
     printf("\nEnter a number: ");
     scanf("%d", &number);
     number % 2 == 0 ? printf("%d is even", number) : printf("%d is odd", number);
     return 0;
}

// Switch case

#include <stdio.h>

int main()
{
     int rating;
     printf("\nEnter Rating (1 - 5): ");
     scanf("%d", &rating);

     switch (rating)
     {
     case 1:
          printf("\nYour Rating is 1");
          break;
     case 2:
          printf("\nYour Rating is 2");
          break;
     case 3:
          printf("\nYour Rating is 3");
          break;
     case 4:
          printf("\nYour Rating is 4");
          break;
     case 5:
          printf("\nYour Rating is 5");
          break;
     default:
          printf("\nInvalid Rating");
          break;
     }
     return 0;
}

// Quick Quiz: Using a swich case, write a program to find grade of a students given his marks based on below
/*
90 - 100 ---> A
80 - 90 ---> B
70 - 80 ---> C
60 - 70 ---> D
< 70 ---> F
*/

#include <stdio.h>

int main()
{
     int marks;
     printf("Enter Your Marks: ");
     scanf("%d", &marks);
     switch (marks / 10)
     {
     case 10:
     case 9:
          printf("\n Your Grade is \"A\"");
          break;
     case 8:
          printf("\n Your Grade is \"B\"");
          break;
     case 7:
          printf("\n Your Grade is \"C\"");
          break;
     case 6:
          printf("\n Your Grade is \"D\"");
          break;
     case 5:
          printf("\n Your Grade is \"F\"");
          break;
     default:
          printf("Invalid Input");
          break;
     }
     return 0;
}