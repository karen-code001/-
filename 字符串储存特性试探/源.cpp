#include<stdio.h>
int main()
{
	char s[10] = "hello";
	printf("%s\n", s);

	printf("%c%c%c", s[0], s[6],s[9]);


	scanf_s("%s", s, 10); //  ��ʽ��scanf_s("%s", s, 10);  û��&�� ����s,10�е�10����ָ����������С��scanf_s��Ҫ��, ��scanf��Ҫ��

	printf("%s\n", s);

	printf("%c%c%c", s[0], s[6],s[9]);

	



	return 0;
}