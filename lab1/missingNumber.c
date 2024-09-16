#include<stdio.h>
int main(){
    int arr[10],n,sum=0,missing_num;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int natural_sum=((n+1)*(n+2))/2;
    printf("Enter the array element:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    // printf("Sum of array element is %d",sum);
    missing_num=natural_sum-sum;
    printf("%d",missing_num);
    return 0;
}