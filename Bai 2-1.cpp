#include <stdio.h>
int main()
{	int ktra=1;
	long n;
	scanf("%ld",&n);
	int tam;
	while (n>0)
	{	tam=n%10;
		if (!((tam==0)||(tam==6)||(tam==8))) 
		{	ktra=0;
			break;
		}
		n=n/10;
	}
	printf("%d",ktra);
}
