#중첩 반복문  


```c
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
```


```c
#include <stdio.h>

int main(void) {
  for(int i = 6; i > 0; --i){
    printf("%d학년 ",i);
      for(int j = 1; j < 8; ++j){
        printf("%d반 ",j);
        }
      printf("\n");
    }
}
```

```c
#include <stdio.h>

int main(void) {
  int n;scanf("%d",&n);
  for(int i = n; i>0;--i){
    for(int j = i; j > 0; --j){
      printf("%d",j);
    }
    printf("\n");
  }
}
```

```c
#include <stdio.h>

int main(void) {
  int i,j,a; scanf("%d", &i);
  for(a = 1;a<=i;a++)
    {
      for(j = 1; j <= a; j++){
        printf("%d ", j);
      }
      printf("\n");
    }
}
```

```c
#include <stdio.h>

int main(void) {
  int n; scanf("%d", &n);
  for(int i = n;i > 0; --i){
    for(int j= i;j<=n; ++j){
      printf("%d", j);
    }
    printf("\n");
  }
}
```
