#include<stdio.h>
#include<string.h>
#include <string>
using namespace std;
void main()
{
	char a1[10],a2[10],a3[10],a4[10];
	char b1[10],b2[10],b3[10],b4[10],b5[10],b6[10],b7[10],b8[10],b9[10],b10[10];
	char x[10],y[10],z[10];
	int begin=0,in=0,in1=0,in2=0,ele;
	int len=strlen(b7);
	int len1=strlen(b10);
	int loading(char i[10]);
	void pri(int t);
	scanf("%s %s %s %s",a1,a2,a3,a4);
	in=loading(a4);
	begin=begin+in;
	for(int asd;asd<1000;asd++)
	{
		scanf("%s %s %s",x,y,z);
		if(strcmp(x,"����")==0)
			break;
		if(strcmp(y,"����")==0)
		{	in1=loading(z);
		begin=begin-in1;}
		if(strcmp(y,"����")==0)
		{	in2=loading(z);
		begin=begin+in2;}
	}
	scanf("%s %s %s %s %s %s %s %s %s %s",b1,b2,b3,b4,b5,b6,b7,b8,b9,b10);
	ele=loading(b4);
	pri(begin);
	printf("\n");
	
	if(begin>ele)
		for (int i1=1;i1<len-1; i1++) 
		{
			printf("%c",b7[i1]);
		}
	else
		
		for (int i2=1;i2<len1-1;i2++) {
		printf("%c",b10[i2]);
	}
	
}
int loading(char i[10])
{
	if(strcmp(i,"һ")==0){return 1;}
	if(strcmp(i,"��")==0){return 2;}
	if(strcmp(i,"��")==0){return 3;}
	if(strcmp(i,"��")==0){return 4;}
	if(strcmp(i,"��")==0){return 5;}
	if(strcmp(i,"��")==0){return 6;}
	if(strcmp(i,"��")==0){return 7;}
	if(strcmp(i,"��")==0){return 8;}
	if(strcmp(i,"��")==0){return 9;}
	if(strcmp(i,"ʮ")==0){return 10;}
	if(strcmp(i,"��")==0){return 0;}

}
void pri(int t)
{
	if(t==0){printf("��");} 
	if(t==1){printf("һ");} 
	if(t==2){printf("��");} 
	if(t==3){printf("��");} 
	if(t==4){printf("��");} 
	if(t==5){printf("��");} 
	if(t==6){printf("��");} 
	if(t==7){printf("��");} 
	if(t==8){printf("��");} 
	if(t==9){printf("��");} 
	if(t==10){printf("ʮ");}  
}