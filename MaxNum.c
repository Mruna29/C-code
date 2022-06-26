#include<stdio.h>

    int Maximum(int iValue1,int iValue2,int iValue3)
    {
        //int iMax=0;
        if(iValue1>iValue2 && iValue1>iValue3)
        {
            printf("iValue1 is Max.");
        }
        if(iValue2>iValue1 && iValue2>iValue3)
        {
            printf("iValue2 is Max.");
        }
        if(iValue3>iValue1 && iValue3>iValue2)
        {
            printf("iValue3 is Max.");
        }

    }

    int main()
    {
        int iNo1=0;
        int iNo2=0;
        int iNo3=0;
        int iRet=0;

        printf("Enter the first number:");
        scanf("%d",&iNo1);

        printf("Enter the second number:");
        scanf("%d",&iNo2);

        printf("Enter the third number:");
        scanf("%d",&iNo3);

        
        //scanf("%d %d %d",iNo1,iNo2,iNo3);

        iRet=Maximum(iNo1,iNo2,iNo3);

         return 0;
    }
