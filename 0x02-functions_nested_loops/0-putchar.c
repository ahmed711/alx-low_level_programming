#include "main.h"

/**
 * main - Entry point
 * Description: 'Print a sentance to screen'
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i, j;

    char word[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
    j = sizeof(word);
    for(i = 0; i < j; i++)
     {
         _putchar(word[i]);
     }
     _putchar('\n');
     
     return 0;
}
