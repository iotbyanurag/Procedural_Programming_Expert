#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
}Node_t;
/*
    insert data into tree
*/


struct Node* newNode(int data){

    Node_t *node= (Node_t *)malloc(sizeof(int));

    node->left= NULL;
    node->right=NULL;
    node->data= data;

    return node;
}

void printInOrder(struct Node* node ){
    if(node==NULL)  return;
    printInOrder(node->left);
    printf("%d\t",node->data);
    printInOrder(node->right);
}

int main(int argc, char *argv[]){
     struct Node* root = newNode(1);

     /* add the child nodes manually*/

     root->left= newNode(2);
     root->right= newNode(3);
     root->left->right= newNode(4);
     root->left->right= newNode(5);

    printInOrder(root);

    return 0;
}