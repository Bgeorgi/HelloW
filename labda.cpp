#include <unistd.h>
#include "std_lib_facilities.h"


void kiir (int a, int b)
{
system ("clear");

while (b--)
cout <<"\n";
while (a--)
cout <<" ";
cout <<"X\n";
usleep (500000);
}

int
main ()
{
int max = 80;	//maxX
int may = 23;	//maxY
int x = 0;
int y = 0;
int modx = -1;
int mody = -1;
int f = 6;
for (;;)
{
modx = x >= max - 1 ? modx * (-1) : modx;
mody = y >= may - 1 ? mody * (-1) : mody;
modx = x <= 1 ? modx * (-1) : modx;
mody = y <= 1 ? mody * (-1) : mody;
while ((max - (x + modx)) && (may - (y + mody)) && (y + mody)
&& (x + modx))
{
x += modx;
y += mody;
kiir (x, y);
}
}
return 0;
}
