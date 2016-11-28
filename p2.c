#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void imprimir(int n, char *u);

void main(){

	char *e=NULL;
	int N=10, i=0, j=0, ch;

e=(char*) malloc(N*sizeof(char));
	
	printf("ingrese una cadenad de caracteres:\n");
	
	
	while((ch=getchar()) != '\n'){
	
	*(e+i)=ch;
	j=j+1;
	if(j>9){
	e = (char *) realloc((char *)e,(N+i)*sizeof(char)); 
	printf("%d a %d\n", i-9,i);
	imprimir(i,e);
	j=0;
	}
	i=i+1;
	
	}
	printf("%d\n", i);
	*(e+i)='\0';
	imprimir(i,e);

	
}

void imprimir(int n, char *u){
	int k;

	for(k=0;k<n;k++){
		printf("%c", *(u+k));
	}
	printf("\n");

}

