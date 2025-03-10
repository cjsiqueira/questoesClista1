#include <stdio.h>

int main () {
int x1, x2;
int y = 6;
int z = 8;
int c = 2;
x1 = ((y * z)-z)/c;
x2 = (z/2)/y++;
printf ("RESULTADO: %i", x1 + x2);

return 0;
}
