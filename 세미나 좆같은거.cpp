#include <stdio.h>
int main()
{
	int a, b, n;	
	int result;		//����� ��������

	scanf("%d %d %d", &a, &b, &n);	//a,b,n �Է¹ޱ�

	for (int i = 0; i <n-1; i++)		//n��° �ڸ����� ���ϱ� ���ؼ� n���� �ݺ�
	{
		a = a%b;		//a��b�� �������� �������� a�� ����
		a = a*10;	//a�� 10�� ����
		result = a / b;	//�����
	}

	printf("%d", result);

	return 0;
}
