#include <stdio.h>

int size, salary[100],i, j, k, temp, z=10;
void maximumsalary(int salary[], int size);
int concat(int x, int y);

int main() {

system("mode con: cols=60 lines=30");
system("color 02");

for(i=0; i<60; i++) {
    printf("\xb2");
}
printf("\n");
printf(" ---------------------------------------------------------\n");
printf("|                      MAXIMUM SALARY                     |\n");
printf("|                           II                            |\n");
printf(" ---------------------------------------------------------\n");
printf("Enter size of number you want to enter: ");
scanf("%d", &size);

printf("\nInput the elements: \n");
for(j=0; j <=size-1; j++) {
    scanf("%d", &salary[j]);
}
maximumsalary(salary, size);
}

int concat(int x, int y){
    while(y>=z)
        z*=10;
    return (x*z)+y;
}

void maximumsalary(int salary[], int size) {
    for(j=0; j<size; j++) {
        for(k=j+1; k<size; k++) {
            if(concat(salary[j], salary[k])<concat(salary[k], salary[j])){
                temp=salary[j];
                salary[j]=salary[k];
                salary[k]=temp;
            }
        }
    }
     printf("\nThe Maximum Salary are: ");
    for(int j=0; j<size; j++) {
        printf("%d", salary[j]);
    }
    printf("\n\n");
}
