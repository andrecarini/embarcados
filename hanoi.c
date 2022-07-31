// Extraído de http://www.rosettacode.org/wiki/Towers_of_Hanoi#C

#include <stdio.h>

void move(int n, int from, int via, int to) {
  if (n > 1) {
    move(n - 1, from, to, via);
    move(n - 1, via, from, to);
  }
}

int main() {
  move(20, 1,2,3);
  return 0;
}
