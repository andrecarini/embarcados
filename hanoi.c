#include <stdio.h>
 
void move(int n, int from, int via, int to)
{
  if (n > 1) {
    move(n - 1, from, to, via);
    move(n - 1, via, from, to);
  } else {
  }
}
int main()
{
  move(20, 1,2,3);
  return 0;
}
