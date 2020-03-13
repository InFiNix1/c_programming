//This is a Broken Recursive Program, where main is invoked infinitely till Stack is full

#include<stdio.h>

main()
{
    printf("\nStart");
    main();
    printf("\nEnd\n");
}
