#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printarr(int *ptr, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d, ", ptr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {25, 12, 30, 48, 1, 2, 10};
    int length = sizeof(arr)/sizeof(int);
    for (int i = 1; i < length; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] < arr[j]) {
                // shift slements till i
                int temp = arr[i];
                for (int k = i; k > j; k--) {
                    arr[k] = arr[k-1];
                }
                arr[j] = temp;
                break;
            }
        }
    }

    printarr(arr, length);


    int *ptr = (int*) calloc(10 *10 , sizeof(int));
    for (int i = 0; i < 10*10; i++) {
        *(ptr +i) = rand() % 50;
    }

    printarr(ptr, 100);

    for (int i = 0; i < 10; i++) {
        for (int j =0; j < 10; j++) {
            printf("%d, ", *(ptr + (i * 10) + j));
        }
        printf("\n");
    }
    free(ptr);
    
    return 0;
}