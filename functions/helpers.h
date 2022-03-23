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
// void add_right(int v,ptree father){
//     // if(father->right ==NULL) 
//     ptree q = create_n();
//     if(q ==NULL) printf("error allocation the left node");
//     q->value = v;
//     printf("p =%d\n",q->value);
    
//     father->right = q;
// }
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
// print the tree 
void level(int lev){
    for (int i = 0; i < lev; i++)
    {
        printf("\t");
    }
    
}
void printTree_rec(ptree l,int lev){
    if(l == NULL){
        level(lev);
        printf("----<empty>---\n");
        return;
    }
    level(lev);
    printf("%d\n",l->value);
    level(lev);
    printf("left\n");
    lev++;
    if(l->left != NULL) printTree_rec(l->left,lev);
    else  
    {
        level(lev);
        printf("NULL\n");
        return;
    }
    level(lev);
    printf("right:\n");
    level(lev);
    if(l->right != NULL) printTree_rec(l->right,lev);
    else  
    {
        level(lev);
        printf("NULL\n");
        return;    }    
}
void printTree(ptree l){
    printTree_rec(l,0);
}
#endif
