#include <stdio.h>

int main(){
	int a;
	int flag = 0;
	scanf("%d",&a);
	int n = 2;
	while(a%n!=0)
	{
		n++;
		if(n == a){
			flag = 1;
			break;
		}
	}
	printf("%d",flag);

}
