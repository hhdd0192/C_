```c
#include <stdio.h>

int main(void) {
  FILE *out, *in;
  char data = 'A';
  char val;

  out = fopen("sample.txt", "w");
  if (out == NULL){
    printf("ERROR");
    exit(1);
  }
  fputc(data,out);
  fclose(out);
  in = fopen("sample.txt", "r");
  if(in == NULL){
    printf("ERROR");
    exit(1);
  }
  val = fgetc(in);
  fclose(in);
  printf("%c", val);
  
}  
```



```c
#include <stdio.h>

int main(void) {
  int n,num;
  char *res,str[20];

  printf("문자 입력:");
  n = getchar();
  printf("n = %d\n", n);

  printf("문자열 입력:");
  res = gets(str);
  printf("res = %d\n", res);

  printf("형식 입력 :");
  n = scanf("%d", &num);
  printf("n = %d", n);
}  
```

