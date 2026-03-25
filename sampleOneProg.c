#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char *data1;

data1 = malloc (100);
printf ("Please input username: ");
scanf ("%s", data1);
printf ("You entered:[%s]\n", data1); 
free (data1);
return 0;
}
