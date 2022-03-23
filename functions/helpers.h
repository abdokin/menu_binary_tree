#include "../data/struct.h"
#include <stdlib.h>
#ifndef CREATE
#define CREATE 
ptree create(int v){
    ptree binary = (ptree)malloc(sizeof(ptree));
    binary->v = v;
    binary->left = NULL;
    binary->right = NULL;
    return binary;
}

void add_left(int v,ptree father){    
    if(father->left !=NULL) father->left = create(v);
}
void add_right(int v,ptree father){
    if(father->right !=NULL) father->right = create(v);
}
ptree search(int v,ptree l){
  if(l!=NULL){
        if(l->v == v) return l;
    else {
        search(v,l->left);
        search(v,l->right);
    }
  }
}
// print the tree 
void printTree(ptree l){
   if(l !=NULL){
    printf("%d\n",l->v);
    printTree(l->left);
    printTree(l->right);
   }
}
#endif
