#include<stdio.h>
#include<string.h>

struct mystructure
{
    int mynum;
    char myname[20];
    char mymember;
};

int main()
{
    struct mystructure s1;
    s1.mynum=10;
    s1.mymember='M';
    strcpy (s1.myname,"Mrunmayee Waikar");

    printf("My number is : %d\n", s1.mynum);
    printf("My member is : %c\n",s1.mymember);
    printf("My name is : %s", s1.myname);

}
