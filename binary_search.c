#include<stdio.h>


int main(){
    int arr[] = {1, 2, 10, 12, 25, 30, 48};
    int length = sizeof(arr)/sizeof(int); 
    int intemToFind = 30;
   
   int l = 0;
   int u = length -1;

   while (l <= u) {
    int mid = l + (u -l)/2;
    if (intemToFind == arr[mid]) {
        printf("Index is %d", mid);
        break;
    }
    else if (intemToFind < arr[mid]) {
         u = mid -1;
    } 
    else {
        l = mid +1;
    }
   }

    printf("\n");
    return 0;
}