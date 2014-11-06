/*
 Quick review of C
 
 Quick exercises
 http://c.learncodethehardway.org/
 
 %e prints in scientific notation
 
 '\0' creates the number 0
 char nul_byte = '\0';

 C treats strings as arrays of bytes, only the printing function knows there's a difference.
 
*/



#include <stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = { 10,12,13,14,20 };
    // 5 ints in this arrays
    // The areas array has 5 integers in it, so it makes sense that my computer requires 20 bytes to store it.

    
    char name[] = "Zed";
    char full_name[]= { 'Z', 'e', 'd', ' ', 'S', 'h', 'a', 'w', '\0'};
    
    // WARNING:  On some systems you may have to change the %ld in this code to a %u
    // since it will use unsigned ints
    
    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    
    printf("The number of ints in areas: %ld\n", sizeof(areas)/ sizeof(int));
    printf("The first area is %d, the 2nd %d\n", areas[0], areas[1]);
    
    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld\n", sizeof(name));
    
    printf("The number of chars: %ld\n", sizeof(name)/sizeof(char));
    printf("The size of full name (char[]): %ld\n", sizeof(full_name));
    
    printf("The number of chars: %ld\n", sizeof(full_name)/ sizeof(char));
    printf("name = \"%s\" and full_name = \"%s\"\n", name, full_name);
    
    return 0;
    
}