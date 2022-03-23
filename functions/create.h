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
#endif
