#include <stdio.h>

/*
int main()
{
	int aa=2000;
	int a=2005;
	int b=2021;	
	int *pA=&a;
	void *vp;

	
	printf("%08x \n",pA); //�ּҰ��� 16����ǥ�� 
	printf("%08x \n",&a);

	(*pA)++; //a++�� ���� �ǹ� 
	
	printf("%d\n",a);
	printf("%d\n",*pA);
	
	vp = pA++; //�������ּ�
	  
	printf("%08x \n",pA); 
	printf("%d \n",*pA); 
	printf("%d \n", vp++); 
	printf("%d \n", vp++); 
	
	
	 
	
	
	return 0;
}
*/



/*
int main(void)
{
	int a[5]={0,1,2,3,4};
	double *b={1,2,3,4,5,6,7};
 }
 */ 

// �迭�� �̿��� ���� ������ ã�Ƽ� ��� 



/*
int Min(int *p,int n);

int main()
{
    int arr[5];
    int min;

    
    printf("���ڸ� �Է��Ͻÿ�\n");
    
    for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);	
	}
	
	min=Min(arr,5);

	
    return 0;
}



int Min(int *p,int n)
{
	
	int min=*p;
	
	for (int i = 0; i < n; i++) 
	{
        if (min > *(p+i)) {   // == min> p[i]
            min = *(p+i);
        }        
    }
 
    return  printf("min = %d\n", min);

}
*/



// �迭���� 
/*
void swap(int *a);

int main()
{
    int a[5];
    int tmp;
    int i,k;

    
    printf("���ڸ� �Է��Ͻÿ�\n");
    
    for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);	
	}
	
	    printf("\n\n������ �迭 \n");
	for (k=0; k<5; k++)
 	{
  	printf("%d ", a[k]);
 	}
	
	swap(a);
	
 
	printf("\n\n������ �迭 \n");
	for (k=0; k<5; k++)
 	{
  	printf("%d ", a[k]);
 	}
 

	
    return 0;
}


void swap(int *a)
{
	
	int tmp;
	
	 for (int j= 1; j< 5; j++)
    {
      for (int i=0; i<5-1; i++)
     {
       if (a[i] > a[i+1])
      {
    
      	tmp = a[i];
    	a[i] = a[i+1];
    	a[i+1] = tmp;
       }  
 	 }
 	}
} 
*/
//�� ���� �Է¹޾� �ִ������� ����ϴ� ���α׷�


/*
int gong(int N,int *arr);
int gongGcd2(int *arr1,int n1,int *arr2,int n2);
int gongGcd1(int n1,int n2);

int main()
{
	int num1,num2;
	int n1,n2;
	int arr1[100],arr2[100];
	int MaxNum; 

    printf("2���� ���ڸ� �Է��ϼ���.\n");
	scanf("%d %d",&num1,&num2);
	
	n1=gong(num1,arr1);
	n2=gong(num2,arr2);
	
	MaxNum=gongGcd2(arr1,n1,arr2,n2);
	
	printf("%d�� �����: ",num1);
	for(int k=0; k<n1 ;k++)
	{
	printf("%d ",arr1[k]);
	}
	printf("\n");
	printf("%d�� �����: ",num2);	
	for(int k=0; k<n2;k++)
	{
	printf("%d ",arr2[k]);
	}

    
    printf("\n%d�� %d�� �ִ������� %d�Դϴ�.\n",num1,num2,MaxNum);
 
	return 0;
 } 
 
 
int gong(int N,int *arr)
{
	int count=0;
    int i;
    for (i = 1; i <= N; i++)
    {
        if ((N % i) == 0)
        {
            arr[count] = i;  // *(arr)=i;
            count++;  // arr++;
        }
        else
            continue;
    }
    
    return count;
    
}

int gongGcd2(int *arr1,int n1,int *arr2,int n2)
{
	int i,j,k;
	
	for(i=n1-1; i>=0;i--)
	{
		for(j=0;j<n2;j++)
		{
			if(*(arr1+i)==*(arr2+j)) return *(arr1+i);
		}
	}
	
	return -1;  // ���� �߸����� 
}


int gongGcd1(int n1,int n2)
{
	int i,j,k;
	
	for(i=n1;i>0;i--)
	{
		if(n1%i==0 && n2%i==0) return i;
	}
}

*/

#include <stdio.h>

struct person{
	char name[20];
	char phone[20];
};
int main()
{
	struct person man={"as","02020"};
	struct person *pMan;
	pMan=&man;
	
	printf("name :%s\n",man.name);
	printf("phone:%s\n",man.phone);
	
	printf("name :%s\n",(*pMan).name);
	printf("phone :%s\n",(*pMan).phone);
	
	printf("name :%s\n",pMan->name);
	printf("phone :%s\n",pMan->phone);
	
			
	return 0;
		
}






















