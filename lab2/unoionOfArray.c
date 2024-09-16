#include<stdio.h>

int main() {
    int arr1[100], arr2[100], unionArr[200];
    int n, m, k = 0;
    printf("Enter the size of the first and second arrays: ");
    scanf("%d%d", &n, &m);
    

    printf("Input the first array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
        unionArr[k++] = arr1[i]; 
    }
    
    printf("Input the second array elements: ");
    for(int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }
    for(int i = 0; i < m; i++) {
        int flag = 0;
        for(int j = 0; j < n; j++) {
            if(arr2[i] == arr1[j]) {
                flag = 1;  
                break;
            }
        }
        if(flag == 0) {  
            unionArr[k++] = arr2[i];
        }
    }
    printf("Union of arrays: ");
    for(int i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    return 0;
}
