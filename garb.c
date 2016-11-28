#include <stdio.h>
#include <stdlib.h>

void ingresar(char *x);

void main(){
	char **c=NULL, *d=NULL, *e=NULL, *f=NULL;

	c=(char **) malloc(5*sizeof(char*));
	d=(char *) malloc(5*sizeof(char));
	e=(char *) malloc(5*sizeof(char));
	f=(char *) malloc(5*sizeof(char));
	
	*(c+0)=d;
	*(c+1)=e;
	*(c+2)=f;

	ingresar(*(c+0));
	printf("%s\n",d);
	free(d);
	
	ingresar(*(c+1));
	printf("%s\n",e);
	free(e);
	
	ingresar(*(c+2));
	printf("%s\n",f);
	free(f);	
	free(c);
	}
	
void ingresar(char *x){
	
	int i=0;
	char ch;

	printf("ingrese valor: ");
	while( (ch=getchar()) != '\n'){
		*(x+i)=ch;
		i++; 
		x=(char*)realloc(x,(i+1)*sizeof(char));
	}
	
	*(x+i)='\0';
	i=0;
}

