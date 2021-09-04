#include <msx.h>
#include <conio.h>

void main(void)
{
  msx_set_mode(2);
  msx_color(1,7,7);
  cprintf("Hello World");
}
