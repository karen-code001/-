#include<stdio.h>
int main()
{
	char s[10] = "hello";
	printf("%s\n", s);

	printf("%c%c%c", s[0], s[6],s[9]);


	scanf_s("%s", s, 10); //  格式：scanf_s("%s", s, 10);  没有&， 里面s,10中的10用来指定缓冲区大小，scanf_s中要加, 而scanf不要加

	printf("%s\n", s);

	printf("%c%c%c", s[0], s[6],s[9]);

	



	return 0;
}