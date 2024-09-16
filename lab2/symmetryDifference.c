#include<stdio.h>
int main(){
    int n,arr1[10],arr2[10];
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("Enter first array element:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter second array element:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }

    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                flag=1;
                break;
            }
        }
        if(!flag){
            printf("%d ",arr1[i]);
        }
    }
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                flag=1;
                break;
            }
        }
        if(!flag){
            printf("%d ",arr2[i]);
        }
    }
    printf("\n");
    return 0;


}
