#include <stdio.h>
#include "data/struct.h"
#include "functions/helpers.h"
#include "functions/menu/index.h"
#include <stdlib.h>

int main(){
    printf("im working ...\n");
    ptree root = create_n(),curr_left=root,curr_right=root;
    int choice = menu(),v;
    printf("you choose :%d\n",choice);
    while(choice !=5){
        switch(choice){
            case 1:
                printf("creating the root of the tree\n");
                printf("please eneter value of the root :");
                scanf("%d",&v);
                root->value = v;
                printf(" root created with value :%d\n",root->value);
                break;
            case 2:
                printf("creating left child\n");
                printf(" the current parent is %d",curr_left->value);
                printf("please eneter value of the left child  :");
                scanf("%d",&v);
                add_left(v,curr_left,1);
                curr_left = curr_left->left;
                printf("child added on the left with value %d",curr_left->value);
                break;
            case 3:
                printf("creating the right child\n");
                 printf("creating left child\n");
                printf(" the current parent is %d",curr_right->value);
                printf("please eneter value of the left child  :");
                scanf("%d",&v);
                add_left(v,curr_right,2);
                curr_right = curr_right->right;
                printf("child added on the right with value %d",curr_right->value);
                break;
            case 4:
                printf("printing the tree \n");
                printTree(root,0);
                break;
            case 5:
                printf("bye for the next time :\n");
                break;
            default:
                break;
        }
        choice = menu();
    }
    
  
    // add_left(2,l,2);
    // add_left(3,l->left,1);
    // add_left(4,l->left,2);
    // add_left(5,l->right,1);
    // add_left(7,l->right,2);
    // add_right(2,l);
    // printTree(l,0);
    // printf("done ");
    return 0;
}