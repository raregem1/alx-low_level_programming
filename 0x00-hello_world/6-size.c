#include<stdio.h>
/**
 *main- Prints the size of various tyes using printf cmd
 *
 *Return: 0
 */
int main(void)
{ int a;
  long int b;
  long long int c;
  char d;
  float e;

printf("Size of a char: %mu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %mu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %mu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %mu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %mu byte(s)\n", (unsigned long)sizeof(e));

return	(0);
}
