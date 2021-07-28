// //! what will be the output of this program?
#include <stdio.h>

int main()
{
     int a = 10;
     if (a = 11)
     {
          printf("i am 11");
     }
     else
     {
          printf("I'm not 11");
     }
     return 0;
}

//! write a program to find out wether a student is pass or fail; if it requires total 40% and at least 33% in each subject to pass. Assume 3 subjects and takes marks as an input from the user?
#include <stdio.h>

int main()
{
     int dataScience, Cods, Web_development, Tmarks;
     printf("\nEnter a data science subject marks: ");
     scanf("%d", &dataScience);

     printf("\nEnter a CODS subject marks: ");
     scanf("%d", &Cods);

     printf("\nEnter a  Web Development  subject marks: ");
     scanf("%d", &Web_development);

     Tmarks = (dataScience + Cods + Web_development) / 3;
     if ((Tmarks < 40) || dataScience < 33 || Cods < 33 || Web_development < 33)
     {
          printf("Your total percentage is %d and you are fail", Tmarks);
     }

     else
     {
          printf("Your total percentage is %d and you are pass", Tmarks);
     }

     return 0;
}

//! Calculate income tax paid by an employee to the goverment as per the slabs mention below:
/*
income-slab           tax
2.5L -  5.0L             5%
5.0L - 10.0L            20%
Above 10.0L           30%
!Note That there is no tax below 2.5L. Take income amount as an input from the user.
*/
#include <stdio.h>

int main()
{
     float income, tax = 0;
     printf("\n Enter your income: ");
     scanf("%f", &income);

     if (income >= 250000 && income <= 500000)
     {
          tax = tax + 0.05 * (income - 250000); //  250000 lack detect  because starting 250000 no tax
     }

     else if (income >= 500000 && income <= 1000000)
     {
          tax = tax + 0.20 * (income - 500000);
     }

     else if (income > 1000000)
     {
          tax = tax + 0.30 * (income - 1000000);
     }

     printf("\nYour net income tax to be paid by 26th of this month is %f", tax);

     return 0;
}

//! Again Just Practice
#include <stdio.h>

int main()
{
     float income, tax = 0;
     printf("\nEnter your income: ");
     scanf("%f", &income);

     if (income >= 250000 && income <= 500000)
     {
          tax += 0.05 * (income - 250000);
     }

     if (income >= 500000 && income <= 1000000)
     {
          tax += 0.20 * (income - 500000);
     }

     if (income > 1000000)
     {
          tax += 0.30 * (income - 1000000);
     }
     printf("\nyour tax to be paid is %f", tax);
     return 0;
}

//! write a program wether a year entered by a user is a leep year or not. take year as an input from the user?
/*
1) If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
2) If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
3) If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
4) The year is a leap year (it has 366 days).
5) The year is not a leap year (it has 365 days).
*/
#include <stdio.h>

int main()
{
     int year;
     printf("\nenter a year to check leap year or not: ");
     scanf("%d", &year);

     if (year % 4 == 0)
     {
          printf("%d, its a leap year", year);
     }

     else if (year % 100 == 0)
     {
          printf("%d, its a leap year", year);
     }

     else if (year % 400 == 0)
     {
          printf("%d, its a leap year", year);
     }

     else
     {
          printf("%d, is not a leap year", year);
     }

     return 0;
}
//! write a program to determine wether a charecter entered by the user is lower case or not?
#include <stdio.h>

int main()
{
     char charecter;
     printf("\nenter a charecter: ");
     scanf("%c", &charecter);

     if (charecter >= 'a' && charecter <= 'z')
     {
          printf("\'%c\' is a lower case charecter.", charecter);
     }
     else
     {
          printf("\'%c\' is not a lower case charecter.", charecter);
     }

     return 0;
}
//!write a program to find greatest of four numbers entered by the user?
#include <stdio.h>

int main()
{
     int num1, num2, num3, num4;

     printf("\n enter a num1 value :");
     scanf("%d", &num1);

     printf("\n enter a num2 value :");
     scanf("%d", &num2);

     printf("\n enter a num3 value :");
     scanf("%d", &num3);

     printf("\n enter a num4 value :");
     scanf("%d", &num4);

     if (num1 > num2 && num1 > num3 && num1 > num4)
     {
          printf("%d num1 is greatest number", num1);
     }
     else if (num1 < num2 && num2 > num3 && num2 > num4)
     {
          printf("%d num2 is greatest number", num2);
     }
     else if (num1 < num3 && num2 < num3 && num4 < num3)
     {
          printf("%d num3 is greatest number", num3);
     }
     else
     {
          printf("%d num4 is greatest number", num4);
     }

     return 0;
}

// ! Just practice
#include <stdio.h>
int main()
{
     double n1, n2, n3;
     printf("Enter three numbers: ");
     scanf("%lf %lf %lf", &n1, &n2, &n3);

     // if n1 is greater than both n2 and n3, n1 is the largest
     if (n1 >= n2 && n1 >= n3)
          printf("%.2lf is the largest number.", n1);

     // if n2 is greater than both n1 and n3, n2 is the largest
     else if (n2 >= n1 && n2 >= n3)
          printf("%.2lf is the largest number.", n2);

     // if both above conditions are false, n3 is the largest
     else
          printf("%.2lf is the largest number.", n3);

     return 0;
}