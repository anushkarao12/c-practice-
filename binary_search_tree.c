#include<stdio.h>
#include<stdlib.h>

struct BinarySearchTree {
    int value;
    struct BinarySearchTree *left;
    struct BinarySearchTree *right;
};

struct BinarySearchTree * create_tree(int *ptr, int low, int high) {
    if (low > high) {
        return NULL;
    }
    struct BinarySearchTree *newNode = malloc(sizeof(struct BinarySearchTree));
    int mid = low + (high - low)/2;
    newNode->value = ptr[mid];
    newNode->left = create_tree(ptr, low, mid -1);
    newNode->right = create_tree(ptr, mid + 1, high);
    return newNode;
}

void in_order(struct BinarySearchTree *curr) {
    if (curr == NULL) {
        return;
    }
    in_order(curr->left);
    printf("%d->", curr->value);
    in_order(curr->right);
}
void pre_order(struct BinarySearchTree *curr) {
    if (curr == NULL) {
        return;
    }
    printf("%d->", curr->value);
    pre_order(curr->left);
    pre_order(curr->right);
}
void post_order(struct BinarySearchTree *curr) {
    if (curr == NULL) {
        return;
    }
    post_order(curr->left);
    post_order(curr->right);
    printf("%d->", curr->value);
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    struct BinarySearchTree *root = create_tree(arr, 0, 8);

    printf("\nInorder:");
    in_order(root);
    printf("\n");
    printf("\nPreorder:");
    pre_order(root);
    printf("\n");
    printf("\nPostorder:");
    post_order(root);
    printf("\n");
    return 0;
}