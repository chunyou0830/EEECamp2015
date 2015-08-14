#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main ()
{
char command[1000];
strcpy( command, "dir /B /S D1.cpp D2.cpp D3.cpp D4.cpp D5.cpp D6.cpp D7.cpp D8.cpp D9.cpp GD1.cpp GD2.cpp GD3.cpp GD4.cpp GD5.cpp" );
cout << system(command);
system("exit");
return(0);
} 
