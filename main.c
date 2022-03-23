#include <stdio.h>
#include "data/struct.h"
#include "functions/helpers.h"

#include <stdlib.h>
int main(){
    printf("im working ...");
    ptree l = create(1);
    add_left(2,l);
    add_right(2,l);
    printTree(l);
    printf("done ");
    return 0;
}