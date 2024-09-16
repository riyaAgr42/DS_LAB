#include<stdio.h>
int main(){
    int arr1[10],arr2[10],n;
    printf("enter the array size: ");
    scanf("%d",&n);
    printf("Enter first array element:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter second array element:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    printf("Intersection of arrays :");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(arr1[i]==arr2[j]){
            printf("%d ",arr1[i]);
        }
    }
    }
}