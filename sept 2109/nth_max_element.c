#include<stdio.h>
int[] maxrem(int n,int a[n]){
int i,max=a[0],l;
for(i=0;i<n;i++){
	if(max<a[i]){
		max=a[i];
		l=i;}
}
a[l]=-1;
return a;
}
int max(int n,int a[n]){
int i,max=a[0];
for(i=0;i<n;i++){
	if(max<a[i])
		max=a[i];
}
return max;
}
void main(){
	int n;
		scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
for(i=0;i<n;i++){
a = maxrem(n,a);
}
printf("%d",max(n,a));
}