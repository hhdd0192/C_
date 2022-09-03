```c
#include <stdio.h>

int main(  ) {
  int n = 0; scanf("%d", &n);

  
  switch(n)
    {   
     case 1:
     case 3:
     case 5:
     case 7:
     case 8:
     case 10:
     case 12:
      {
        printf("31");
        break;
      
    }
     case 4:
     case 6:
     case 9:
     case 11:
      {
        printf("30");
        break;
          
    }
    case 2:
      {
        printf("28");
        }
      }
    return 0;
}
```


```c
#include <stdio.h>

int main(  ) {
  int day; scanf("%d", &day);
  switch(day%7)
    {
      case 0:
        {
          printf("금요일");
          break;
        }
      case 1:
        {
          printf("토요일");
          break;
        }
      case 2:
        {
          printf("일요일");
          break;
        }
      case 3:
        {
          printf("월요일");
          break;
        }
      case 4:
        {
          printf("화요일");
          break;
        }
      case 5:
        {
          printf("수요일");
          break;
        }
      case 6:
        {
          printf("목요일");
          break;
        }

  }
}
```
