#include<unistd.h>
#include<stdio.h>

void ft_ultimate_div_mod(int *a , int *b);

void main(){
	
	int a ,b;
	a=10;
	b=3;

	ft_ultimate_div_mod(&a ,&b);
	printf("new %d , %d \n" , a , b);
	

}

void ft_ultimate_div_mod(int *a , int *b){
	
	int temp;
	temp = *a / *b; 
	*b = *a % *b;
	*a = temp;	
	printf("%d , %d \n" , *a , *b);

}

