```c
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
void GotoXY(int x,int y);
void delay(int n);
int main() 
{
	int i;
	int s;
	COORD pos = {20,4};


	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	int j = 20;

	for(i = 1;i <= 10; i ++)
	{	
		GotoXY(j , 4);
		printf("%d", i*10);
		delay(1);
		j += 3;
	}
	return 0;
}

void GotoXY(int x, int y)
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void delay(int n)
{
	n = n * 1000;
	clock_t start = clock();
	while (clock() - start < n);
}


```


```c
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
void GotoXY(int x,int y);
void delay(int n);
int main() 
{
	int i;
	int s;
	printf("출력 속도:");
	scanf("%d", &s);
	for(i = 1;i <= 10; i ++)
	{
		GotoXY(40 4i+1; 
		printf("%d", i);
		delay(s);
	}
	return 0;
}

void GotoXY(int x, int y)
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void delay(int n)
{
	n = n * 1000;
	clock_t start = clock();
	while (clock() - start < n);
}

```

```c
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
void GotoXY(int x,int y);
int main() 
{
	int i;
	int n;
	int j;
	do{
		GotoXY(0,0);
		printf("%d", i);
		delay(1000);
		i++
	}while (1);
	return 0;
}

void GotoXY()
{
	COORD pos = (x,y);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void delay(int n)
{
	clock_t start = clock();
	while (clock() - start < n);
}


```c
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
void GotoXY(int x,int y);
int main() 
{
	int i;
	int n;
	int j;
	do{
		GotoXY(0,0);
		printf("%d", i);
		delay(1000);
		i++
	}while (1);
	return 0;
}

void GotoXY()
{
	COORD pos = (x,y);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void delay(int n)
{
	clock_t start = clock();
	while (clock() - start < n);
}

```


```c
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main() 
{
	int x,y;
	COORD pos = {1,0};
	
	pos.X = 0;
	pos.Y = 0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("게임 시작(%d %d)", pos.X,pos.Y); 
	
	do{
		
		
		
		printf("  커서위치를 입력하세요 : ");
		scanf("%d %d", &pos.X, & pos.Y);
		
		
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		printf("?", pos.X,pos.Y); 
		
		
		
	
	}while(pos.X <= 80 && pos.Y <= 60);
	
	return 0;
}
```c
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main() 
{
	int x,y;
	COORD pos = {1,0};
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("게임 시작(%d %d)", pos.X,pos.Y); 
	_getch();
	
	pos.X = 18;
	pos.Y = 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("게임 시작(%d %d)", pos.X,pos.Y); 
	_getch();

	
	pos.X = 20;
	pos.Y = 3;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("게임 시작(%d %d)", pos.X,pos.Y); 
	_getch();

	
	pos.X = 40;
	pos.Y = 13;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("게임 시작(%d %d)", pos.X,pos.Y); 
	_getch();
	
	
	pos.X = 40;
	pos.Y = 20;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("게임 시작(%d %d)", pos.X,pos.Y); 
	_getch();
	
	return 0;
}
```
