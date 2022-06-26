//Problem statement : Factorial using while loop
//take 9 then ans should be 362880

#include<stdio.h>

int Factorial(int iValue)
{
    int iFact=1;
    int iCnt=1;

    while (iCnt<=iValue)
    {
        iFact=iFact*iCnt;
        iCnt++;
    }
    return iFact;
}    
int main()
{
    int iNo1=0;
    int iRet=0;

    printf("Enter the number:");
    scanf("%d", &iNo1);

    iRet=Factorial(iNo1);

    printf("Factorial of number is :%d", iRet);
    return 0;
}