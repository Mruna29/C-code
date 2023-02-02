#include<stdio.h>
#include<string.h>


struct mystructure
{
    int mynum;
    char mychar;
    char mystring[30];
};

int main()
{
    struct mystructure s1={10,'a',"Mrunmayee"};
    s1.mynum=20;
    s1.mychar='b';
    strcpy(s1.mystring,"Waikar");

    printf("Modified values are: %d\n%c\n%s\n",s1.mynum,s1.mychar,s1.mystring);
    
}