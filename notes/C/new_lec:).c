// # include <stdio.h> /*Header*/
// int main()          /* Main function*/
// {
//     printf("hello world\n"); /*statement*/
//     return 0;             /*Return*/
// }



/*
a few quick examples of headers are :
<float.h> : It contains a set of various platform-dependent constants related to floating point values. Some examples of constants included in this header file are- e(exponent), b(base/radix), etc.
<math.h> : It is used to perform mathematical operations like sqrt(), log2(), pow(), etc.
<stdlib.h> : It contains standard utility functions like malloc(), realloc(), etc. It contains function prototypes for functions that allow bypassing of the usual function call and return sequence.
<string.h> : It is used to perform various functionalities related to string manipulation like strlen(), strcmp(), strcpy(), etc.
<errno.h> : It is used to perform error handling operations like errno(), strerror(), etc.
<assert.h> : It contains information for adding diagnostics that aid program debugging.
etc etc
*/


// #include <stdio.h>
// int main (int argc, char argv[]) {
//     /* printing the count of arguments*/
//     printf ("the value of argc in %d\n", argc);
//     /* printing each arguments*/
//     for (int i = 0 ; i < argc; i++) {
//         printf("%s \n", argv[i]);
//     }
// }


// #include <stdio.h>

// int main (int argc, char *argv[])
// {
//     if (argc > 1) 
//     {
//         printf ("Hello, %s!\n", argv[1]);
        
//     }
//     else
//     {
//         printf("Hello, World\n");
//     }

//     return 0;
// }


/*  %d int
    %f double
    %c charecter
    %s string
    %x unsigned integer
    %p pointer 
*/

// #include <stdio.h>
// int main()
// {
//     int a = 99;
//     int b = 10;
//     printf("sum of %d and %d is %d\n", a, b, a+b);
//     return 0;

// }

#include <stdio.h>

// int main()
// {
//     char s[] = "welcome to world!";

//     // printing right aligned string of width 40
//     printf ("%40s", s);
//     return 0;

// }

// int main()
// {
//     char s[] = "welcome to world!";

//     // printing right aligned string of width 40
//     printf ("%40s\n", s);
//     return 0;

// }

// #include <stdio.h>

// int main() {
//  	char s[] = "Welcome to GfG!";
  
//   	// Printing right aligned string of width 40
//     printf("%40s", s);
//     return 0;
// }


// int main()
// {
//     char s[] = "welcome to world!";

//     // printing right aligned string of width 40
//     printf ("%-40s", s);
//     printf ("Aster\n");
//     return 0;

// }



// int main()
// {
//     char s[] = "welcome to world!";

//     // printing right aligned string of width 40
//     printf ("%40s", s);
//     printf ("%50s","Aster\n");
//     return 0;

// }

// int main()
// {
//     int f = 50;
//     int k = 7;

//     // precision for integral data
//     printf (" num1 devided by num2 %10d\n", f + k);
// }


// int main()
// {
//     float f = 2.451678;

//     printf("%.4f\n", f);
//     return 0;
// }

int main()
{
    char s[] = "Welcome to ...world!";
    printf("%.14s\n",s);
    return 0;
}
