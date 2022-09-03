
매개변수 O   반환값 X
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

매개변수 X   반환값 O
```c
#include <stdio.h>

int Sum(){
  int n,sum; scanf("%d", &n);
  for(int i = 1; i <= n; i++){
    sum += i;
  }
  return sum;
}

int main(void){
  int sum = Sum();
  printf("%d", sum);
  return 0;
}
```


매개변수 O   반환값 O
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


매개변수 X 변환값 X
```c
#include <stdio.h>

int Sum(){
  int n,sum; scanf("%d", &n);
  for(int i = 1; i <= n; i++){
    sum += i;
  }
  printf("%d", sum);
}

int main(void){
  Sum();
  return 0;
}
```



약수 출력 함수
```c
#include <stdio.h>

int Divisor(int n){
  for(int i = 1;i<=n;i++){
    if(n % i == 0)
    {
      printf("%d\n", i);
    }
  }
}

int main(void){
  int n ;scanf("%d", &n);
  int a = Divisor(n);
  printf("%d", a);
}
```
