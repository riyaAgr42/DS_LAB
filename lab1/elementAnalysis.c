#include<stdio.h>
int main(){
    int arr[20],n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("Enter the array element:");
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("Repeated element: ");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
                break;
            }
        }
    }   
   
    return 0;
}