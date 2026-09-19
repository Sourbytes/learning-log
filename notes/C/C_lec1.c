//    \n represents only single invisible charecter
//    \t for tab
//    \" for double quote
//    \\ for backslash itself


// Variables and Arithmetic

#include <stdio.h>
/* print Faherheit-celsius table 
 for f = 0, 20, ...,300 */

int main()

 {
    float lower, upper, step;
    float fahr, celsius;
    lower = 0;
    upper = 300;
    step = 200;
    fahr = lower;
    
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f %6.0f\n", fahr, celsius);
        fahr = fahr = step;

    }
 }