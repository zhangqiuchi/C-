#include <stdio.h>

int main()
{
	int a,b,c;
	printf("������������:");
	scanf("%d%d%d", &a, &b, &c);

	if (a > 0 && b > 0 && c > 0 && a == b && b == c && a + b > c)
		printf("�ȱ�������\n");
	else if (a > 0 && b > 0 && c > 0 && a != b && a != c && a + b > c)
		printf("���ȱ�������\n");
	else
		printf("���벻�Ϸ�");
	return 0;
}
