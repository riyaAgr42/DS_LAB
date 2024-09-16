#include<stdio.h>
int main(){
    int arr[20],n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    printf("Enter array element: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Print array element:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}