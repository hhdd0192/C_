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


```c
#include <stdio.h>

int Sum(int a){
  int sum;
  for(int i = 1; i <= a; i++){
    sum += i;
  }
  return sum;
}

int main(void){
  int n,sum; scanf("%d", &n);
  sum = Sum(n);
  printf("%d", sum);
  return 0;
}
```
