#include<stdio.h>
#include <stdlib.h>

struct list{
    int data;
    struct list *e;

}*q, *newpt, *temp;

struct list *f=NULL;
int choice, element; //global variable to access

int secondmain() {

    printf("\n\n");
    printf("\t\t\tMenu\n\n");
    //after printing one, another comes after 0.4 seconds
    echo("\t\t[1]. Insert\n"); Sleep(400);
    echo("\t\t[2]. ExtractMax\n"); Sleep(400);
    echo("\t\t[3]. Display\n"); Sleep(400);
    echo("\t\t[4]. Exit\n"); Sleep(400);

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice );

    switch(choice) {
    case 1: {
        insert_queue(); /*Fetching the function insert so that user can insert data to queue*/

        printf("\nPlease Enter Any Key to Go to Main Menu");
        getch();
        system("cls"); //clears the screen
        secondmain(); //Go back to menu
        break;
    }
    case 2: {
        extract_max();

        printf("\nPlease Enter Any Key to Go to Main Menu");
        getch();
        system("cls"); //clears the screen
        secondmain(); //Go back to menu
        break;
    }
    case 3: {
        display_queue(); /*Fetching the function to display the data queue*/

        printf("\nPlease Enter Any Key to Go to Main Menu");
        getch();
        system("cls"); //clears the screen
        secondmain(); //Go back to menu
        break;
    }
    case 4: {
        ext(); /*Fetching the function to exit the program*/
        break;
    }
    default: {
        printf("Invalid input of key\n");
        printf("Please Try Again"); Sleep(600);//after printing one, another comes after 0.6 seconds
        system("cls");
        secondmain();
        break;
    }
    }
}

/* Inserting data to queue */
void insert_queue() {

    typedef struct list t;
    newpt=(t*)malloc(sizeof(t));

    printf("Enter data to be queue:\t");
    scanf("%d",&element);

    newpt->data=element;
    newpt->e=NULL;

    if(f==NULL ){
        f=newpt;
    }
    else if(f!=NULL && element >= f->data){
        newpt->e=f;
        f=newpt;
    }
    else {
        q=f;
        while(q->e != NULL && q->e->data >= element){
            q=q->e;
        }
        newpt->e=q->e;
        q->e=newpt;
    }
}

/* Function to check if the data queue is empty*/
int queuechecker(){
    if (f == NULL)
        return 1; //return true
    else
    return 0; // return false
}

/* Function to remove the maximum value */
void extract_max(){
    if(queuechecker()){
        printf("\nQueue is empty, Please insert data\n");
    }
    else{
        newpt=f;
        printf("\n%d is extracted\n",newpt->data);
        f=f->e;
    }
}

/* Display the data queue after extracting the max in descending order*/
void display_queue(){
    temp=f;
    if(queuechecker()) {
        printf("\nQueue is empty, Please insert data\n");
    }
    else {
    if(temp!=NULL)
        printf("\nElements present in Queue are: ");
        for(temp=f; temp!=NULL; temp=temp->e){
        printf("%d ",temp->data);
    }
    printf("\n\n");
    }
}

/* Exiting the Program */
void ext(){

    system("cls"); //clears the screen after printing exit
    printf("\n\n\t\t Exiting the Program");
    for(int i=1; i<=10; i++){
        Sleep(100);printf(".");//after printing one, another comes after 0.1 seconds
    }
    printf("\n\n\n\n\n\n\n");
    exit(0);

}

/* Print the menu with echo style */
void echo(char print[]){
	printf("%s",print);
}

int main() {
  system("mode con: cols=60 lines=30"); //Layout the MS-DOS width and length

    printf("\n\n\n");
    printf("\t--------------------------------------------\n");
    printf("\t|                                           |\n");
    printf("\t|            Priority and Queue             |\n");
    printf("\t|                                           |\n");
    printf("\t|               LEAN MIJARES                |\n");
    printf("\t--------------------------------------------\n");

    printf("\n\n\n\n\n\tPlease Enter Any Key to Continue");
    for(int i=0; i<5; i++){
        printf("."); Sleep(500);//after printing one, another comes after 0.5 seconds
    }

    getch();
    system("cls");//clears the screen
    secondmain(); //Fetching the function second main to view the menu
}
