#include "main.h"

int init(void);
int getLimit(void);

void main(void)
{
  int cnt = init();
  while(cnt < getLimit())
  {
    cnt++; 
  }
}

int init(void)
{
    return 0;
}

int getLimit(void)
{
    return 1000;
}
