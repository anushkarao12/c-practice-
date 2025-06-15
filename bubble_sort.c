#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int arr[] = {25, 12, 30, 48, 1, 2, 10};
    int length = sizeof(arr)/sizeof(int);
    for (int i = 0; i < length -1; i++) {
        for (int j = 0; j < length -1 -i;j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }

    for (int i = 0; i < length; i++) {
        printf("%d, ", arr[i]);
    }

    printf("\n");
    return 0;
}