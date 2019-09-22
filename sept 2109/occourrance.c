#include<stdio.h>
int present(int i,int n,int a[n]){
int j;
for(j=0;j<n;j++){
if(i==a[j])
	return 1;
}
return 0;
}
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
int c[n],j=0;
for(i=0;i<n;i++){
if(present(n,a[i],c)==0){
c[j]=a[i];
j++;
}
}
int k[j];
for(i=0;i<j;i++){
k[i]=count(c[i],a,n);
}
for(i=0;i<j;i++){
printf("%d--%d",c[i],k[i]);
}

}