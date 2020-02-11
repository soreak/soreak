#include<stdio.h>
#include<string.h>
#include <string>
using namespace std;
int main()
{
	char a1[100],a2[100],a3[100],a4[100],c3[100],c4[100];
	char b1[10],b2[10],b3[10],b4[10],b5[10],b6[10],b7[10],b8[10],b9[10];
	char e2[100],e3[100],name1[100],name2[100],d2[100],d3[100];
	int begin=0,in=0,in1=0,in2=0,ele,i=0,begin1=0;
	
	int loading(char i[100]);
	void pri(int t);
	
	scanf("%s",a2);
	scanf("%s",name1);
	scanf("%s",c3);
	scanf("%s",c4);
	in1=loading(c4);
	begin=begin+in1;
	//装入 
	for(;;){
		scanf("%s",a1);
		//开头为整数的装入 
			if(strcmp(a1,"整数")==0)
			{
							
				
				//第二次装入
					
					scanf("%s",name2);
					scanf("%s",a3);
					scanf("%s",a4);
					in=loading(a4);
					begin1=begin1+in;
			}
			//开头为如果的装入 
			else if(strcmp(a1,"如果")==0)
			{
				scanf("%s",b1);
				//判断第一个已定义的事物 
				if(strcmp(name1,b1)==0){
				
					scanf("%s",b2);
					//判断如果中的事物是否大于条件 
					if(strcmp(b2,"大于")==0)
					{	scanf("%s",b3);
						int num1=loading(b3);
						scanf("%s",b4);
						scanf("%s",b5);
						if(strcmp(b5,"看看")==0)//判断 第二次条件 1 
							{
								scanf("%s",b6);
								scanf("%s",b7);
								scanf("%s",b8);
								scanf("%s",b9);
								int len=strlen(b6);
								int len1=strlen(b9);
								//判断第一个条件是否成立及去除双引号 
								if(begin>num1){	
								for (int i1=1;i1<len-1; i1+=2) 
								{
									printf("%c%c",b6[i1],b6[i1+1]);
								}
								}
								else{	
									for (int i2=1;i2<len1-1;i2+=2) 
										{
		
											printf("%c%c",b9[i2],b9[i2+1]);
										}
									
								}
							}
						//判断 第二次条件  2 
						else if(strcmp(b5,name1)==0)
							{	scanf("%s",b6);
								scanf("%s",b7);
								scanf("%s",b8);
								scanf("%s",b9); 
								int num2=loading(b7);
								if(begin>num1)
								{
								if(strcmp(b6,"减少")==0)
									{begin=begin-num2;}
								if(strcmp(b6,"增加")==0)
									{begin=begin+num2;}
								}
							}
						//判断 第二次条件  3 
						else if(strcmp(b5,name2)==0)
							{	scanf("%s",b6);
								scanf("%s",b7);
								scanf("%s",b8);
								scanf("%s",b9); 
								int num2=loading(b7);
								if(begin>num1)
								{
								if(strcmp(b6,"减少")==0)
									{begin1=begin1-num2;}
								if(strcmp(b6,"增加")==0)
									{begin1=begin1+num2;}
								}
							}
					}
					//判断如果中的事物是否小于条件 
					if(strcmp(b2,"小于")==0)
					{	scanf("%s",b3);
						int num1=loading(b3);
						scanf("%s",b4);
						scanf("%s",b5);
						
						if(strcmp(b5,"看看")==0)
							{
								scanf("%s",b6);
								scanf("%s",b7);
								scanf("%s",b8);
								scanf("%s",b9);
								if(begin<num1){int len=strlen(b6);
								for (int i1=1;i1<len-1; i1+=2) 
								{
									printf("%c%c",b6[i1],b6[i1+1]);
								}
								}
								else{	int len1=strlen(b9);
									for (int i2=1;i2<len1-1;i2+=2) 
										{
		
											printf("%c%c",b9[i2],b9[i2+1]);
										}
									
								}
							}
							
						else if(strcmp(b5,name1)==0)
							{	scanf("%s",b6);
								scanf("%s",b7);
								int num2=loading(b7);
								if(begin<num1)
								{
								if(strcmp(b6,"减少")==0)
									{begin=begin-num2;}
								if(strcmp(b6,"增加")==0)
									{begin=begin+num2;}
								}
							}
							
						else if(strcmp(b5,name2)==0)
							{	scanf("%s",b6);
								scanf("%s",b7);
								int num2=loading(b7);
								if(begin<num1)
								{
								if(strcmp(b6,"减少")==0)
									{begin1=begin1-num2;}
								if(strcmp(b6,"增加")==0)
									{begin1=begin1+num2;}
								}
							}
					}
					
				}
				if(strcmp(name2,b1)==0){
				
					scanf("%s",b2);
					if(strcmp(b2,"大于")==0)
					{	scanf("%s",b3);
						int num1=loading(b3);
						scanf("%s",b4);
						scanf("%s",b5);
						if(strcmp(b5,"看看")==0)
							{
								scanf("%s",b6);
								scanf("%s",b7);
								scanf("%s",b8);
								scanf("%s",b9);
								if(begin1>num1){	int len=strlen(b6);
								for (int i1=1;i1<len-1; i1+=2) 
								{
									printf("%c%c",b6[i1],b6[i1+1]);
								}
								}
								else{	int len1=strlen(b9);
									for (int i2=1;i2<len1-1;i2+=2) 
										{
		
											printf("%c%c",b9[i2],b9[i2+1]);
										}
									
								}
							}
						else if(strcmp(b5,name1)==0)
							{	scanf("%s",b6);
								scanf("%s",b7);
								int num2=loading(b7);
								if(begin1>num1)
								{
								if(strcmp(b6,"减少")==0)
									{begin=begin-num2;}
								if(strcmp(b6,"增加")==0)
									{begin=begin+num2;}
								}
							}
						else if(strcmp(b5,name2)==0)
							{	scanf("%s",b6);
								scanf("%s",b7);
								int num2=loading(b7);
								if(begin1>num1)
								{
								if(strcmp(b6,"减少")==0)
									{begin1=begin1-num2;}
								if(strcmp(b6,"增加")==0)
									{begin1=begin1+num2;}
								}
							}
					}
					if(strcmp(b2,"小于")==0)
					{	scanf("%s",b3);
						int num1=loading(b3);
						scanf("%s",b4);
						scanf("%s",b5);
						if(strcmp(b5,"看看")==0)
							{
								scanf("%s",b6);
								scanf("%s",b7);
								scanf("%s",b8);
								scanf("%s",b9);
								
								
								if(begin1<num1){int len=strlen(b6);
								
								for (int i1=1;i1<len-1; i1+=2) 
								{
									printf("%c%c",b6[i1],b6[i1+1]);
								}
								}
								else{int len1=strlen(b9);	
									for (int i2=1;i2<len1-1;i2+=2) 
										{
		
											printf("%c%c",b9[i2],b9[i2+1]);
										}
									
								}
							}
						else if(strcmp(b5,name1)==0)
							{	scanf("%s",b6);
								scanf("%s",b7);
								int num2=loading(b7);
								if(begin1<num1)
								{
								if(strcmp(b6,"减少")==0)
									{begin=begin-num2;}
								if(strcmp(b6,"增加")==0)
									{begin=begin+num2;}
								}
							}
						else if(strcmp(b5,name2)==0)
							{	scanf("%s",b6);
								scanf("%s",b7);
								int num2=loading(b7);
								if(begin1<num1)
								{
								if(strcmp(b6,"减少")==0)
									{begin1=begin1-num2;}
								if(strcmp(b6,"增加")==0)
									{begin1=begin1+num2;}
								}
							}
					}
					}
			}	
			//开头为已定义事物1的判断 
			else if(strcmp(a1,name1)==0)
			{	
				scanf("%s",d2);
				scanf("%s",d3);
				int num3=loading(d3);
				if(strcmp(d2,"增加")==0)
				{begin=begin+num3;}	
				if(strcmp(d2,"减少")==0)
				{begin=begin-num3;}	
			}					
			//开头为已定义事物2的判断 
			else if(strcmp(a1,name2)==0)
			{	
				scanf("%s",d2);
				scanf("%s",d3);
				int num4=loading(d3);
				if(strcmp(d2,"增加")==0)
				{begin1=begin1+num4;}	
				if(strcmp(d2,"减少")==0)
				{begin1=begin1-num4;}	
			}
			//开头为看看的装入 
			else if(strcmp(a1,"看看")==0)
			{
				scanf("%s",e2);
				if(strcmp(e2,name1)==0)
					{pri(begin);
					printf("\n");} 
				else if(strcmp(e2,name2)==0)
					{pri(begin1);
					printf("\n");}
				else
				{	printf("没说你看个锤子");
					printf("\n");}
			}
}
	
}

//函数部分 
int loading(char i[100])//中文->数字 
{
	if(strcmp(i,"一")==0){return 1;}
	if(strcmp(i,"二")==0){return 2;}
	if(strcmp(i,"三")==0){return 3;}
	if(strcmp(i,"四")==0){return 4;}
	if(strcmp(i,"五")==0){return 5;}
	if(strcmp(i,"六")==0){return 6;}
	if(strcmp(i,"七")==0){return 7;}
	if(strcmp(i,"八")==0){return 8;}
	if(strcmp(i,"九")==0){return 9;}
	if(strcmp(i,"十")==0){return 10;}
	if(strcmp(i,"零")==0){return 0;}

}
void pri(int t)//数字->中文
{
	if(t==0){printf("零");} 
	if(t==1){printf("一");} 
	if(t==2){printf("二");} 
	if(t==3){printf("三");} 
	if(t==4){printf("四");} 
	if(t==5){printf("五");} 
	if(t==6){printf("六");} 
	if(t==7){printf("七");} 
	if(t==8){printf("八");} 
	if(t==9){printf("九");} 
	if(t==10){printf("十");}  
}
