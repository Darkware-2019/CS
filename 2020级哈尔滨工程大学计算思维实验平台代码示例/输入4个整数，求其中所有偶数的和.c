 #include <stdio.h>
int main()
{ int i,x,s1=0,s2=0;
for(i=0; i<4; i++)
{ scanf("%d",&x);
if(x%2==0)
s1+=x;
else s2+=x;
}
printf("%d",s1);
return 0;
}


