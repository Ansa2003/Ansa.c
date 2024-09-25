//write a c program to diplay the n terms of odd numbers and there sum
#include<stdio.h>
int main () {
        int i,n,sum=0;
        printf("enter the number of terms");
        scanf("%d", &n);
        printf("the odd nos %d are; ", n);
        for(i=1;i<=n;i++)

{
        printf("%d", 2*i-1);
        sum=sum+2*i-1;

}
        printf("the sum is : %d", sum);
}