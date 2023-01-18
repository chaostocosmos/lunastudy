#include<stdio.h>
#include<unistd.h>

void print_writer(char n){

	write(1,&n,1);
}


int digits(int n){

	int digit;
	//char check;
	digit = 0; //자리수 초기화 필요ㅑ

	while(n>0){
		
		if(n!=0){
			n = n/10;
			digit++;
		}
		
	}
	//check = digit + '0';
	//print_writer(check);
	return (digit);

}
void convtochar(int n , char num[]){

	int i;
	
	i = 0;
	
	while(i<=n){
		
		num[i] = num[i]+'0';
		print_writer(num[i]);
		i++;
		

	}


}


void ft_putnbr(int nb){
	
	int i;
	int n;

	char num[12];
	
	if(nb== -2147483648){
		 write(1, "-2147483648", 11);
		 return ;
	}
	if(nb==0){
		write(1,"0",1);		
	}
	if(nb<0){
		nb = nb*-1;
		write(1,"-",1);
	}
	


	i = digits(nb)-1;
	n = digits(nb)-1;
	
	while(i>=0){
		
		num[i]= nb%10;
		nb = nb/10;
		i--;
		
		
	}
	
	convtochar(n, num);
	
}

int main(){

	ft_putnbr(-12354);
	write(1,"\n",1);


}

