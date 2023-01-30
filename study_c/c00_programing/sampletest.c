#include<stdio.h>
#include<unistd.h>

void p_write(char a){
	
	write(1,&a,1);

}

void ft_test(int n){
	
	int i;
	int j;
	int k;
	char t;
	char a;
	char b;
	a = ',';
	b = ' ';

	j = 0; 
	i = 0;

	for(k=1;k<=n;k++){
		
		k *= 10;

	} //k의 수를 확보
	
	for(i=1;i<k;i++){
		
		
	
		
	}

	

	for(i=1;i<10;i++){
		
		t = i + '0';
		p_write(j);
		p_write(t);
		p_write(a);
		p_write(b);
		
		if(i==9){
			
			j++;
			i=j+1;

		}

	}

}


void main(){
	
	ft_test(2);

}
