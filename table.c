#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char table[1000][1000][30]; 

int main(){
	int valueCount;
	printf("how many data points are there: ");
	scanf("%d", &valueCount);
	for (int i = 0; i < valueCount; i++){
		char name[30];
		printf("name for collum %d: ", i);
		scanf("%s", name); 
		strcpy(table[0][i], name);
	}	
	
	char input[30];
	int counter = 1;
	while (0 == 0){
		for (int i = 0; i < valueCount; i++){
			printf("%s: ", table[0][i]);
			scanf("%s", input);
			if (strcmp("END", input) == 0){ break; }
			strcpy(table[counter][i], input); 
		}
		if (strcmp("END", input) == 0){ break; }
		counter++;
	}

	FILE *fptr = fopen("./raw", "w");



	for (int i = 0; i < counter; i++){
		for (int j = 0; j < valueCount; j++){
			if (j != valueCount - 1){
				fprintf(fptr, "%s:", table[i][j]);
			}else{
				fprintf(fptr, "%s\n", table[i][j]);
			}
		}

	}
	fclose(fptr);
	return 0;
}
