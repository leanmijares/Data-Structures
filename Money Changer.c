#include <stdio.h>

int count,div,i,input,coin,arr[3]={1,5,10};

int main(){

system("mode con: cols=60 lines=30");
system("color 02");

for(i=0; i<60; i++) {
    printf("\xb2");
}
printf("\n");
printf(" ---------------------------------------------------------\n");
printf("|                      MONEY CHANGER                      |\n");
printf("|                           II                            |\n");
printf(" ---------------------------------------------------------\n");

printf("\nPlease enter your money: ");
scanf("%d", &input);
coin=input;

    for(i=2;i>=0;i--){
        div=coin/arr[i];
        coin = coin%arr[i];
        count= count+div;
    }
    printf("\nThe Minimum number of coins is: %d", count);
    printf("\n\n");
}
