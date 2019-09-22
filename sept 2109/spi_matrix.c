#include <stdio.h>

int main()
{
	int n ;
	scanf("%d",&n);
  int a[n][n];i,i1,i2,j,j1.j2;
  i1=n;j1=n;
  i2=0;j2=0;
  i=0;j=0;
  int d=1,br=0;
	  while(1){
  while(i<i1){
	  if(d>(n*n)){
		  br=1;
		  break;}
  a[i][j]=d++;
  i++;
  }
		  if(br==1)
			  break;
  i1=i;
  j++;
    while(j<j1){
		if(d>(n*n)){
		  br=1;
		  break;}
  a[i][j]=d++;
  j++;
  }
		  if(br==1)
			  break;
  j1=j;
  i--;
  while(i>i2){	 
	  if(d>(n*n)){
		  br=1;
		  break;}
  a[i][j]=d++;
  i--;
  }
		  if(br==1)
			  break;
  i2=i;
  j--;
  while(i>i2){
  	  if(d>(n*n)){
		  br=1;
		  break;}
		  a[i][j]=d++;
  j--;
  }
		  if(br==1)
			  break;
  j2=j;
  i++;
   }
   return 0;
}
