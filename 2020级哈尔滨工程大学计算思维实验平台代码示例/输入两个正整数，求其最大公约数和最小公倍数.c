 #include<stdio.h>
int main()
{
    int a,b,t,r;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        t=b;
        b=a;
        a=t;
    }
    r=a%b;
    int n=a*b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    printf("%d %d",b,n/b);
    return 0;
} 


