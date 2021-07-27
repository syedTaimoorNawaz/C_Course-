// #include <stdio.h>

// int main()
// {
     // type declearaton instructions
     // int a = 4;

     // int a = 4, b, c;
     // b = c = a;
     // printf("\nThe Value of a is %d", a);
     // printf("\nThe Value of b is %d", b);
     // printf("\nThe Value of c is %d", c);

//      float a = 1.1;
//      float b = a + 8.9;
//      printf("\nThe value of b is %f", b);
//      return 0;
// }

// //Airthmetic operators 
// # include<stdio.h>
// # include <math.h>

// int main(){
//     int a = 4;
//     int b = 8;

//     printf("The value of a + b is: %d\n", a + b);
//     printf("The value of a - b is: %d\n", a - b);
//     printf("The value of a * b is: %d\n", a * b);
//     printf("The value of a / b is: %d\n", a / b);

//     int z;
//     z = b * a; // legal
//     //b * a = z; // Illegal
//     printf("The value of z is: %d\n", z);

//     printf("5 when divided by 2 leaves a remainder of %d\n", 5%2);
//     printf("-5 when divided by 2 leaves a remainder of %d\n", -5%2);
//     printf("5 when divided by -2 leaves a remainder of %d\n", 5%-2);

//     // No operator is assumed to be present
//     //printf("The value of 4 * 5 is %d\n", (4)(5)); --> Will not return 20/ Wrong!!
//     printf("The value of 4 * 5 is %d\n", (4)*(5));

//     // There is no operator to perform exponentiation in C
//     printf("The value of 4 ^ 5 is %d\n", 4^5); // -> Will not produce 4 to the power 5
//     printf("The value of 4 to the power 5 is %f\n", pow(2, 5)); 


//     printf("The value of 6 + 5 is %d\n", 6 + 5);
//     printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);
//     printf("The value of 6.1 + 5.6 is %f\n", 6.1 + 5.6);
//     printf("The value of 5/2 is %d\n", 5/2);
//     printf("The value of 3.0/9 is %f\n", 3.0 / 9);

//     return 0;
    
// }

// Operator Precedence

// #include <stdio.h>

// int main()
// {
//     int x = 2;
//     int y = 3;

//     printf("The value of 3*x - 8*y is %d \n", 3*x - 8*y);
//     printf("The value of 8*y / 3*x is %d \n", 8 * y / 3 * x);
//       // 8*3 /3*x = 24/6 will give wrong answer
//     // 24/3*2
//     // 8*2
//     // 16
//     printf("The value of 8*y / 3*x is %d \n", 8 * y / (3 * x));
  

//     return 0;
// }

// some practice
#include<stdio.h>

int main(){
    // int a; int b=a;
    // int v = 3^3;
    // char dt = '2';
    // float d = (3.0/8-2);
    // printf("%d\n", v);
    // printf("%f\n", d);

    // Q3. Write a program to determine whether a number is divisible by 97 or not
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Divisibility test returns: %d\n", num%97);

    // Q4. Step by step evaluation of 3*x/y-z+k
    int x = 2, y=3, z=3, k=1;
    int result = 3 * x / y - z + k;
    // 6/3 - 3 + 1
    // 2 - 3 + 1
    // 2 - 3 + 1 
    // 0
    printf("The value of result is %d", result);


        return 0;
}