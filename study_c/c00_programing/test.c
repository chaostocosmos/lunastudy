#include<stdio.h>
#include<unistd.h>
void ft_print_alphabet(void);

int main(){

	char c = 'h';
   // ft_putchar(c);


	ft_print_alphabet();
	return 0; 

}

void ft_print_alphabet(void){
	char c = 97;
	write(1, &c,1);
	
}

