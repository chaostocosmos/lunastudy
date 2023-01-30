#include <unistd.h>

void print_letter(char a)// write �Լ��� ����� ���� �Լ� ����
{
	write(1, &a, 1);
}

int	digits(int a) // �� �ڸ��� ���� Ȯ���ϱ� ���� ����
{
	int digit; //�ڸ����� ���� ����

	digit = 0;
	while (a > 0)
	{
		if (a != 0)
		{
			a = a / 10;
			digit++;
		}
	}
	return (digit);
}

void outputs(int n, char num[])
{
	int i;

	i = 0;

	while (i <= n)
	{
		num[i] = num[i] + '0'; // askii code���� 0�� 45�̹Ƿ� 10�̸��� ���� ���� �� ���� char ������ ǥ��
		print_letter(num[i]); // ������ �ڸ��� ��ŭ ��ȯ ����
		i++;
	}
}

void ft_putnbr(int nb)
{
	int		i;
	int		n;
	char	num[12]; // int ���� �ִ� �ڸ��� ũ��� 12�ڸ�
 
	if (nb == -2147483648) //corner Case�� ���� �з�1
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0) // corner Case�� ���� �з�2
		write(1, "0", 1);
	
	if (nb < 0)	// ������ �ԷµǾ��� ���� ���� Case �з�3
	{
		nb = nb * -1; // ���� ��ȣ�� ������ �� ��ȣ�� ���δ�.
		write(1, "-", 1);
	}

	i = digits(nb)-1; //��ü �ڸ����� ������ �� ��� �������ڸ��� 0�� �߰��ȴ�.
	n = digits(nb)-1; 
	
	
	while (i >= 0)
	{
		num[i] = nb%10;
		nb = nb/10;
		i--;
	}
	outputs(n, num); //�迭�� �Ѱ���
	
}

int main()
{
ft_putnbr(9999999);
write(1,"\n",1);
}

