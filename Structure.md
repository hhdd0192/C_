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

```c
#include <stdio.h>

  struct Address{
  char name[10];
  char phone[20];
  char home[50];
  };
                                        
int main(void) {
  struct Address man1;
  strcpy(man1.name , "a");
  strcpy(man1.phone , "010-3123-4512");
  strcpy(man1.home , "경기도 용인시 처인구");
  
  struct Address man2 = {"b", "010-1234-5678","경기도 용인시 기흥구"};

  struct Address man3;
  scanf("%s %s", man3.name, man3.phone);
  gets(man3.home);

  printf("%s %s %s\n", man1.name, man1.phone,man1.home);
  printf("%s %s %s\n", man2.name, man2.phone,man2.home);
  printf("%s %s %s\n", man3.name, man3.phone,man3.home);

}
```


구조체 안에 구조체 
```c
#include <stdio.h>

  struct Coordi{
  int x;
  int y;
  };
  struct  Circle {
  struct Coordi cen;
  double r;
  };                              
int main(void) {
  struct Circle c1;
  struct Circle c2 = {{4,5}, 12.4};
  struct Circle c3;
  c1.cen.x = 5;
  c1.cen.y = 10;
  c1.r =4.0;
  scanf("%d %d %lf",&c3.cen.x, &c3.cen.y, &c3.r);
  printf("%d %d %.1f\n", c1.cen.x, c1.cen.y, c1.r);
  printf("%d %d %.1f\n", c2.cen.x, c2.cen.y, c2.r);
  printf("%d %d %.1f\n", c3.cen.x, c3.cen.y, c3.r);

  return 0;

}
```
