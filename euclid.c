#include <stdio.h>
int main()
{
int euclid(int m, int n){
while(m%n!=0)
{
int r=n%m;
n=m;
 m=r;
}
 return m;
}
int a=euclid(48,36);
printf("%d",a );
}