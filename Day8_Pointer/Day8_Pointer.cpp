// Day8_Pointer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int replaceChar(char* pChar1,unsigned int uint,unsigned int num,char c){
	//long long a=0;
	int i=0;
	for(;pChar1[i]!=0;i++){

	}
	
	if(uint<=i){
		//char *pChar2=(char *)(&a);
		char *pChar2=new char[i];
		for(int j=0;j<i;j++){
			if(uint+num-1<=i){
				*(pChar2+j)=*(pChar1+j);
				if(j>=uint-1&&j<uint+num-1)
					*(pChar2+j)=c;			

			}
			else{					
				return -2;
			}
			//*(pChar2+j)=*(pChar1+j);
			//if(j>=uint-1&&j<uint+num-1){
			//	//*(pChar2+j)=*(pChar1+j);
			//	//if(j==uint-1)
			//	if(uint+num-1<=i)
			//		*(pChar2+j)=c;
			//	//printf("%c",*(pChar2+j));
			//	
			//	//pChar1[j]=c;
			//	else{
			//		
			//		return -2;
			//	}
			//
			//}
			printf("%c",*(pChar2+j));
				
			
			
		}
		printf("\n");
		//printf("%s\n",pChar2);
		delete pChar2;
		return 1;
		//return pChar2;
		/**(pChar2+ushort-1)=*(pChar1+ushort-1);
		for(int j>ushort-1;j<)*/
	}
	else{
		//printf("输入的下标不在范围内");
		return -1;
		//return 0;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	//char *pChar="hello";
	//char a[]="hello";	
	//char b=*(pChar+2);
	//char c=*(a+2);
	//char c[]="HELLO";
	/*int a[]={0,1,2,3};
	int *pInt=a;
	int b[]={12,13,14,15};
	for(int i=0;i<4;i++){
		*(pInt+i)=*(b+i);
		printf("%d\n",*(pInt+i));
	}*/
	
	//*pChar='a';	
	//printf("%c\n%c\n",b,c);
	
	//char *pChar1="hello";
	//long long a=0;
	//
	//char *pChar2=(char *)(&a);
	//*pChar2='k';
	//
	//for(int i=1;i<5;i++){
	//	*(pChar2+i)=*(pChar1+i);
	//	
	//}
	//

	//printf("%s\n",pChar2);

	//return 0;
	int errCode=0;
	bool loopCondition=true;
	while(loopCondition){
		while(errCode<=0){
			int len=0;
			while(len<=0){
				printf("请输入字符串的长度\n");		
				scanf(" %d",&len);
				if(len<=0)
					printf("输入的长度错误！\n");
			}	
			char *pChar=new char[len];		
			unsigned int uint=0;
			unsigned int num=0;
	
			char c=0;
			printf("请输入一个字符串，一个替换位置，需要替换的字符个数和一个替换字符\n以空格分隔\n");
	
			scanf("%s %d %d %c",pChar, &uint,&num,&c);
			
			int i=0;
			for(;pChar[i]!=0;i++){

			}
			if(len<=i){
				printf("输入的字符串长度太小\n");
				loopCondition=true;

			}

			//printf("%s",&pChar);
			//char *pChar2=NULL;
			else{
				errCode=replaceChar(pChar,uint,num,c);
				delete pChar;
				if(errCode==-1)
					printf("输入的替换位置错误\n错误代码：%d\n",errCode);
				if(errCode==-2)
					printf("输入的替换字符个数错误\n错误代码：%d\n",errCode);
				loopCondition=false;
			}			
		
		}
	
	}
	
	
	//printf("%s",replaceChar(pChar,uint,c));

}

