#include<stdio.h>
#include<unistd.h>

void p_write(char a){
	
	write(1,&a,1);

}

void ft_Write(int a , int b){
	
	p_write(48 + a / 10);
	p_write(48 + a % 10);
	p_write(' ');
	p_write(48 + b / 10);
	p_write(48 + b % 10);

	if(a+b != 98 + 99){
		
		p_write(',');
		p_write(' ');

	}


}



void ft_print_combn(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_Write(a, b);
			b++;
		}
		a++;
	}
}


//void archar_print(int nc , char com[]){
//	
//	int k;
//	k = 0;
//	char b;
//	char c;
//	b = ',';
//	c = ' ';
//	while(k<nc){
//		
//		p_write(com[k]);
//		k++;
//		if(k==nc){
//			p_write(b);
//			p_write(c);
//		}
//
//	}
//
//}
//
//void ft_print_combn(int n){
//
//	int i;
//	int k;
//	int j;
//
//	
//
//	char fpc[n];
//	//fpc[n] = ',';
//	//fpc[n+1] = ' ';
//
//	j = 0;
//	while(j<=n-1){
//		if(j==0){
//			fpc[j] = '0';
//			j++;
//		}
//		else{
//			fpc[j] = j +'0';
//			j++;
//		}
//	}
//
//	k = 1;
//	i = n-1;
//
//	while(i<=10){
//		fpc[n-k] = i+'0' ;
//		archar_print(n,fpc);
//		
//		if(i==9){
//			i = fpc[n-k+1];
//			fpc[n-k+1]++;
//			if(fpc[n-k+1]==9){
//				k++;
//		
//					
//			
//			}
//
//		}
//
//		i++;
//
//	}
//}


//
//void ft_print_combn(int n){
//	
//	int i;
//	int j;
//	int digit;
//	
//	j = 0;
//	
//	char comb[n+2];
//	
//	comb[n] = ',';
//	comb[n+1] = ' ';
//	//지정자릿수 만큼 수를 증가시켜놓음.ex)5, 01234	
//	while(j<=n-1){
//		
//		if(j==0){
//			comb[j] = '0';
//			//write(1,&comb[j],1);
//			j++;
//		}
//
//		comb[j] = j+'0';
//		//write(1,&comb[j],1);
//		j++;
//	}
//
//	//write(1,"\n",1);
//		
//	i=n-1;
//	digit = j-1;
//
//	while(j>=2){
//		
//		while(i<=9){
//			archar_print(n+2,comb);
//			comb[digit] = comb[digit] + 1;
//			//archar_print(n+2,comb);
//			//write(1, &comb[j-1],1);
//			i++;
//			if(i==10){
//				comb[digit-1] += 1;
//				i = comb[digit-1]+1;
//				//증감에 대한 함수화로 접근하자~
//			}
//			
//			
//		}
//		
//		
//		j--;
//		//if(comb[j-2]>=comb[j-1]){
//		//	while(i<=9){
//		//		comb[j-1] = comb[j-1] + i;
//		//		write(1,&comb[j-1],1);
//		//		i++;
//		//	}
//		//}
//		
//	}
//	// j = 2 
//
//	
//
//}
//
void main(){
	
	ft_print_combn();
	write(1,"\n",1);

}	





