구조체의 기본 형태
```c
#include <stdio.h>

  struct Coordi {
  int x;
  int y;
  };
                                        
int main(void) {
  struct Coordi p1;
  struct Coordi p2 = {5,9};                        
  struct Coordi p3;
  struct Coordi p4;

  p1.x = 2;
  p1.y = 3;

  printf("p1의 좌표( %d, %d)\n", p1.x, p1.y);
  printf("p2의 좌표( %d, %d)\n", p2.x, p2.y);
}
```
