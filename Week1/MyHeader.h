void Scan(char k);

void Scan(char k)
{
	if(k>='a' && k<='z')
	{
     printf(":�ҹ���\n");
	}
	else if (k>='A'&&k<='Z')
	{
	 printf(":�빮��\n");		 
	}
	else if(k>='0'&& k<='9')
	{
	 printf(":����\n");
	 }
	else
	{
	 printf(": Ư������\n");
    }
}
