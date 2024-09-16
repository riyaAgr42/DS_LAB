#include<stdio.h>
int main(){
    int arr[10],n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("enter array element: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int position;
    printf("\nenter the position of deleted element:");
    scanf("%d",&position);
    for(int i=position;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("\nafter deletion of an element:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}