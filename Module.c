
MenuModule 헤더파일
```c
int MainMenu()
{
  int n;
  printf("\t### 사칙연산 ###\n");
  printf("\t1. 정수형 사칙연산\n");
  printf("\t2. 실수형 사칙연산\n");
  printf("\t3. 종료\n");
  printf("메뉴를 선택하세요 : ");
  scanf("%d", &n);

  return n;
}

int IntMenu()
{
  int im;
  printf("\t@@ 정수형 계산기 @@\n");
  printf("\t1. 덧셈\n\t2.뺄셈\n\t3.곱셈\n\t4.나눗셈\n\t5.뒤로\n");
  printf("메뉴를 선택해주세요 : ");
  scanf("%d", &im);
}

int DouMenu()
{
  double im;
  printf("\t@@ 실수형 계산기 @@ \n");
  printf("\t1. 덧셈\n\t2.뺄셈\n\t3.곱셈\n\t4.나눗셈\n\t5.뒤로\n");
  printf("메뉴를 선택하세요 : ");
  scanf("%lf", &im);

  return im;
}
```


메뉴 1,2 선택하는 메인함수
```c
#include <stdio.h>
#include "MenuModule.h"
#define ERROR "입력오류\n"
int main()
{
  int menu = 0;
  int subm = 0;

  while (menu != 3)
    {
      menu = MainMenu();
      switch(menu)
        {
        case 1:
          subm = IntMenu();
          printf("%d", subm);
          break;
        case 2:
          subm = DouMenu();
          printf("%d", subm);
        }
    }
}
```
