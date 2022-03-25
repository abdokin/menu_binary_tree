#include "../data/struct.h"
#include <stdlib.h>
#include <stdlib.h>


#ifndef HELPERS
#define HELPERS 
ptree create_n(){
    ptree binary = (ptree)malloc(sizeof(ptree));
    binary->value = 0;
    // binary->left = NULL;
    // binary->right = NULL;
    return binary;
}

void add_left(int v,ptree father,int x){    

    ptree q = create_n();
    if(q ==NULL) printf("error allocation the left node");
    q->value = v;
    if(x==1) {father->left = q;
    printf("done creating the left\n");
    }
    else {father->right = q;
    }

}
ptree search(int v,ptree l){
  if(l!=NULL){
        if(l->value == v) return l;
    else {
        search(v,l->left);
        search(v,l->right);
    }
  }
  return NULL;
}
void level(int v){
    for(int i=0;i<v;i++){
        printf("\t");
    }
}

void printTree(ptree l,int v){
    if(l == NULL ){
        level(v);
        printf("NULL\n");
        return;
    }
    printf("%d\n", l->value);

    if( l->right != NULL && l->left !=NULL){
            level(++v);
            printf("left :");
            printTree(l->left,v);
            level(v);
            printf("right :");
            printTree(l->right,v);
    }else if ( l->right ==NULL && l->left ==NULL  ){
            level(++v);
            printf("left NULL\n");
             level(v);
            printf("right NULL\n");
    }else{
           if(l->left == NULL){
            level(++v);
            printf("left null \n");
            level(v);
            printf("right :");
            printTree(l->right,v);
    }
    if(l->right == NULL){
        level(++v);
        printf("right null\n");
        level(v);
        printf("left :");
        printTree(l->left,v);
    }
    }
}

#endif
