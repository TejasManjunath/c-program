#include<stdio.h>
int main(){
	int n = 0;
	while( n < 10)
	{
		if( n == 5){
			n++;
			continue;
		}
		printf("%d\n", n);
		n++;
	}
	return 0;
}

