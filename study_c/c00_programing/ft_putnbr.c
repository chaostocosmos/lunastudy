#include <unistd.h>

void print_letter(char a)// write 함수를 사용을 위한 함수 선언
{
	write(1, &a, 1);
}

int	digits(int a) // 몇 자리수 인지 확인하기 위한 로직
{
	int digit; //자릿수를 담을 변수

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
		num[i] = num[i] + '0'; // askii code에서 0은 45이므로 10미만의 수를 더해 그 수를 char 형으로 표현
		print_letter(num[i]); // 추출한 자릿수 만큼 변환 진행
		i++;
	}
}

void ft_putnbr(int nb)
{
	int		i;
	int		n;
	char	num[12]; // int 형의 최대 자릿수 크기는 12자리
 
	if (nb == -2147483648) //corner Case에 대한 분류1
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0) // corner Case에 대한 분류2
		write(1, "0", 1);
	
	if (nb < 0)	// 음수가 입력되었을 때에 대한 Case 분류3
	{
		nb = nb * -1; // 음수 부호를 변경한 뒤 부호를 붙인다.
		write(1, "-", 1);
	}

	i = digits(nb)-1; //전체 자릿수를 나누게 될 경우 마지막자리에 0이 추가된다.
	n = digits(nb)-1; 
	
	
	while (i >= 0)
	{
		num[i] = nb%10;
		nb = nb/10;
		i--;
	}
	outputs(n, num); //배열을 넘겨줌
	
}

int main()
{
ft_putnbr(9999999);
write(1,"\n",1);
}

