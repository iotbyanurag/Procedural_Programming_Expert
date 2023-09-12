#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int key;
    char value[50];
    struct node* next;
} node_t;

node_t *hashTable[10] = {NULL};  // Initialize all pointers to NULL
char* retrieveValuesFromHashTable(int key);
void retrieveValuesFromHashTableChained(int key, char output[][50], int *count);
void printHashTable();
int hashFunction(int key);
int insertDataIntoHashTable(int key, char *name);
char* val;

int main(int argc, char *argv[]){

    insertDataIntoHashTable(22, "xyz");
    insertDataIntoHashTable(23, "abc");
    insertDataIntoHashTable(24, "def");
    insertDataIntoHashTable(25, "cvn");
    insertDataIntoHashTable(25, "tttttt");
    insertDataIntoHashTable(25, "tttttt");
   
    printf("\n");
    printHashTable();
    val= retrieveValuesFromHashTable(23);
    char *val1= retrieveValuesFromHashTable(25);

    printf("retrieved val is %s\n", val);
    printf("retrieved val1 is %s\n", val1);

    char output[10][50];  // Assuming a maximum of 10 chained nodes
    int count = 0;
    retrieveValuesFromHashTableChained(25, output, &count);

    printf("Retrieved values for key 25:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", output[i]);
    }
}

int hashFunction(int key) {
    return key % 10;
}

int insertDataIntoHashTable(int key, char *name){

    node_t *new_node = malloc(sizeof(node_t));
     if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    int index = hashFunction(key);
    printf("calculated index is %d\n", index);

    new_node->key= key;
    strcpy(new_node->value,name);
    new_node->next = NULL;

    // data got inserted till here 
    // now we need placcement of nodes - in contiguous order 

    if(hashTable[index] == NULL){
        hashTable[index] = new_node;
    }
    else{
        node_t *temp = hashTable[index];
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void printHashTable(){
    printf("\n");
    for(int i = 0; i < 10; i++){
        node_t *temp = hashTable[i];
        printf("Index %d: ", i);
        while(temp != NULL){
            printf("%s -> ", temp->value);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}


char* retrieveValuesFromHashTable(int key){
    int index= hashFunction(key);

     node_t *current_node= hashTable[index];

     while(current_node != NULL){
        if(current_node->key == key){
            return current_node->value;
        }
        current_node= current_node->next;
     }
     return NULL;
}

void retrieveValuesFromHashTableChained(int key, char output[][50], int *count){
    int index = hashFunction(key);
    node_t *temp = hashTable[index];
    *count = 0;
    while (temp != NULL) {
        if (temp->key == key) {
            strcpy(output[*count], temp->value);
            (*count)++;
        }
        temp = temp->next;
    }
}