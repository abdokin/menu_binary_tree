#include "../data/struct.h"
#include <stdlib.h>
//#include <stdlib.h>
#include <stdio.h>

#ifndef HELPERS
#define HELPERS 
ptree create_n(){
    ptree binary = (ptree)malloc(sizeof(ptree));
    if(binary ==NULL ){
        printf("ERROR");
        return NULL;
    }
    binary->value = -1;
    binary->left =(ptree) NULL;
    binary->right = (ptree)NULL;
    binary->father =(ptree)NULL;
    return binary;
}

void add_left(int v,ptree father,int x){    
    ptree q = create_n();
    if(q ==NULL) printf("error allocation the left node");
    q->value = v;
    if(x==1) {father->left = q;
    q->father =father;
    }
    else if(x == 2) {father->right = q;
    q->father =father;
	}else{
		return;
	}
}
ptree up(ptree child,ptree root){
    if(child != root){
        return child->father;
    }else return NULL;
}
ptree down_left(ptree father){
    if(father->left != NULL){
        return father->left;
    }else return NULL;
}
ptree down_right(ptree father){
    if(father->right !=NULL) {
        return father->right;
    }
    return NULL;
}
void level(int v){
	int i;
    for( i=0;i<v;i++){
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
