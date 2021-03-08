#include <stdio.h>
#include "test.h"
#include <string.h>
#include <stdlib.h>
// 아스키코드 만들기 (내가 한 방식) 
// DEC 7,8,9,10,13 는 예외처리 --> " " 
/*
int main()
{
	int i,j,k;
	int n=k+j;

	for (int i=0;i<4;i++)
	{
		printf("10	|HEX	|문자	|");
	}
	printf("\n");
	
	for (k=0;k<32;k++)
	{
		for(j=0;j<4;j++)
		{
			n=j*32 + k;
			if(n>=7&&n<=10 ||n==13)
			{
				printf("%3d	|%02X	|	|",n,n);
			}
			else
			{
			printf("%3d	|%02X	|%c	|",n,n,n);
		    }
		}
		printf("\n");
	}
	
	return 0;
}
*/


// 아스키코드 만들기  (강사님 방식) 
// DEC 7,8,9,10,13 는 예외처리 --> " " 
/*
int main()
{
	int i,j,k,m,m1,p;
	int n=4;
	k=(128-1)/n + 1; // (출력 갯수-1)/ n +1 
	 

	printf("\n");
	
	for(i=0;i<k;i++)
	{
		for(j=0;j<n;j++)  //for(j=i;j<128;j+=k)
		{
			m1=m=i+j*k;
			if(m>=7&&m<=10 || m==13) m1= 0x20;			
			if(m<128) printf("%3d [%02x] : %c  	",m,m,m1);
		}
		printf("\n");
	}
	
	return 0;
}
*/

// #include <MyHeader.h>

/*
int sorting(int *array,int count);

int main()
{
	int arr[]={4,1,7,2,8,4,6,1,7,5};
	
    int n=sizeof(arr)/sizeof(int); //macro function
	printf("원 데이터: \n");
	for(int i=0;i<n;i++)
	{
	  printf("%d ",arr[i]);	
	}	
	printf("\n\n");
	
	sorting(arr,n);
	
	printf("정렬 데이터: \n");
	for(int i=0;i<n;i++)
	{
	  printf("%d ",arr[i]);	
	}
	
}



int sorting(int *array,int count)
{
	int i,j,k;
	for(i=0;i<count;i++)
	{
		for(j=0;j<count;j++)
		{
			if(*(array+i)>*(array+j))
			{
				swap(array+i,array+j);								
			}
			
		}
	}
	
	return 0;
}
*/


/*
함수의 정의:
함수명: int Prompt(char *pt,int *ret);
return type: int : 입력된 정수값, 동일한 값이 ret로도 전달
input:	char *pt : 출력 문자열 (안내문자)
     	int *ret : 반환할 정수 변수의 주소 
 

실습문제 
int Prompt(char *pt,int *ret)
 pt로 전달된 문자열을 출력하고 (안내문자) 입력된 정수
  문자열을 숫자로 변환하여 ret값으로 반환
 +함수의 return 값으로 처리
 ex)scanf("%d",&r);
 	A=r;
    -> A=Prompt("입력하세요:",&r); 
*/

/*
int Prompt(char *pt,int *ret);

int main()
{
	int a,b,c;
	Prompt("A를 입력하세요: ",&a);
	c=Prompt("B를 입력하세요: ",&b);

	printf("A:%d  B:%d  C:%d",a,b,c);	
	
}

int Prompt(char *pt,int *ret)
{
	char buf[254];
	printf("%s",pt);
	
	fgets(buf,254,stdin);
	*ret=atoi(buf);
	
	return *ret;		
}
*/


/*
함수명: int chrPos(char *str,char chr);
return type: int : chr문자의 위치, 없다면 -1 
input:	char *str : 대상 문자열 
     	char chr : 찾을 문자 
기능: str로 전달된 문자열 중에서 chr문자의 위치를
      검색하여 해당 위치를 반환(zero base)      	
  	
*/
/*
int chrPosW(char *str,char chr); //while 문 
int chrPosF(char *str,char chr); //for 문 

int main()
{
	int a,b,c;
	char *str="abcdefgh";
	printf("문자열: %s\n",str);
	printf("%c의 위치는 %d입니다.\n",'e',chrPosW(str,'e'));
	printf("%c의 위치는 %d입니다.\n",'e',chrPosF(str,'e'));  
	printf("%c의 위치는 %d입니다.\n",'o',chrPosW(str,'o'));
	printf("%c의 위치는 %d입니다.\n",'o',chrPosF(str,'o'));
	
}
 
int chrPosW(char *str,char chr)
{  //*str = "abcdefgh"; chr='d';
 	int i,j,k;
	 i=0;
	 while(*(str+i)) // NULL 이되면 while 빠져나옴 
	 {
	 	if(*(str+i++)==chr) return i-1;
	  }
	  return -1;
}


int chrPosF(char *str,char chr)
{  //*str = "abcdefgh"; chr='d';
 	int i,j,k;
	 i=0;
	 for(i;*(str+i)!=0;i++)  // for(int i=0;*(str+i);i++)
	 {
	 	if(*(str+i)==chr) return i;
	 }

	  return -1;
}
*/

/*
함수명: int strPos(char *str,char *s1);
return type: int : s1문자의 우치, 없다면 -1 
input:	char *str : 대상 문자열 
     	char  s1 : 찾을 문자열
기능: str로 전달된 문자열중에서 s1문자열을
      검색하여 해당 위치를 반환(zero base)
	  검색되지 않으면 -1을 반환 
로직 구현 :
	1. str에서 s1의 첫문자가 있는 위치를 검색
	2. 해당 위치에서 strncmp를 이용하여 비교
	   같으면 return i; 아니면 다시 1번.
	3. 만일 끝까지 없으면 -1 
*/

int strPos(char *str,char *s1);
int chrPos(char *str,char chr);

int main()
{
	char *str="abcdefgacdbhj";
	char *s1="acdb";
	printf("문자열: %s\n",str);
	
	printf("%s의 위치는 %d 입니다.\n",s1, strPos(str,s1));
 
}

int chrPos(char *str,char chr)
{  

	 for(int i=0;*(str+i)!=0;i++)  // for(int i=0;*(str+i);i++)
	 {
	 	if(*(str+i)==chr) return i;
	 }

	  return -1;
}

int strPos(char *str,char *s1)
{//*str ="abcdefgacdbhj" ,s1='acdb' , ret:7
    int p;
	 for(int i=0;*(str+i);i++) //   for(int i=0;*(str+i);i+=p+1)   반복횟수를 줄여서 넘어가기위해  
	 {
	 
		p=chrPos(str+i,*s1);  // 		*s1 -> s1 첫번째 요소   // a를 찾기때문에 처음에는 p=0 나오는데
		printf("%d\n",p);
		if(p==-1) return -1;                           // strncmp때문에 다시 해서 p=6이 나온다. 
		if (strncmp(str+p+i,s1,strlen(s1)) == 0) 
		{
		return p+i;
	    }
     }
 
	  return -1;
}

