#include<stdio.h>


int main(){
    int arr[] = {25, 12, 30, 48, 1, 2, 10};
    int length = sizeof(arr)/sizeof(int); 
    int intemToFind = 30;
    for (int i = 0; i < length; i++) {
        if (arr[i] == intemToFind) {
            printf ("Index is %d", i);
            break;
        }
    }

    printf("\n");
    return 0;
}