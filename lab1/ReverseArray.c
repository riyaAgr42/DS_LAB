#include<stdio.h>
int main(){
    int arr[10],n,temp;
    printf("enter the size of aaray:");
    scanf("%d",&n);
    int k=n;
    printf("enter the array element: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("Reversed Array:");
    for(int i=0;i<k;i++){
     printf("%d ",arr[i]);
    }
}