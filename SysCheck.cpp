#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main ()
{
   char command[50];

   strcpy( command, "dir /B" );
   cout << system(command);

   return(0);
} 
