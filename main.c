#include <stdio.h>
#include "data/struct.h"
#include "functions/helpers.h"
#include "functions/menu/index.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
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
                printf("Dump tree to gv file for visualsation  \n");
                FILE *ptr = fopen("data/tree-graph.gv","w");
                // printTree(root,0,ptr);
                fprintf(ptr,"digraph G {\n");
                dumpTree(root,ptr);
                fprintf(ptr,"}\n");
                fclose(ptr);
                printf("file saved to data/tree-graph.vg\n");
                system("dot -Tpng data/tree-graph.gv -o file.png");
                break;
            case 5:
                printf("going to the father of this child \n");
                ptree p2=up(curr_father,root);
                if(p2 != NULL ) curr_father =p2;else printf("error going up to the father try again\n");
                break;
            case 6:
                printf("going to the father of this child \n");
                ptree p =down_left(curr_father);
                if (p !=NULL) curr_father = p;else printf("the left child already NULL");
                break;
            case 7:
                printf("going to the father of this child \n");
                ptree p1 =down_right(curr_father);
                if (p1 !=NULL) curr_father = p1;else printf("the rightÆ» child already NULL");
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
    return 0;
}
