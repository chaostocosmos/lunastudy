#include<stdio.h>
#include<unistd.h>

void ft_print_reverse_alphabet(void);
void best(void);

void main(){

        ft_print_reverse_alphabet();
       // best();
}

void ft_print_reverse_alphabet(){
		

	char c = 'z';
	
	while(c>='a'){
		
		write(1,&c,1);
		c--;

	}

	write(1, "\n" ,1);


}


void best(){

        char c = 'a';

        while(c<='z'){

                write(1,&c,1);
                c++;
        }

        write(1, "\n" , 1);

}

