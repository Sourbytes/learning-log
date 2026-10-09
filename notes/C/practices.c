#include <stdio.h>
int main(int argc, char *argv[]) 
// {
//     printf ("helloe world\n");
//     return 0;
// }
{
    if (argc > 1) {
        printf ("Hello, %s!\n", argv[1]);
    }
    else {
        printf ("hello World\n"); 
    }
    return 0;

}