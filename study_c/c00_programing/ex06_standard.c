#include <unistd.h>

void print_letter(char a) //print_letter �Լ��� ����ؼ� write�� ��������
{
	write(1, &a, 1);
}

void ft_write(int a, int b) //�Լ�ȭ
{
	print_letter(48 + a / 10); //�ƽ�Ű�ڵ� 48�� 0�̴�. �� a�� ���� 10�� �ʰ��� �� ����, �ƽ�Ű ���� ����
	print_letter(48 + a % 10); //�������� ���Ѵ�.
	print_letter(' ');
	print_letter(48 + b / 10);
	print_letter(48 + b % 10);
	if (a + b != 98 + 99)
	{
		print_letter(',');
		print_letter(' ');
	}
	else{
		write(1,"\n",1);
	}
}

void main(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write(a, b);
			b++;
		}
		a++;
	}
}

