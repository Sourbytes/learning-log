//    \n represents only single invisible charecter
//    \t for tab
//    \" for double quote
//    \\ for backslash itself


// Variables and Arithmetic

// #include <stdio.h>

// /* print Faherheit-celsius table 
//  for f = 0, 20, ...,300 */

//  int main()

// {
//      float lower, upper, step;
//      float fahr, celsius;
//      lower = 0;
//      upper = 300;
//      step = 20;
//      fahr = lower;
    
//      while (fahr <= upper) {
//          celsius = (5.0/9.0) * (fahr-32.0);
//          printf("%4.0f %6.0f\n", fahr, celsius);
//          fahr = fahr + step;

//      }
//   }


// #include <stdio.h>
// int main () {
//     printf("hello, ");
//     printf("world");
//     printf("\n");
// }

// #include <stdio.h>

// /* print Fahrenheit-Celsius table
// for f = 0, 20, ..., 300 */

// int main()
// {
//     int lower, upper, step;
//     float fahr, celsius;
//     lower = 0; /* lower limit of temperature table */
//     upper = 300; /* upper limit */
//     step = 20; /* step size */
//     fahr = lower;

//     while (fahr <= upper) {
//         celsius = (5.0/9.0) * (fahr-32.0);
//         printf("%4.0f %6.1f\n", fahr, celsius);
//         fahr = fahr + step;
//     }
// }




#include <stdio.h>

int main() /* Fahrenheit-celcious table*/
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
       printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

// #include <stdio.h>

// int main() /* Fahrenheit-Celsius table */
// {
//     int fahr;

//     for (fahr = 0; fahr <= 300; fahr = fahr + 20)
//         printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
// }