#include <stdio.h>
#include "data/struct.h"
#include "functions/helpers.h"

#include <stdlib.h>

int main(){
    printf("im working ...\n");
    ptree l = create_n();
    l->value = 0;
    add_left(20,l,1);
    add_left(2,l,2);
    add_left(10,l->left,1);
    add_left(20,l->left,2);
    add_left(30,l->right,1);
    add_left(40,l->right,2);
    // add_right(2,l);
    printTree(l);
    printf("done ");
    return 0;
}