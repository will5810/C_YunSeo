# C_YunSeo
IoT - SW  developer Class

### 1강
```
IoT (Internet of Things) (사물인터넷)
3C: 콘텐츠, 커넥션, 컨트롤

질문? : 그래서 우리는 무엇을 어떻게 준비해야 할까?


프로그래밍 언어
 사람과 컴파일러가 이해할 수 있는 약속된 형태의 언어
 c 언어도 프로그래밍 언어 중 하나

컴파일
 프로그래밍 언어로 작성된 프로그램을 컴퓨터가 이해할 수 있도록 기계어로 번역해 주는 역할

1.Editing
2.Compiling
3.Linking


\a : arlam 경고음 소리 발생
\b : 백스페이스 (backspace)
\n : 개행
\r : 캐리지 리턴
\t : 수평 탭
\v : 수직 탭
\\ : 백슬래시(\)
\' : 작은 따옴표
\'" : 큰 따옴표



%c : 단일문자
%d : 부호 있는 10진 정수
%f : 부호 있는 10진 실수
%s : 문자열
%o : 부호없는 8진정수
%u : 부호없는 10진정수
%x : 부호없는 16진정수,소문자
%X : 부호없는 16진정수,대문자
%e : e표기법에 의한 실수 ( 5.6e+20=5.6*10^20 )
%E : E표기법에 의한 실수 ( 5.6E+20=5.6*10^20 )


1byte = 8 bit = ascii 
           0~255
2byte = 16bit 
           0~65535


변수란?
 데이터를 저장할 수 있는 메모리 공간에 붙여진 이름

다양한 형태(자료형)의 변수
 정수형: char (1byte)   , int , long
 실수형: float , double

char
 unsigned char : 부호무시  따라서 0 ~ 255
 char : -128 ~ 127

int
 4byte=32bit 
```
### 2강

```
변수 선언시 주의사항
 1. 함수와 변수는 사용되기 이전에 선어되어야 한다.
 2. -1 변수의 이름은 알파벳, 숫자 ,언더바(_)로 구성
    -2 대 소문자 구분
    -3 변수의 이름은 숫자로 시작 불가, 키워드 사용불가
    -4 공백이 포함될수 없음


대입 연산자

논리 연산자

자료형 변환의 두 가지 형태 
 -자동 형 변환 (묵시적 형 변환): 자동적으로 발생하는 형 변환
 -강제 형 변환 (강제 형 변환): 프로그래머가 명시적으로 형 변환을 요청하는 형태의 변환

while 문

for 문

switch case 문
```

###3강
```
[함수]
  반환값이 있을때, 없을때 유의
  
  컴파일러 특성상, 함수는 호출되기 전에 정의 되어야한다.



#include <stdio.h>

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


한번만 돌렸을 때는 잘 잘동 되지만 

int main()
{
	char key;
	
	
	while(1)
	{
	    printf("KEY 값을 입력하시오(종료:z): ");
	   	scanf("%c",&key);
    	if(key=='z') break;
   	    Scan(key); 	    
	}

   	return 0;

}

이렇게 반복문을 사용하여 돌릴때는 scanf 오류 특성상 엔터키도 같이 포함하기 때문에
한줄 잘 작동되고 다음줄에 특수문자(엔터키)도 같이 찍힌다.
따라서 

if(key!=13) Scan(key); //엔터키 무시

붙여준다

이렇게 만든 함수들은
#include "MyHeader.h" 와 같이 따로 헤더 파일을 만들어 불러준다


변수의 특성에 따른 분류
  지역 변수: 중 괄호 내에 선언되는 변수
  전역 변수: 함수 내에 선언되지 않는 변수
  정적 변수: 함수 내부, 외부 모두 선언 가능

전역변수  
  전역변수는 정적변수라고 봐도 프로그맹하는데 거의 무의미하다.
  동일한 이름의 지역 변수에 의해서 가려지기도 한다. 
   -> 전역 , 지역 함수의 이름이 같으면 에러는 뜨지않고 지역변수 우선이다.
  

[배열]
  둘 이상의 변수를 동시에 선언하는 효과를 지닌다.
  많은 양의 데이터를 일괄적으로 처리해야 하는 경우에 유용하다.
  지역적 특성을 지닐 수도 있고, 전역적 특성을 지닐 수도 있다.

선언과 동시에 초기화
 
   int main()
   {
       int arr1[5]={1,2,3,4,5};
       int arr2[ ]={1,3,5,7,9};
       int arr3[5]={1,2};   //나머지는 쓰레기값
    }



문자열 상수
    -문자열 이면서 상수의 특징을 지닌다.
    printf("Hello World! \n")
문자열 변수
    -문자열의 배열 + NULL
    -문자열이면서 변수의 특징을 지닌다.
    char str1[5]="Good";  // |G|o|o|d|0| 끝에 NULL을 넣어줘야한다. 
    char str2[ ]="mood"; // NULL 까지 합쳐 총 5개 방을 만들어준다.
    char str3[4]={'n','i','c','e'}; //뒤에 NULL 값이 안들어가 있으므로 매우 불안정상태이다.

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

// 배열을 이용한 소문자를 대문자로 변환 

void ConvertChr1(char buf[]); //아스키코드 값을 이용
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


[2차원 배열]
포인터는 배열이다.

int *a -> *(a+1) 로 받고
char buf[ ] -> buf[1] 로 받을수 있고 서로 바꿔서 쓰는것도 가능하다.

하지만 2차원 배열 부터는 바꿔서 쓰는것이 불가능하다.

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


int a[2][3] 4바이트
char  1바이트
double 8바이트
이므로 주소값에서 첫번째 자리만 같고, 나머지는 byte 차이만큼 다르다.


[getch 함수]

// 문자열을 입력하고 getch 를 이용하여 몇번째 자리인지 판별하는 프로그램
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



getchar() ,getche() , getch() 의 차이점
링크
https://kcoder.tistory.com/entry/getchar-getch-getche%EC%9D%98-%EC%B0%A8%EC%9D%B4%EC%A0%90-%EC%98%88%EC%A0%9C%EC%86%8C%EC%8A%A4-%EA%B7%B8%EB%A6%BC

```
