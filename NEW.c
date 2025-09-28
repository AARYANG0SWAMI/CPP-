#include<stdio.h>


void traverse(int A[], int N);
int main()
{
    int A[30],i,N;
    printf("enter no of elements   ");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    scanf("%d",&A[i]);
    traverse(A,N);
}
void traverse(int A[],int N)

{
    int k=0;
    while(k<N)
    {
    printf("%d",A[k]);
    k++;
    }
}