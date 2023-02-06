#include<unistd.h>
#include<stdio.h>


void ft_div_mod(int a, int b, int *div , int *mod);

void main(){

	int div , mod;
	
	ft_div_mod(10 ,3 , &div , &mod);

}


void ft_div_mod(int a, int b, int *div , int *mod){
	
	*div = a / b;
	*mod = a % b;
	printf("div %d \n",*div);
	printf("mod %d \n",*mod);


}
