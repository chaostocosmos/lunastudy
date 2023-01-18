#include <unistd.h>

void print_letter(char a) //print_letter 함수를 사용해서 write를 구현하자
{
	write(1, &a, 1);
}

void ft_write(int a, int b) //함수화
{
	print_letter(48 + a / 10); //아스키코드 48은 0이다. 즉 a의 값이 10을 초과할 때 마다, 아스키 값이 변함
	print_letter(48 + a % 10); //나머지를 구한다.
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

