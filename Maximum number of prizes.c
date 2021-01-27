#include <stdio.h>
#include <math.h>


int main(){
int k;
system("mode con: cols=60 lines=30");
system("color 02");

for(k=0; k<60; k++) {
    printf("\xb2");
}
printf("\n");
printf(" ---------------------------------------------------------\n");
printf("|                 MAXIMUM NUMBER OF PRIZES                |\n");
printf("|                           II                            |\n");
printf(" ---------------------------------------------------------\n");

int input,minus,ans=0,count=0,i=1,j=0,arr[10];

printf("\nPlease enter candy fund: ");
scanf("%d", &input);
minus=input;
    while(ans<minus){
            minus= minus-i;
            if(i<minus){

            arr[j]= i;
            ans= arr[j];
            count++;
            i++;
            j++;}
            else{
                arr[j]=i+minus;
                ans= arr[j];
                 count++;
                 goto xy;
            }
        }
    xy:
printf("\noutput is: %d\n",count);

for(i=0;i<count;i++){
    printf("%d ",arr[i]);
    }
    printf("\n");
}
