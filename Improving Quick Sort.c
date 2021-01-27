#include <stdio.h>

int main() {

int size, elements[100], i, j, temp;

system("mode con: cols=60 lines=30");
system("color 02");

for(i=0; i<60; i++) {
    printf("\xb2");
}
printf("\n");
printf(" ---------------------------------------------------------\n");
printf("|                 IMPROVING QUICK SORT                    |\n");
printf("|                          II                             |\n");
printf(" ---------------------------------------------------------\n");

printf("\nEnter number of size you want to input: ");
scanf("%d", &size);

printf("\nInput the elements: \n");
for(i=0; i<size; i++) {
    scanf("%d", &elements[i]);
}

for(i=0; i<size; i++) {
        for(j=i+1; j<size; j++) {
            if(elements[i]>elements[j]){
                temp=elements[i];
                elements[i]=elements[j];
                elements[j]=temp;
            }
        }
    }
    printf("\nThe Quick sort of your inputted elements are: ");
    for(int i=0; i<size; i++) {
        printf("%d", elements[i]);
    }
    printf("\n\n");
}
