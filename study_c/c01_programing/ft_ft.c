#include<stdio.h>
#include<unistd.h>


void ft_ft(int *nbr);

void ft_ft(int *nbr){

	*nbr = 42;

}

void main(){
	
	
	int i;
	i = 0;
	ft_ft(&i);
	printf("%d\n",i);
}

