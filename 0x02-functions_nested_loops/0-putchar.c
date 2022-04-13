#include "main.h"

/**
 * main - Prints _putchar
 * followed by a new line
 * Return: Returns 0 (Success)

int main()
{
    char text[8] = "_putchar";
    int i;

    for (i = 0; i < 8; i++)
    {
        putchar(text[i]);
    }
    putchar('\n');
    return (0);
}
