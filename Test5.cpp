#include <stdio.h>
#include "test.h"
#include <string.h>
#include <stdlib.h>
// �ƽ�Ű�ڵ� ����� (���� �� ���) 
// DEC 7,8,9,10,13 �� ����ó�� --> " " 
/*
int main()
{
	int i,j,k;
	int n=k+j;

	for (int i=0;i<4;i++)
	{
		printf("10	|HEX	|����	|");
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


// �ƽ�Ű�ڵ� �����  (����� ���) 
// DEC 7,8,9,10,13 �� ����ó�� --> " " 
/*
int main()
{
	int i,j,k,m,m1,p;
	int n=4;
	k=(128-1)/n + 1; // (��� ����-1)/ n +1 
	 

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
	printf("�� ������: \n");
	for(int i=0;i<n;i++)
	{
	  printf("%d ",arr[i]);	
	}	
	printf("\n\n");
	
	sorting(arr,n);
	
	printf("���� ������: \n");
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
�Լ��� ����:
�Լ���: int Prompt(char *pt,int *ret);
return type: int : �Էµ� ������, ������ ���� ret�ε� ����
input:	char *pt : ��� ���ڿ� (�ȳ�����)
     	int *ret : ��ȯ�� ���� ������ �ּ� 
 

�ǽ����� 
int Prompt(char *pt,int *ret)
 pt�� ���޵� ���ڿ��� ����ϰ� (�ȳ�����) �Էµ� ����
  ���ڿ��� ���ڷ� ��ȯ�Ͽ� ret������ ��ȯ
 +�Լ��� return ������ ó��
 ex)scanf("%d",&r);
 	A=r;
    -> A=Prompt("�Է��ϼ���:",&r); 
*/

/*
int Prompt(char *pt,int *ret);

int main()
{
	int a,b,c;
	Prompt("A�� �Է��ϼ���: ",&a);
	c=Prompt("B�� �Է��ϼ���: ",&b);

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
�Լ���: int chrPos(char *str,char chr);
return type: int : chr������ ��ġ, ���ٸ� -1 
input:	char *str : ��� ���ڿ� 
     	char chr : ã�� ���� 
���: str�� ���޵� ���ڿ� �߿��� chr������ ��ġ��
      �˻��Ͽ� �ش� ��ġ�� ��ȯ(zero base)      	
  	
*/
/*
int chrPosW(char *str,char chr); //while �� 
int chrPosF(char *str,char chr); //for �� 

int main()
{
	int a,b,c;
	char *str="abcdefgh";
	printf("���ڿ�: %s\n",str);
	printf("%c�� ��ġ�� %d�Դϴ�.\n",'e',chrPosW(str,'e'));
	printf("%c�� ��ġ�� %d�Դϴ�.\n",'e',chrPosF(str,'e'));  
	printf("%c�� ��ġ�� %d�Դϴ�.\n",'o',chrPosW(str,'o'));
	printf("%c�� ��ġ�� %d�Դϴ�.\n",'o',chrPosF(str,'o'));
	
}
 
int chrPosW(char *str,char chr)
{  //*str = "abcdefgh"; chr='d';
 	int i,j,k;
	 i=0;
	 while(*(str+i)) // NULL �̵Ǹ� while �������� 
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
�Լ���: int strPos(char *str,char *s1);
return type: int : s1������ ��ġ, ���ٸ� -1 
input:	char *str : ��� ���ڿ� 
     	char  s1 : ã�� ���ڿ�
���: str�� ���޵� ���ڿ��߿��� s1���ڿ���
      �˻��Ͽ� �ش� ��ġ�� ��ȯ(zero base)
	  �˻����� ������ -1�� ��ȯ 
���� ���� :
	1. str���� s1�� ù���ڰ� �ִ� ��ġ�� �˻�
	2. �ش� ��ġ���� strncmp�� �̿��Ͽ� ��
	   ������ return i; �ƴϸ� �ٽ� 1��.
	3. ���� ������ ������ -1 
*/

int strPos(char *str,char *s1);
int chrPos(char *str,char chr);

int main()
{
	char *str="abcdefgacdbhj";
	char *s1="acdb";
	printf("���ڿ�: %s\n",str);
	
	printf("%s�� ��ġ�� %d �Դϴ�.\n",s1, strPos(str,s1));
 
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
	 for(int i=0;*(str+i);i++) //   for(int i=0;*(str+i);i+=p+1)   �ݺ�Ƚ���� �ٿ��� �Ѿ������  
	 {
	 
		p=chrPos(str+i,*s1);  // 		*s1 -> s1 ù��° ���   // a�� ã�⶧���� ó������ p=0 �����µ�
		printf("%d\n",p);
		if(p==-1) return -1;                           // strncmp������ �ٽ� �ؼ� p=6�� ���´�. 
		if (strncmp(str+p+i,s1,strlen(s1)) == 0) 
		{
		return p+i;
	    }
     }
 
	  return -1;
}

