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
	//װ�� 
	for(;;){
		scanf("%s",a1);
		//��ͷΪ������װ�� 
			if(strcmp(a1,"����")==0)
			{
							
				
				//�ڶ���װ��
					
					scanf("%s",name2);
					scanf("%s",a3);
					scanf("%s",a4);
					in=loading(a4);
					begin1=begin1+in;
			}
			//��ͷΪ�����װ�� 
			else if(strcmp(a1,"���")==0)
			{
				scanf("%s",b1);
				//�жϵ�һ���Ѷ�������� 
				if(strcmp(name1,b1)==0){
				
					scanf("%s",b2);
					//�ж�����е������Ƿ�������� 
					if(strcmp(b2,"����")==0)
					{	scanf("%s",b3);
						int num1=loading(b3);
						scanf("%s",b4);
						scanf("%s",b5);
						if(strcmp(b5,"����")==0)//�ж� �ڶ������� 1 
							{
								scanf("%s",b6);
								scanf("%s",b7);
								scanf("%s",b8);
								scanf("%s",b9);
								int len=strlen(b6);
								int len1=strlen(b9);
								//�жϵ�һ�������Ƿ������ȥ��˫���� 
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
						//�ж� �ڶ�������  2 
						else if(strcmp(b5,name1)==0)
							{	scanf("%s",b6);
								scanf("%s",b7);
								scanf("%s",b8);
								scanf("%s",b9); 
								int num2=loading(b7);
								if(begin>num1)
								{
								if(strcmp(b6,"����")==0)
									{begin=begin-num2;}
								if(strcmp(b6,"����")==0)
									{begin=begin+num2;}
								}
							}
						//�ж� �ڶ�������  3 
						else if(strcmp(b5,name2)==0)
							{	scanf("%s",b6);
								scanf("%s",b7);
								scanf("%s",b8);
								scanf("%s",b9); 
								int num2=loading(b7);
								if(begin>num1)
								{
								if(strcmp(b6,"����")==0)
									{begin1=begin1-num2;}
								if(strcmp(b6,"����")==0)
									{begin1=begin1+num2;}
								}
							}
					}
					//�ж�����е������Ƿ�С������ 
					if(strcmp(b2,"С��")==0)
					{	scanf("%s",b3);
						int num1=loading(b3);
						scanf("%s",b4);
						scanf("%s",b5);
						
						if(strcmp(b5,"����")==0)
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
								if(strcmp(b6,"����")==0)
									{begin=begin-num2;}
								if(strcmp(b6,"����")==0)
									{begin=begin+num2;}
								}
							}
							
						else if(strcmp(b5,name2)==0)
							{	scanf("%s",b6);
								scanf("%s",b7);
								int num2=loading(b7);
								if(begin<num1)
								{
								if(strcmp(b6,"����")==0)
									{begin1=begin1-num2;}
								if(strcmp(b6,"����")==0)
									{begin1=begin1+num2;}
								}
							}
					}
					
				}
				if(strcmp(name2,b1)==0){
				
					scanf("%s",b2);
					if(strcmp(b2,"����")==0)
					{	scanf("%s",b3);
						int num1=loading(b3);
						scanf("%s",b4);
						scanf("%s",b5);
						if(strcmp(b5,"����")==0)
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
								if(strcmp(b6,"����")==0)
									{begin=begin-num2;}
								if(strcmp(b6,"����")==0)
									{begin=begin+num2;}
								}
							}
						else if(strcmp(b5,name2)==0)
							{	scanf("%s",b6);
								scanf("%s",b7);
								int num2=loading(b7);
								if(begin1>num1)
								{
								if(strcmp(b6,"����")==0)
									{begin1=begin1-num2;}
								if(strcmp(b6,"����")==0)
									{begin1=begin1+num2;}
								}
							}
					}
					if(strcmp(b2,"С��")==0)
					{	scanf("%s",b3);
						int num1=loading(b3);
						scanf("%s",b4);
						scanf("%s",b5);
						if(strcmp(b5,"����")==0)
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
								if(strcmp(b6,"����")==0)
									{begin=begin-num2;}
								if(strcmp(b6,"����")==0)
									{begin=begin+num2;}
								}
							}
						else if(strcmp(b5,name2)==0)
							{	scanf("%s",b6);
								scanf("%s",b7);
								int num2=loading(b7);
								if(begin1<num1)
								{
								if(strcmp(b6,"����")==0)
									{begin1=begin1-num2;}
								if(strcmp(b6,"����")==0)
									{begin1=begin1+num2;}
								}
							}
					}
					}
			}	
			//��ͷΪ�Ѷ�������1���ж� 
			else if(strcmp(a1,name1)==0)
			{	
				scanf("%s",d2);
				scanf("%s",d3);
				int num3=loading(d3);
				if(strcmp(d2,"����")==0)
				{begin=begin+num3;}	
				if(strcmp(d2,"����")==0)
				{begin=begin-num3;}	
			}					
			//��ͷΪ�Ѷ�������2���ж� 
			else if(strcmp(a1,name2)==0)
			{	
				scanf("%s",d2);
				scanf("%s",d3);
				int num4=loading(d3);
				if(strcmp(d2,"����")==0)
				{begin1=begin1+num4;}	
				if(strcmp(d2,"����")==0)
				{begin1=begin1-num4;}	
			}
			//��ͷΪ������װ�� 
			else if(strcmp(a1,"����")==0)
			{
				scanf("%s",e2);
				if(strcmp(e2,name1)==0)
					{pri(begin);
					printf("\n");} 
				else if(strcmp(e2,name2)==0)
					{pri(begin1);
					printf("\n");}
				else
				{	printf("û˵�㿴������");
					printf("\n");}
			}
}
	
}

//�������� 
int loading(char i[100])//����->���� 
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
void pri(int t)//����->����
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
