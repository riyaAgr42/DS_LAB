#include<stdio.h>

int main() {
    int arr1[100], arr2[100], diffArr[100]; 
    int n, m, k = 0;
    printf("Enter the size of the first and second arrays: ");
    scanf("%d%d", &n, &m);
    printf("Input the first array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Input the second array elements: ");
    for(int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }
    for(int i = 0; i < n; i++) {
        int flag = 0;
        for(int j = 0; j < m; j++) {
            if(arr1[i] == arr2[j]) {
                flag = 1; 
                break;
            }
        }
        if(flag == 0) {  
            diffArr[k++] = arr1[i];
        }
    }

    printf("Set difference: ");
    for(int i = 0; i < k; i++) {
        printf("%d ", diffArr[i]);
    }

    return 0;
}
