#include<stdio.h>
int count(int i,int n,int a[n]){
	int j,c=0;
	for(j=0;j<n;j++){
		if(i==a[j])
		c++;
	}
return c;
}
void main(){
	int n;
		scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int k;
	scanf("%d",&k);
	printf("%d",count(k,n,a));
}