#include<stdio.h>
int main(){
	
	int r;
	int c;
	for(r=0;r<5;r++){
		for(c=0;c<5;c++){
			if(r%2==0)
			printf("1");
			else
			printf("0");
			
		}
		printf("\n");
		
	}
}
