#include<stdio.h>
#include<windows.h>


void loadingbar(){
	for (int i=10;i<=100;i+=8){
		system("cls");

		printf("\n\n\n\n\t\t\t%d %% Loading...",i);
		printf(" ");

		for (int j=0; j<i;j+=2){
			printf("");
		}
		Sleep(100);
    }
}

int main(){

    system("mode con: cols=70 lines=20");
    loadingbar();

 	int r, c, rows, columns, matrix_a[50][50], matrix_b[50][50], equal=1;
    system("cls");
 	printf("Please Enter Number of rows for matrix: ");
 	scanf("%d", &r);
 	printf("Please Enter Number of column for matrix: ");
 	scanf("%d", &c);

 	printf("\nEnter elements in matrix A of size %d x %d: \n", r, c);
 	for(rows = 0; rows < r; rows++) {
   		for(columns = 0;columns < c;columns++) {
      		scanf("%d", &matrix_a[rows][columns]);
    	}
  	}

 	printf("\nEnter elements in matrix A of size %d x %d: \n", r, c);
 	for(rows = 0; rows < r; rows++){
   		for(columns = 0;columns < c;columns++){
      		scanf("%d", &matrix_b[rows][columns]);
    	}
  	}

 	for(rows = 0; rows < r; rows++){
   		for(columns = 0;columns < c;columns++){
      		if(matrix_a[rows][columns] != matrix_b[rows][columns]){
			  	equal = 0;
			  	break;
			}
   	 	}
  	}
 	if(equal == 1){
 		printf("\nMatrix A is equal to Matrix B\n");
	}
	else{
		printf("\nMatrix A is not equal to Matrix B\n");
	}

	printf("\n\nEnter again? Press Enter");
	printf("\nPress any key if you want to exit");
	if(getch()==13){
        system("cls");
        main();
	}
	else {
        printf("\n\n\n");
        exit(0);
	}
 	return 0;
}

