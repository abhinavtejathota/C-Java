#include <stdio.h> //header file library
#include <stdbool.h> //boolean library
#include <string.h> //string library

int main() { //function
    /*
    printf("Hellow, World! \n"); //new line
    printf("Hellow \t");
    printf("\"World\" \\ \n"); //tab, backslash and quotes
    */

    /*  int - 2-4 bytes %d/%i
        float - 4 bytes %f 6-7 decimals
        double - 8 bytes %lf 15 decimals
        char - 1 byte %c
    */

    /*
    int x = 10; //integer variable
    int y = 20;
    int z;
    z = x+y; //operation
    char c = 'A'; //character variable
    int t = c; //ASCII value
    printf("%d \n", t);
    float l = 5.569; //float variable
    int a=15,b=23;
    int temp1 = a;
    a = b;
    b = temp1;
    int *addr_a = &a; //swap
    int *addr_b = &b;
    printf("address of a: %p \n", addr_a); //address of variable
    printf("address of b: %p \n", addr_b);

    int *temp2 = addr_a;
    addr_a = addr_b;
    addr_b = temp2;
  
    printf("address of a= %p b= %p \n", addr_a, addr_b);

    printf("Swap: a=%d b=%d \n",a,b);
    printf("Float: %.2f \n", l); 
    printf("Character: %c \n", c); 
    printf("Sum %d \n",z); //format specifier

    char myText[] = "Hellow";
    printf("%s \n", myText);

    float e = 55e2; 
    printf("%.1f \n", e);

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    printf("%zu \n", sizeof(myInt));
    printf("%zu \n", sizeof(myFloat));
    printf("%zu \n", sizeof(myDouble));
    printf("%zu \n", sizeof(myChar));
    */

    /*
        short int - 2 bytes
        unsigned int - 2-4 bytes
        long int - 4-8 bytes
        long long int - 8 bytes
        unsigned long int - 4-8 bytes
        unsigned long long int - 8 bytes
        long double - 8-16 bytes
    */

    /*
    int a = 5;
    int b = 2;
    float sum = a/b;
    printf("%.2f",sum);
    float c = (float) (a/b);
    printf("\n%.2f",c);
    */

    /*
    const int NUM = 5; //words like final in java -> can only be declared i.e., cannot be initialized then declared later
    NUM = 6; //error
    printf("%d", NUM);
    */

    /*
    bool isTrue = true; //boolean type
    bool isFalse = false;
    printf("%d \n", isTrue); //1
    printf("%d \n", !isFalse); //1
    */

    /*
    if(20>18){
        printf("Hellow");
    }
    else{
        printf("World");
    }
    */

    // printf(20>18? "Hellow" : "World");

    /*
    int i = 3;
    while(i>0){
        printf("Hellow \n");
        i--;
    }

    do {
        printf("World! \n");
        i++;
    } while(i<3); code runs one no matter what
    */

   /*
    int myNumbers[] = {3, -1, 7, 0, 9};
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
   */
    //Revised till arrays
    return 0; //comment
    /*  Multi
        Line
        Comments  */
}