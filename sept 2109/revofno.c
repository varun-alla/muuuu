#include<stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	int rev = 0 ;
	while(n>0){
		rev = rev*10+n/10;
		n=n/10;
	}
printf("%d",n);
}