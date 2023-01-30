#include<stdio.h>
#include<unistd.h>

void ft_putchar(char c);

void main(){
	
	char c = 'a';
	ft_putchar(c);

}

void ft_putchar(char c){
	
	write(1, &c , 1);
	write(1,"\n" , 1);

}


