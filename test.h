#include <stdio.h>

void swap(int *a,int *b);

void swap(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}

//함수의 정의:
//함수명: sorting
//return type :int :0 (mormal) : -1(ERROR)
//input:int *array 정수 배열 , count 배열요소 갯수 
 
 
//sorting : 데이터의 정렬
//1,3,5,7,9,2,4,6,8,0  -->> 0,1,2,3,4,5,6,7,8,9
//성적 , 실적 처리 : 총점, 평균 기준으로 등수 판정
//순서대로 출력
//1. 배열에 데이터를 탑재 > 입력, 파일로드 ,DB
//2. 인덱스에 따라 이후의 데이터와 비교
// --> 가장 작은, 큰 값과 SWAP 
//3. 배열 전체에 대하여 2번 과정을 반복 
