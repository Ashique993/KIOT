#include <stdio.h>
#include <string.h>
int main(){
	char name[50];
	scanf("%s",name);
	
	for(int i=0;i<strlen(name);i++){
		for(int j=0;j<strlen(name);j++){
			if(i==0 || i==strlen(name)-1 || i+j==strlen(name)-1){
				printf("%c ",name[j]);
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
