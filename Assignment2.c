#include<stdio.h>

int FinalResult(int iValue)
{
    //int iAns=0;
    if(iValue>=75)
    {
        printf("Distinction");
    }
    else if(iValue>=60 && iValue<75)
    {
        printf("First Class");
    }
    else if(iValue>35 && iValue<60)
    {
        printf("Second Class");
    }
    else
    {
        printf("Failed");
    }
}
int main()
{
    int iMark=0;
    int iRet=0;

    printf("Enter the Marsk:");
    scanf("%d", &iMark);

    iRet=FinalResult(iMark);
    return 0;
}