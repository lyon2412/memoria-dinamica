#include<stdio.h>
#include<stdlib.h>
#define N 10
int i=0, j=0;
void ingresar(char *x);
void ordenar(char *x);

void main(){
char *c=NULL;
c = (char*)malloc(N*sizeof(char));
	ingresar(c);
	printf("%d\n",i);
	printf("%s\n",c);
	c = (char*) realloc(c,(i+1)*sizeof(char));
	ordenar(c);
	printf("%s\n",c);
}

void ingresar(char *x){
	char ch;
	printf("ingrese numeros naturales:\n");
	while((ch=getchar())!='-'){
	if(j>9){
		x = (char *)realloc(x,(N+i)*sizeof(char)); 
		j=0;
	}
	*(x+i) = ch;
	i++;   
	j++;
	}	
}

void ordenar(char *x){	
	int k=1, aux, l;
	for(k=1;k<i;k++){
		for(l=k;l<i;l++){
			if(*(x+l)<*(x+k-1)){
				aux=*(x+l);
				*(x+l)=*(x+k-1);
				*(x+k-1)=aux;
			}
		}
	}		
}
