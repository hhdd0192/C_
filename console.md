```c
#include <stdio.h>
#include <conio.h>

int main()
{
	int ch1,ch2;
	
	ch1 = getch();
	ch2 = getch();
		
	printf("%d %d\n", ch1, ch2);
	printf("%x %x\n", ch1, ch2);
	
	return 0;
}
```



```c
#include <stdio.h>
#include <conio.h>

int main()
{
	unsigned char ch;
	
	do
	{
		ch = getch();
		printf("%d %x : %c\n",ch,ch,ch);
	}while(ch != 13);
	return 0;
}
```



방향키대로 움직이는 @(복사O)
```c
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define x_end 79
#define y_end 24
void GotoXY(int x,int y);
void Move_LeftRight_Key(char chr,int *x,int *y);
int main()
{
	char key;
	int x= 0, y = 0;
	
	do
	{
		GotoXY(x,y);
		printf("@");
		key = getch();
		key = getch();
		Move_LeftRight_Key(key, &x,&y);
	}while (key != 27);		
}
void GotoXY(int x, int y)
{
	COORD Pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	
}
void Move_LeftRight_Key(char key, int *x1,int *y1)
{
	switch (key)
	{
		case 75:
			*x1 = *x1 - 1;
			if(*x1<1) *x1 = x_end;
			break;
		case 72 :
			*y1 = *y1 - 1;
			if(*y1 < 1) *y1 = y_end;
			break;
		case 77:
		*x1 = *x1 + 1;
		if(*x1 > x_end) *x1 = 1;
			break;
		case 80:
			*y1 = *y1 + 1;
			if(*y1 > y_end) *y1 = 1;
			break;
	}
}
```


방향키대로 움직이는 @(복사X)

```c
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define x_end 79
#define y_end 24
void GotoXY(int x,int y);
void Move_LeftRight_Key(char chr,int *x,int *y);
int main()
{
	char key;
	int x= 0, y = 0;
	int px = 0, py = 0;
	do
	{	
		GotoXY(px,py);
		printf(" ");
		GotoXY(x,y);
		printf("@");
		key = getch();
		key = getch();
		px = x; py = y;
		Move_LeftRight_Key(key, &x,&y);
	}while (key != 27);		
}
void GotoXY(int x, int y)
{
	COORD Pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	
}
void Move_LeftRight_Key(char key, int *x1,int *y1)
{
	switch (key)
	{
		case 75:
			*x1 = *x1 - 1;
			if(*x1<1) *x1 = x_end;
			break;
		case 72 :
			*y1 = *y1 - 1;
			if(*y1 < 1) *y1 = y_end;
			break;
		case 77:
		*x1 = *x1 + 1;
		if(*x1 > x_end) *x1 = 1;
			break;
		case 80:
			*y1 = *y1 + 1;
			if(*y1 > y_end) *y1 = 1;
			break;
	}
}
```


```c
#include <stdio.h>
#include <windows.h>

void GotoXY(int x,int y);
int main()
{	
	int x,y = 5;
	
	for(x=1;x<80;x+=2)
	{
		system("cls");
		GotoXY(x,y);
		printf("@");
		Sleep(100);
	}
	printf("\n");
}

void GotoXY(int x, int y)
{
	COORD Pos = {x-1,y-1};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	
}

```
