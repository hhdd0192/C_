#중첩 반복문
*1 2 3 4 5를 5번 반복하게 출력하는 프로그램

'''c
#include <stdio.h>

int main(void) {
  int i = 1;
  do{
    int j = 1;
    do{
      printf("%d", j);
      ++j;
    }while(j<6);
    printf("\n");
    ++i;
  }while(i<6);
}
'''
