구조체의 기본 형태
```c
#include <stdio.h>

  struct Coordi {   // Coordi 구조체 생성
  int x;
  int y;
  };
                                        
int main(void) {
  struct Coordi p1;     // Coordi형의 변수 생성
  struct Coordi p2 = {5,9};                        
  struct Coordi p3;
  struct Coordi p4;

  p1.x = 2;   // 맴버 x에 값 입력
  p1.y = 3;

  printf("p1의 좌표( %d, %d)\n", p1.x, p1.y);
  printf("p2의 좌표( %d, %d)\n", p2.x, p2.y);
}
```


맴버의 값을 입력 받아 출력
```c
#include <stdio.h>

  struct Person {
  char name[10];
  int age;
  double height;
  };
                                        
int main(void) {
  struct Person m1;
  struct Person m2 = {"허난설현" ,13,159.9};
  struct Person m3;

  scanf("%s %d %lf", m3.name, &m3.age, &m3.height);
  
  
  strcpy(m1.name, "허균");
  m1.age = 10;
  m1.height = 168.34;

  printf("%s %d %.2f\n",m1.name, m1.age,m1.height);
  printf("%s %d %.1f\n",m2.name, m2.age,m2.height);
  printf("%s %d %.1f\n",m3.name, m3.age,m3.height);


  
}
```
