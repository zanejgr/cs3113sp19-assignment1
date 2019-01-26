#include <stdio.h>
#include <stdlib.h>
int main(int argc,char*argv[]){
	char c = *argv[2];
	for(int i = 0; i < atoi(argv[1])-1;i++){
		for(int j = 0; j < atoi(argv[1])-1-i;j++){
			putchar(' ');
		}
		for(int j = 0; j < i;j++){
			putchar(c);
		}
		putchar(c);
		for(int j = 0; j < i;j++){
			putchar(c);
		}
		putchar('\n');
	}
	for(int i = atoi(argv[1]);i>0;i--){
		for(int j = 0; j < atoi(argv[1])-i;j++){
			putchar(' ');
		}for(int j = 0; j < i-1; j++){
			putchar(c);
		}
		putchar(c);
		for(int j = 0; j < i-1; j++){
			putchar(c);
		}
		putchar('\n');
	}
}
