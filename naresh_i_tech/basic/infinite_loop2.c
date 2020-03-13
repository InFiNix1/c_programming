//INFINITE LOOP of RANGE for short int
//CTRL+C to terminate
#include<stdio.h>

main()
{
    short i = 1; // -32768 to +32767
    while(1) /*Except 0 all positive or negative integer 
                 values are considered TRUE. ZERO (0) is FALSE*/

    {
        printf("x : %d\n", i);
        ++i;  
    }
}
