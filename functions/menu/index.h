#ifndef MENU
#define MENU
void choices(){
    printf("Menu items select one by enetering valide integer :] \n");
    printf("create the tree                 :1\n");
    printf("create left  child              :2\n");
    printf("create right child              :3\n");
    printf("create remove  child            :4\n");
    printf("exit programme                  :5\n");
} 
int menu(){
    int choice;
    choices();
    scanf("%d",&choice);
    while(choice <1 || choice >5){
        printf(" enter valide number of choice :| \n");
        choices();
        scanf("%d",&choice);
    }
    return choice;
}
#endif