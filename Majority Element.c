#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int major,i,input,size,j,count;
float check;

int main(){
system("mode con: cols=60 lines=30");
system("color 02");

for(i=0; i<60; i++) {
    printf("\xb2");
}
printf("\n");

printf(" ---------------------------------------------------------\n");
printf("|                    MAJORITY ELEMENT                     |\n");
printf("|                          II                             |\n");
printf(" ---------------------------------------------------------\n");

printf("\nEnter number of inputs: ");
scanf("%d", &size);
int arr[size];
printf("\nYour inputs:\n");

    for(i=0;i<size;i++){
        scanf("%d",&input);
        arr[i]= input;
    }
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=0;j<size;j++)
        {       if (arr[j]==arr[i]){
                count=count+1;
                }
        }   check =size/2.0;
                if(count>check){
                 printf("\n1 Majority Element");
                 printf("\n\n");
                exit(0);
               }
    }
    printf("\n0 Majority Element\n\n");
}
