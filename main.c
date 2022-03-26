#include <stdio.h>
#include "data/struct.h"
#include "functions/helpers.h"
#include "functions/menu/index.h"
#include <stdlib.h>

int main(){
    printf("im working ...\n");
    ptree root = create_n(),curr_father=root;
    int choice = menu(),v;
    printf("you choose :%d\n",choice);
    while(choice !=9){
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
                printf(" the current parent is %d\n",curr_father->value);
                printf("please eneter value of the left child  :");
                scanf("%d",&v);
                add_left(v,curr_father,1);
                printf("child added on the left with value %d\n",curr_father->left->value);
                break;
            case 3:
                printf("creating the right child\n");
                 printf("creating left child\n");
                printf(" the current parent is %d\n",curr_father->value);
                printf("please eneter value of the left child  :");
                scanf("%d",&v);
                add_left(v,curr_father,2);
                printf("child added on the right with value %d\n",curr_father->right->value);
                break;
            case 4:
                printf("printing the tree \n");
                printTree(root,0);
                break;
            case 5:
                printf("going to the father of this child \n");
                curr_father =up(curr_father,root);
                break;
            case 6:
                printf("going to the father of this child \n");
                ptree p =down_left(curr_father);
                if (p !=NULL) curr_father = p;else printf("the left child already NULL");
                break;
            case 7:
                printf("going to the father of this child \n");
                ptree p =down_right(curr_father);
                if (p !=NULL) curr_father = p;else printf("the rightÆ» child already NULL");
                break;
            case 8:
                printf("the current father is %d \n", curr_father->value);
                break;
            case 9:
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
