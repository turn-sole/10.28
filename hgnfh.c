#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown - s - t 60");
	again:
	printf("��ע����ĵ��Խ���һ�����ڹػ�,���������������ȡ���ػ�\n");
	scanf_s("%s", input,20);
	if (strcmp(input, "������")==0)
	{
		system("shutdown - a");
	}
	else
	{
		goto again;
	}
	return 0;
}