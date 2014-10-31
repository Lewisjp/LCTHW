/*
 Quick review of C
 
 Covers Exercises 1 & 2
 http://www.codingunit.com/printf-format-specifiers-format-conversions-and-formatted-output
 
 Quick exercises
 http://c.learncodethehardway.org/
 
 %e prints in scientific notation
 
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int bugs = 100;
    double bug_rate = 1.2;
    
    printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);
    
    long universe_of_defects = 1L * 1024L * 1024L * 1024L;
    printf("The entire universe has %ld bugs.\n", universe_of_defects);
    
    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n", expected_bugs);
    
    double part_of_universe = expected_bugs / universe_of_defects;
    printf("THis is only a %e portion of the universe.\n", part_of_universe);
    
    // '\0' creates the number 0
    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    
    // two % are used after %d (that displayes the double variable),
    // %% prints out a single '%'
    printf("Which means you should care %d%%.\n", care_percentage);
    
    return 0;
    
    
}