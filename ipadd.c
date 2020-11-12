#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char ip[20];
    int a,b,c,d,rem,rev1,rev2,rev3,rev4,mf,i;
    printf("Enter a IP address :");
    scanf("%s",&ip);
    sscanf(ip,"%d.%d.%d.%d",&a,&b,&c,&d);
    sprintf(ip,"%d %d %d %d",a,b,c,d);
    if((a<0||a>255)||(b<0||b>255)||(c<0||c>255)||(d<0||d>255))
    {
        printf("\nInvalid IP address ");
        exit(0);
    }
    rev1=0,mf=1;
    while(a>0)
    {
        rem=a%2;
        rev1=(rem*mf)+rev1;
        mf=mf*10;
        a=a/2;
    }
    rev2=0,mf=1;
    while(b>0)
    {
        rem=b%2;
        rev2=(rem*mf)+rev2;
        mf=mf*10;
        b=b/2;
    }
    rev3=0,mf=1;
    while(c>0)
    {
        rem=c%2;
        rev3=(rem*mf)+rev3;
        mf=mf*10;
        c=c/2;
    }
    rev4=0,mf=1;
    while(d>0)
    {
        rem=d%2;
        rev4=(rem*mf)+rev4;
        mf=mf*10;
        d=d/2;
    }
    printf("%d.%d.%d.%d",rev1,rev2,rev3,rev4);
    return 0;

}
