#include <stdio.h>
int main()
{
  int a,b, t, sum=0;
  scanf("%d", &t);
  for(int i=0; i<t; i++){
    scanf("%d%d", &a,&b);
   if(a>b){
    a=a+b;
    b=a-b;
    a=a-b;
   }
    if(a%2==0)
        a=a+1;
    else
        a=a+2;
    for(int i=a; i<b; i+=2){
        sum=sum+i;
    }
     printf("%d\n",sum);
     sum=0;
       }
}


