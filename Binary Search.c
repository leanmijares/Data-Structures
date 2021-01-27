#include <stdio.h>
#include <math.h>

int main(){
int i,size,csize,j;
system("mode con: cols=60 lines=30");
system("color 02");

for(i=0; i<60; i++) {
    printf("\xb2");
}
printf("\n");
printf(" ---------------------------------------------------------\n");
printf("|                      BINARY SEARCH                      |\n");
printf("|                           II                            |\n");
printf(" ---------------------------------------------------------\n");

    printf("Enter size of an array: ");
    scanf("%d", &size);
    int arr[size];
    printf("\nInput elements:\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nEnter size of an array you want to check: ");
    scanf("%d",&csize);
    int check[csize],output[csize];
    printf("\nInput key elements:\n");
    for(i=0;i<csize;i++){
        scanf("%d",&check[i]);
    }

    printf("\n");
    for(i=0;i<csize;i++){
        for(j=0;j<size;j++){
            if(arr[j]==check[i]){
                output[i]=j;
                break;
            }
            else{
                output[i]=-1;
            }
        }
    }
     printf("Output: ");
     for(i=0;i<csize;i++){
        printf("%d ",output[i]);
    }
    printf("\n\n");
}
