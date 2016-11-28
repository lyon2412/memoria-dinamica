#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int N, i, j, ch;
char *e=NULL;
void imprimir(int n, char *e);
int ingresar_var(char *u);

void main(){

	
	int n;

    n=ingresar_var(e);
    
	//imprimir(n,e);
printf("%s\n",e);
	
}

void imprimir(int n, char *u){
	int k;

	for(k=0;k<n;k++){
		printf("%c", *(u+k));
	}
	printf("\n");

}
int ingresar_var(char *e){


N=10;
i=0;
j=0;
e=(char*) malloc(N*sizeof(char));
	
	printf("ingrese una cadenad de caracteres:\n");
	
	
	while((ch=getchar()) != '\n'){
	
	*(e+i)=ch;
	j=j+1;
	if(j>9){
	e = (char *) realloc((char *)e,(N+i)*sizeof(char)); 
	printf("%d a %d\n", i-9,i);
	j=0;
	}
	i=i+1;
	
	}
	printf("%d\n", i);
	*(e+i)='\0';

return i;
}
