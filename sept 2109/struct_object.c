#include<stdio.h>
struct student;
{ char name[100];
int roll;
};
void print(<struct>student s){
	printf("%d %s",s.roll,s.name);
}
void main(){
	int b;
 scanf("%d",&b);
<struct> student s[b];
	int i;
	for(i=0;i<b;i++){
		scanf("%s%d",s[i].name,&s[i].roll)
	}
	for(i=0;i<b;i++){
		print(s[i])
	}


}