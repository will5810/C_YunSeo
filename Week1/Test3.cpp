#include<stdio.h>
#include <conio.h>

/*
int Add(int i,int j)
{
	int result=i+j;
	return result;
}

int main()
{
	int i,j;
	
    printf("두 수를 입력하시오(덧셈):");
    scanf("%d %d",&i,&j);
    printf("%d",Add(i,j));    
    return 0;

}
*/


//함수 소문자 대문자 숫자 특수문자 구별 
/*
int Scan(char k);

int main()
{
	char key;
	
    printf("KEY 값을 입력하시오: ");
   	scanf("%c",&key);
   	Scan(key);
    
    return 0;

}

int Scan(char k)
{
	if(k>='a' && k<='z')
	{
		return printf(":소문자\n");
	}
	else if (k>='A'&&k<='Z')
	{
		return printf(":대문자\n");		 
	}
	else if(k>='0'&& k<='9')
	{
		return printf(":숫자\n");
	 }
	else
	{
	    return printf(": 특수문자\n");
    }
}
*/


// 헤더파일을 이용하 
/*
#include "MyHeader.h"


int main()
{
    char key;
	
    printf("KEY 값을 입력하시오: ");
   	scanf("%c",&key);
   	Scan(key);
    
    return 0;

}
*/


// 배열 
/*
int main()
{
	char str1[5]="Good";
	char str2[]="morning";
	char str3[4]={'n','i','c','e'}; //뒤에 NULL 값이 안들어가 있으므로 매우 불안정상태이다. 
	
	printf("%s\n",str1);
	printf("%s %s\n",str1,str2);
	printf("%s %s %s\n",str1,str2,str3);
	
	
	
	return 0;
}
*/


/*
// 배열을 이용한 소문자를 대문자로 변환 
void ConvertChr1(char buf[]);
void ConvertChr2(char buf[]);

int main()
{
	int len=100;
	char buf[len];
	
	
	while(1)
	{
		printf("\n");
		printf("문자열을 입력하시오: "); 
        scanf("%s",buf);
		printf("문자열: %s \n\n",buf); 
		ConvertChr1(buf);
	
    }
}


void ConvertChr1(char buf[])
{
	for(int i;buf[i]!=0;i++) // == for(int i; buf[i]; i++)
	{
		char a=buf[i];
		if(a>96 && a<123) a-=32;
		printf("%c ",a);

	}
		
}
// 위에꺼랑 똑같다. 
void ConvertChr2(char buf[])
{
	for(int i; buf[i]!=0; i++) // == for(int i; buf[i]; i++)
	{		
		if(buf[i]>='a' && buf[i]<='z') buf[i]-=32;
		printf("%c ",buf[i]);
	}
		
}
*/

//포인터가 찍히는것 
/*
int main(void)
{
	int a[3][2]={ {1,2},
	              {3,4},
				  {5,6} };
	
	printf("%d\n",a[0]); // int 4byte 인데 주소가 8씩차이 난다. -> 2개씩 건너뛰어서  1 ,3, 5 를 가르키므로 
	printf("%d\n",*(a+0));
	
	printf("%d\n",a[1]);
	printf("%d\n",*(a+1));
	
	printf("%d\n",a[2]);
	printf("%d\n",*(a+2));
	
	
	printf("%d %d\n",a[1][0],(*(a+1))[0]);
	printf("%d %d\n",a[1][2],*(a[1]+2));  // a[1][2]= 없기때문에 5가 찍힌다 
	printf("%d %d\n",a[2][1],*(*(a+2)+1));
	
	return 0; 
 } 
*/


// 문자열을 입력하고 getch 를 이용하여 몇번째 자리인지 판별 
/*
void Find(int n,char buf[]);


int main()
{
	int len=100;
	char buf[len];
	
	printf("문자열을 입력하시오: "); 
    scanf("%s",buf); // [Enter] 키를 눌러서 값을 되돌림 
	printf("문자열: %s \n",buf); 
	
	while(1)
	{
		printf("\n"); 
		printf("숫자를 입력하시오:");
		char ch = getch(); //단일 키값을 되돌림.
		if(ch<48 || ch>57) break; //숫자가 아니면 종료		
		Find(ch-48,buf); //ch-48: 숫자 키값을 인덱스 값으로 변환	    
    }
    
    return 0;
}


void Find(int n,char buf[])
{
    printf("%s (%d): %c" , buf,n,buf[n-1]); //  buf[n-1] = *(buf+n) 같은거다. 
}
*/












