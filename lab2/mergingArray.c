#include<stdio.h>
int main(){
int arr1[100],arr2[100],arr[100],n,m;
int i=0,j=0,k=0;
printf("Enter the array size: ");
scanf("%d%d",&n,&m);
int merged[n+m];
printf("Input the  first array element:");
for(int i=0;i<n;i++){
    scanf("%d",&arr1[i]);
}
printf("Input the second array element:");
for(int j=0;j<m;j++){
    scanf("%d",&arr2[j]);
   }
while(i<n && j<m){
    if(arr1[i]<arr2[j]){
        merged[k]=arr1[i];
        i++;
        
    }
    else{
        merged[k]=arr2[j];
        j++;      
    }   
    k++; 
}
while(i<n){
    merged[k]=arr1[i];
    k++;
    i++;
}
while(j<m){
    merged[k]=arr2[j];
    k++;
     j++;
}
printf("Merged array: ");
for (int s = 0; s < n + m; s++) {
    printf("%d ", merged[s]);
    }
return 0;
}
    


