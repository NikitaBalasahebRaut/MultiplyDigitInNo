
/*
Problem statement : 7.4
Accept number from user and return multilication of digits.
 
 Input : 127   Output : 14
 Input : 4522   Output : 80
 Input : 1075   Output : 35
 Input : -2205  Output : 20

 */
 
#include<stdio.h>

int MultiplyDigits(int iValue)
{
  int mul = 1;
  int iDigit = 0;
  
   if(iValue < 0)
  {
      iValue = -iValue;
  }
  
  while(iValue != 0)
  {
    iDigit = iValue % 10;
	
	if(iDigit != 0)
	{
	  mul = mul * iDigit;
	}
    iValue = iValue / 10;
  }
  return mul;
}

int main()
{
 int iNo = 0;
 int iRet = 0;
 
 printf("Enter The Number \n");
 scanf("%d",&iNo);
 
 iRet = MultiplyDigits(iNo);
 printf("Multiplication of digits are : %d",iRet);
 
return 0;
}
