#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	int ch = 0;
//	printf("请输入密码：");/*123456*/
//	gets(password);
//	/*scanf_s("%s", password,20);*/
//	/*while (getchar() != '\n')
//	{
//		;
//	}*/
//	printf("请确认密码（T/F):");
//	ch = getchar();
//	if (ch == 'T')
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//	return 0;
//}
#include<stdlib.h>
#include<windows.h>
void game()
{
	int num = 0;
	int ret = rand()%100+1;
	while (1)
	{
		printf("请猜数字\n");
		scanf_s("%d", &num);
		if (num < ret)
			printf("猜小了\n");
		else if (num > ret)
			printf("猜大了\n");
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
void menu()
{
	printf("******************************************\n");
	printf("**************    1.play    **************\n");
	printf("**************    2,exit    **************\n");
	printf("******************************************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}