#include<stdio.h>
int present(int n,int m,char c[n],char s[m]){
int i,j,p,count;
for(i=0;i<n-m;i++){
	count =0;
	for(k=i,j=0;j<m;j++,k++){
		if(c[k]==s[j]){
			count++;
			}
	}
	if(count==m-1)
		return 1;
}
return 0;

}
void main(){
	char c[100],s[100];
	scanf("%s%s",c,s);
	int n,m,i;
	scanf("%d%d",&n,&m);
if(present(n,m,c,s)){
printf("true");}
else
	printf("false");




}