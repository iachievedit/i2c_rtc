#include <stdio.h>
#include <time.h>

void pause(void) {
  time_t timeout = time(NULL) + 1;
  while (timeout > time(NULL))
    ;
}

int main(void) {
  int i = 0;
  while (1) {
    i++;
    printf("Hello, world!  The current time is %d.\n", i);
    pause();
  }
}