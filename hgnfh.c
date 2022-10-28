#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown - s - t 60");
	again:
	printf("请注意你的电脑将在一分钟内关机,如果输入我是猪，就取消关机\n");
	scanf_s("%s", input,20);
	if (strcmp(input, "我是猪")==0)
	{
		system("shutdown - a");
	}
	else
	{
		goto again;
	}
	return 0;
}