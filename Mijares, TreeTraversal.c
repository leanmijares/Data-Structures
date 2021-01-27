#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

/* SAMPLE OUTPUT
 Display tree

              20
             /  \
            10   21
           /
          8
         /
        5

Pre order: 20 10 8 5 21
In order: 5 8 10 20 21
Postorder: 5 8 10 21 20
*/

struct node {
    int value;
    struct node *left, *right;
}*root=NULL;

struct node * insert(struct node *newnode, int data) {
    if(newnode==NULL) {
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->value=data;
        newnode->left=NULL;
        newnode->right=NULL;
    }
    else if(data < newnode->value)
        newnode->left=insert(newnode->left, data); /* Get the data for left node */
    else if (data > newnode->value)
        newnode->right=insert(newnode->right,data); /* Get the data for right node */

    return newnode;
}

void inorder(struct node *root);
void preorder(struct node *root);
void postorder(struct node *root);
int endprogram();

int main(){

system("mode con: cols=60 lines=30");
int num_node, r, i, choices, left, right;

printf("\n");
printf(" ---------------------------------------------------\n");
printf("|                   TREE TRAVERSAL                  |\n");
printf("|                    LEAN MIJARES                   |\n");
printf(" ---------------------------------------------------\n");

 printf("\n\nHow many nodes do you want to enter? ");
    scanf("%d",&num_node);

    printf("\nEnter root: ");
    scanf("%d", &r);
    root=insert(root, r);

for(i=1;i<num_node;i++){
    printf("\nEnter [1] for left nodes, Enter [2] for right nodes\n");
    scanf("%d", &choices);

  switch(choices) {
    case 1: {
        printf("\nEnter left nodes: ");
        scanf("%d", &left);
        root=insert(root, left);
        break;
    }

    case 2: {
        printf("\nEnter right nodes: ");
        scanf("%d", &right);
        root=insert(root, right);
        break;
    }

    default: {
        system("cls");
        printf("Wrong input of choices! "); Sleep(600);
        main();
        break;
    }
  }
}

printf("\nPreorder Traversal: ");
preorder(root); //Calling the function pre order to print the traversal sequence

printf("\nInorder Traversal: ");
inorder(root); //Calling the function in order to print the traversal sequence

printf("\nPostorder Traversal: ");
postorder(root); //Calling the function postorder to print the traversal sequence

printf("\n\n");
endprogram();
return 0;
}

int endprogram() {

char c;
printf("\nDo you want to enter again? [Y/N]: ");  /* Instructions if user wants to repeat again program or exit */
scanf(" %c", &c);
switch(c) {
    case 'Y':
    case 'y':
    main();
    break;

    case 'n':
    case 'N':
    system("cls");
    printf("\n\n\t\t\t Exiting\n\n\n\n");
    Sleep(200);
    printf("\n\n\n\n\n\n\n");
    exit(0);
    break;
}
}

void inorder(struct node *root){      /* For printing the in order traversal LEFT NODE->VALUE->RIGHT NODE */
    if(root!=NULL){
        inorder(root->left);
        printf("%d -> ",root->value);
        inorder(root->right);
    }
}

void preorder(struct node *root){      /* For printing the pre order traversal VALUE->LEFT NODE->RIGHT NODE */
    if(root!=NULL){
        printf("%d -> ",root->value);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root){   /* For printing the post order traversal LEFT NODE->RIGHT NODE->VALUE */
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d -> ",root->value);
}
}
