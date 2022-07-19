Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@gentomacine 
jbathel
/
sorting_algorithms
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
sorting_algorithms/105-main.c
@jbathel
jbathel Uploading all files
Latest commit 850e36a on Oct 25, 2019
 History
 1 contributor
Executable File  21 lines (19 sloc)  371 Bytes

#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    radix_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
