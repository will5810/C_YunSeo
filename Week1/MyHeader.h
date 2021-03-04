void Scan(char k);

void Scan(char k)
{
	if(k>='a' && k<='z')
	{
     printf(":소문자\n");
	}
	else if (k>='A'&&k<='Z')
	{
	 printf(":대문자\n");		 
	}
	else if(k>='0'&& k<='9')
	{
	 printf(":숫자\n");
	 }
	else
	{
	 printf(": 특수문자\n");
    }
}
