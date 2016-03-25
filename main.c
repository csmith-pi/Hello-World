#include "main.h"

int init(void);

void main(void)
{
  int cnt = init();
  while(cnt < 1000)
  {
    cnt++; 
  }
}

int init(void)
{
    return 0;
}
