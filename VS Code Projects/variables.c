#include <stdio.h>
#include <stdbool.h>
int main (){ 

// Variable = A reusable container for storing a value.

    int age =20;
    int year =2025;
    int quantity = 10;  

    float gpa =2.5;
    float price = 78.55;
    float temp = -38.91;

    double pi = 3.679265358979325; // More precise than, float 15-16 decimal points

    char grade = 'A';
    char symbol = '&';
    char name[] ="Bro Code";    //This called ray, it can store more than one character
    char food[] ="Mango";

    bool isOnline =0;  //true =1 false =0

    printf("My age is %d\n", age);  // %d = Decimal (integer)
    printf("The year is %d\n", year);
    printf("The quantity is %d\n", quantity);   


    printf( "Your GPA is %.2f\n", gpa );                // %f = Float  like 2.5 , 10.5
    printf("The price is %.2f\n",price);                // .2 = 2 decimal points
    printf("The temperature is %.2f\n",temp);     


    printf("The value of pi is %.15f\n", pi);        // .15 = 15 decimal points

    printf("Your grade is %c\n", grade);      // %c = character like A, B, Z 
    printf("Your favorite symbol is %c\n", symbol);  // we can add symbols useing this char thing.  !@#$%^&
    printf("I leared this from %s\n",name);  // meaning string %s = string like "Bro Code" "1234" "Hello World"
    printf("My favorite food is %s\n", food);


    printf("This shows online or offline %d\n", isOnline);  //%d used for bool type true =1 false =0


    return 0;
}


/* SUMMERY
 Variable is a container for storing a value.
    Data types:
        int = whole numbers  (4 bytes of memory)
        float = decimal numbers (4 bytes of memory)
        double = double precision decimal numbers (8 bytes of memory)
        char = single characters (1 byte of memory)
        char[] = multiple characters (1 byte of memory per character)
        bool = true/false (1 byte of memory) requires #include <stdool.h>

*/