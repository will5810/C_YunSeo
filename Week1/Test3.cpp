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
	
    printf("�� ���� �Է��Ͻÿ�(����):");
    scanf("%d %d",&i,&j);
    printf("%d",Add(i,j));    
    return 0;

}
*/


//�Լ� �ҹ��� �빮�� ���� Ư������ ���� 
/*
int Scan(char k);

int main()
{
	char key;
	
    printf("KEY ���� �Է��Ͻÿ�: ");
   	scanf("%c",&key);
   	Scan(key);
    
    return 0;

}

int Scan(char k)
{
	if(k>='a' && k<='z')
	{
		return printf(":�ҹ���\n");
	}
	else if (k>='A'&&k<='Z')
	{
		return printf(":�빮��\n");		 
	}
	else if(k>='0'&& k<='9')
	{
		return printf(":����\n");
	 }
	else
	{
	    return printf(": Ư������\n");
    }
}
*/


// ��������� �̿��� 
/*
#include "MyHeader.h"


int main()
{
    char key;
	
    printf("KEY ���� �Է��Ͻÿ�: ");
   	scanf("%c",&key);
   	Scan(key);
    
    return 0;

}
*/


// �迭 
/*
int main()
{
	char str1[5]="Good";
	char str2[]="morning";
	char str3[4]={'n','i','c','e'}; //�ڿ� NULL ���� �ȵ� �����Ƿ� �ſ� �Ҿ��������̴�. 
	
	printf("%s\n",str1);
	printf("%s %s\n",str1,str2);
	printf("%s %s %s\n",str1,str2,str3);
	
	
	
	return 0;
}
*/


/*
// �迭�� �̿��� �ҹ��ڸ� �빮�ڷ� ��ȯ 
void ConvertChr1(char buf[]);
void ConvertChr2(char buf[]);

int main()
{
	int len=100;
	char buf[len];
	
	
	while(1)
	{
		printf("\n");
		printf("���ڿ��� �Է��Ͻÿ�: "); 
        scanf("%s",buf);
		printf("���ڿ�: %s \n\n",buf); 
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
// �������� �Ȱ���. 
void ConvertChr2(char buf[])
{
	for(int i; buf[i]!=0; i++) // == for(int i; buf[i]; i++)
	{		
		if(buf[i]>='a' && buf[i]<='z') buf[i]-=32;
		printf("%c ",buf[i]);
	}
		
}
*/

//�����Ͱ� �����°� 
/*
int main(void)
{
	int a[3][2]={ {1,2},
	              {3,4},
				  {5,6} };
	
	printf("%d\n",a[0]); // int 4byte �ε� �ּҰ� 8������ ����. -> 2���� �ǳʶپ  1 ,3, 5 �� ����Ű�Ƿ� 
	printf("%d\n",*(a+0));
	
	printf("%d\n",a[1]);
	printf("%d\n",*(a+1));
	
	printf("%d\n",a[2]);
	printf("%d\n",*(a+2));
	
	
	printf("%d %d\n",a[1][0],(*(a+1))[0]);
	printf("%d %d\n",a[1][2],*(a[1]+2));  // a[1][2]= ���⶧���� 5�� ������ 
	printf("%d %d\n",a[2][1],*(*(a+2)+1));
	
	return 0; 
 } 
*/


// ���ڿ��� �Է��ϰ� getch �� �̿��Ͽ� ���° �ڸ����� �Ǻ� 
/*
void Find(int n,char buf[]);


int main()
{
	int len=100;
	char buf[len];
	
	printf("���ڿ��� �Է��Ͻÿ�: "); 
    scanf("%s",buf); // [Enter] Ű�� ������ ���� �ǵ��� 
	printf("���ڿ�: %s \n",buf); 
	
	while(1)
	{
		printf("\n"); 
		printf("���ڸ� �Է��Ͻÿ�:");
		char ch = getch(); //���� Ű���� �ǵ���.
		if(ch<48 || ch>57) break; //���ڰ� �ƴϸ� ����		
		Find(ch-48,buf); //ch-48: ���� Ű���� �ε��� ������ ��ȯ	    
    }
    
    return 0;
}


void Find(int n,char buf[])
{
    printf("%s (%d): %c" , buf,n,buf[n-1]); //  buf[n-1] = *(buf+n) �����Ŵ�. 
}
*/












