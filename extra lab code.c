//program that prints the size (in bytes) of int, float, char, double, and long long using sizeof operator.


#include <stdio.h>

int main() {
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long long: %zu bytes\n", sizeof(long long));

    return 0;
}

//given two integers, divide them and print the result in float (type conversion).
#include <stdio.h>

int main() {
    int a, b;
    float result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    result = (float)a / b;

    printf("Result of division: %.2f\n", result);

    return 0;
}

//Create a program where a global variable and a local variable have the same name. Print their values inside and outside the function to show the difference.

#include <stdio.h>

int num = 100; 

void display() {
    int num = 50; 
    printf("Inside function, local num = %d\n", num);
}

int main() {
    printf("In main, global num = %d\n", num);
    display();
    printf("Back in main, global num = %d\n", num);
    return 0;
}
//Write a small C snippet with int, if, while, return. Ask students: Which words are keywords? Which are identifiers?
#include <stdio.h>

int main() {
    int count = 3;       

    while (count > 0) {   
        if (count == 2) { 
            printf("Halfway there!\n");
        }
        count--;         
    }

    return 0;            
}
//Write a program that takes a character as input and prints its ASCII value.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);   

    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}
//Write a program that finds the sum of digits of a number using a while loop.
#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;   
        sum = sum + digit; 
        num = num / 10;     
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
