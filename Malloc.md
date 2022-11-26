```c
#include <stdio.h>
#include <string.h>

int main(void) {
  int *p;
  p = (int *) malloc(sizeof(int) * 5);

  for(int i = 0; i< 5; i++) {
    p[i] = i;
    printf("%d", p[i]);
    
}
  printf("\n");
  for(int i = 0; i< 5; i++) 
  {
    printf("%d", *p + i);
  }
  free(p);
  }

```

```c
#include <stdio.h>

int main(void) {
  int ar[10] = {1,2,3,4,5,6,7,8,9,10};
  int i;
  char *pr;

  printf("%d %d %d\n", sizeof(ar), sizeof(ar[0]), sizeof(int));
  for(i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
    {
      printf("%d ", ar[i]);
    }
  printf("\n");
  pr = (char *)malloc(sizeof(char) * 26);
   for(int i = 97; i < 122; i++) 
   {
    pr[i] = i;
    printf("%c ", pr[i]);
  }
  free(pr);
}

```


```c
#include <stdio.h>

int main(void) {
  int ar[10] = {1,2,3,4,5,6,7,8,9,10};
  int i;
  int *pr;
  int n = 20;

  printf("%d %d %d\n", sizeof(ar), sizeof(ar[0]), sizeof(int));
  for(i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
    {
      printf("%d ", ar[i]);
    }
  printf("\n");
  pr = (int *)malloc(sizeof(int) * n);
   for(int i = 0; i < n; i++) 
   {
    pr[i] = i +1;
    printf("%d ", pr[i]);
  }
  free(pr);
}

```


```c
#include <stdio.h>

int main(void) {
  float *i = (float *)malloc(sizeof(float));
  char *j = (char *)malloc(sizeof(char));

  *i = 3.141592;
  *j = 'A';

  printf("%f %c\n", *i, *j);
}

```
