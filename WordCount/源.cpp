#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdio.h>
using namespace std;
int main()
{
	FILE *op;
	int fn = 0, wn = 1;
	char c;
	printf("D:\\软件工程\\WordCount\\Debug\\test.txt\n");
	op = fopen("D:\\软件工程\\WordCount\\Debug\\test.txt", "r");
	while (!feof(op))
	{
		c = fgetc(op);
		if (c == ' ' || (c >= 'a'&&c < 'z') || (c >= 'A'&&c < 'Z') || c == '\t' || c == '\n')
			fn++;
		if (c == ' ' || c == '，')
			wn++;
	}
	printf("字符数：%d\n", fn);
	printf("单词数：%d", wn);
	printf("GitHub中编辑");
	return 0;
}
