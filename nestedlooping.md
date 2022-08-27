#중첩 반복문  

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
