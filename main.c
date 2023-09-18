/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
// Sum of the array elements
int main(){
    int arr[10000],i,n,sum=0;
    printf("Enter the number you want to enter in array");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Sum of the array is:");
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
}