#include<stdio.h>
int main(){
    int arr[20],n;
    printf("Enter the size of an arry:");
    scanf("%d",&n);
    printf("Enter array element:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("original Array:");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int value,position;
    printf("\n Enter the position and value of an element to be inserted: ");
    scanf("%d %d",&value,&position);
    for(int i=n;i>=position;i--){
        arr[i]=arr[i-1];
    }
    arr[position-1]=value;
    printf("\n Inserted array:");
    for (int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
}
