# include<stdio.h>
#include<stdlib.h>
#include<time.h>

void ingresar(int n, char *u);
void imprimir(int n, char *u);
int i;
int N=10, k=0, j=0, ch;

void main(){

	char *o=NULL, *p=NULL, *q=NULL, **r, ***s=NULL, *c=NULL;
	char  *e=NULL;
	char a=65, b='p';
	char arr[100];
	srand (time(NULL));
	int n;

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
	imprimir(i,e);
	o = &(arr[0]);
	
	p = &a;
	q = &b;
	
	r = &p;
	
	s = &r;
	
	printf("	%c\n",a );
	printf("	%c\n",*p );
	
	printf("	%c\n",b );
	printf("	%c\n",*q );
	
	printf("	%c\n",**r );
	printf("	%c\n",***s );



	printf("ingrese tamaño;");
	scanf("%d",&n);	
	//if (n == 0) exit(-1);//salir del programa
	o = &(arr[0]);	
	printf("CON ARREGLO:\n");
	ingresar(n, arr);	
	printf("%s\n",arr);
	printf("CON PUNTERO:\n");
	ingresar(n, o);
	imprimir(n, o);
	printf("CON MEMORIA DINAMICA:\n");
	c = (char *) malloc(n*sizeof(char));
	ingresar(n, c);
	imprimir(n, c);
	
	
	
	
	

	
}



void ingresar(int n,char *u){

	for(k=0;k<n;k++){
		*(u+k)=rand()%26 + 65;
	}

}

void imprimir(int n, char *u){


	for(k=0;k<n;k++){
		printf("%c", *(u+k));
	}
	printf("\n");

}




















