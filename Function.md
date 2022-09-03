```c
#include <stdio.h>

int Sum(int a){
  int sum;
  for(int i = 1; i <= a; i++){
    sum += i;
  }
  printf("%d", sum);
}

int main(void){
  int n; scanf("%d", &n);
  Sum(n);
  
  return 0;
}
```
