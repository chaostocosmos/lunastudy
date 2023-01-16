#include<stdio.h>
#include<unistd.h>

void ft_print_alphabet(void);
void best(void);

void main(){

	ft_print_alphabet();	
	best();
}

void ft_print_alphabet(){
	
	char c ='a';
	int i = 0;
	
	for(i=0; i<26; i++){
		
		write(1, &c , 1);
		c++;
	}
	
	write(1, "\n" , 1);

}


void best(){
	
	char c = 'a';

	while(c<='z'){
	
		write(1,&c,1);
		c++;
	}

	write(1, "\n" , 1);

}
