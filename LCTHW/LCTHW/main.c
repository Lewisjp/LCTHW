/*
 Quick review of C
 
 Covers Exercises 1 & 2
 http://www.codingunit.com/printf-format-specifiers-format-conversions-and-formatted-output
 
 Quick exercises
 http://c.learncodethehardway.org/
 
 
*/

// import the contents of one file into this source file.
// h extensions for "header" files
#include <stdio.h>


/*
 argv and argc are how command line arguments are passed to main() in C and C++.
 
 argc will be the number of strings pointed to by argv. This will (in practice) be 1 plus the number of arguments, as virtually all implementations will prepend the name of the program to the array.
 
 The variables are named argc (argument count) and argv (argument vector) by convention, but they can be given any valid identifier: int main(int num_args, char** arg_strings) is equally valid.

 http://stackoverflow.com/questions/3024197/what-does-int-argc-char-argv-mean
*/

int main(int argc, char *argv[])
{
    int distance = 100;
    
    // call the int value with %d
    printf("You are %d miles away.\n", distance);
    
    return 0;
}
