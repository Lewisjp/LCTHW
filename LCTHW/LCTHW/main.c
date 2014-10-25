/*
 Quick review of C
 
 Covers Exercises 1 & 2
 http://www.codingunit.com/printf-format-specifiers-format-conversions-and-formatted-output
 
 Quick exercises
 http://c.learncodethehardway.org/
 
 
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;

    printf("You are %d miles away.\n",distance);

    float power = 2.345f;
    double super_power = 56789.432;
    
    printf("You have %f levels of powers.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    
    char initial = 'A';
    // This char array is a string
    // Unlike OOP, C is based on pointers
    char first_name[] = "Zed";  // Print out char arrary (String) with %s
    char last_name[] = "Shaw";
    
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s.\n", last_name);

    printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);

    return 0;
    
}