#include <stdio.h>

int main()
{
/*
	int a,b,result;
	
	a=10;
	b=20;
	
	result=a+b;
	
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("result = %d\n",result);
*/
//    int a,b;
    
//    if(a>5 && a<10)



/*
    int a, b, result=0;
    printf("두수 입력: ");
    scanf("%d %d",&a,&b);
    int t=a;
    
    while(a<=b)
    {
    	result+=a;
    	a++;
	}
	printf("while문 %d ~ %d 까지의 합: %d\n",t,b,result);


    int i=a=t;
	result=0;
	
    for(i=a;i<=b;i++)
    {
    	result+=a;
    	a++;
	}
	printf("for문 %d ~ %d 까지의 합: %d\n",t,b,result);
*/	

/*
    int a, b, result=0;
    printf("두수 입력: ");
    scanf("%d %d",&a,&b);
    int t=a;
    
    while(a<=b)
    {
    	if(a%2==1) result+=a;
    	a++;
	}
     printf("while문 %d ~ %d 까지의홀수의  합: %d\n",t,b,result);

    int i;
	result=0;
	a=t;
    
    for(i=a;i<=b;i++)
    {
    	if(a%2==0) result+=a;
    	a++;
	} 
	
	printf("for문 %d ~ %d 까지의 짝수의 합: %d\n",t,b,result);
*/

/*
    int a, b, result=0;
    printf("두수 입력: ");
    scanf("%d %d",&a,&b);
    int t=a;
    int res1=0,res2=0;
    
    for(int i=a;i<=b;i++){
    	
		if(i%2==0) res2+=i;
    	else res1+=i;
    	
	}

     printf("%d ~ %d 까지의홀수의합: %d  짝수의 합:%d\n",t,b,res1,res2);
*/
	
	int num;
	printf("숫자를 입력하시오\n");
	while(1){
		scanf("%d",&num);
		if(num==0){
			printf("프로그램 종료");
			break;
		}
		switch(num){
			case 1:
				printf(">%d: One\n",num);
				break;
			case 2:
				printf(">%d :Two\n",num);
				break;
			case 3:
				printf(">%d :Three\n",num);
				break;
			case 4:
				printf(">%d :Four\n",num);
				break;
			case 5:
				printf(">%d :Five\n",num);
				break;
			case 6:
				printf(">%d :Six\n",num);
				break;
			case 7:
				printf(">%d :Seven\n",num);
				break;
			case 8:
				printf(">%d :Eight\n",num);
				break;
			case 9:
				printf(">%d :Nine\n",num);
				break;								
		}
	}
		
	return 0;
}              
		             
     
