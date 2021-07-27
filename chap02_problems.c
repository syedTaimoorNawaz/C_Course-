//! Which of the following is in valid in C?

// int a;  b = a; //! --->it is invalid
// int  v = 3 ^ 3; // --->it is valid 
// char dt = '21 - Dec - 2002'; //!--->it is invalid;

//! What data type will 3.0/8-2 returns? 
// Answer is : Float

//! Write a program to check weather a number is divisible 97 or Not?(without controll structure is use)

// #include <stdio.h>

// int main()
// {
//      int number;
//      printf("Enter the number: ");
//      scanf("%d", &number);

//      printf("Divisiblity Test Returns %d", number%97);
//      return 0;
// }

//! Explain Step by step evalution of 3*x/y-z+k where x = 2, y = 3, z = 3, k = 1;
#include <stdio.h>

int main()
{
     int x,y,z,k;
      x = 2;
      y = z = 3, k = 1;
     printf("The Solving a given above equation is: %d", 3*x/y-z+k); // Answer is 0;

     //3 * x / y - z + k
     // 3 * 2 ---> 6
     // 6 / 3 ----> 2
     // 2 - 3 ---> -1
     // -1 + 1 ---> 0
     return 0;
}

//! 3.0 + 1 will be?
// Floating Point Number 
