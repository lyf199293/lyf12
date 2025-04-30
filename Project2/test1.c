
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main1() {
	char word[128];
	int count = 0;
	int length = 0;
	
	printf("请输入:\n");
	while (1)
	{
		if (gets(word)==0) {
			break;
		}
		count++;
		length += strlen(word);
	}
	printf("count =%d,length=%d\n", count, length);
	return 0;
}