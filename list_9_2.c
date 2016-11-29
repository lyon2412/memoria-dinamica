#include<stdio.h>
#include<stdlib.h>
#define N 10

int i=0, j=0;
void ingresar(char *x);
void ordenar_M_(char *x);
void ordenar_m_(char *x);
char *fun(char *x, char*y, char*z);

void main(){

	char *a=NULL, *b=NULL, *c=NULL, *d=NULL;
	
	//a = (char*)malloc(N*sizeof(char));
	//b = (char*)malloc(N*sizeof(char));
	//c = (char*)malloc(N*sizeof(char));
	
	ingresar(a);
	ingresar(b);
	ingresar(c);
	
	//ordenar_m_(a);
	//ordenar_m_(b);
	//ordenar_M_(c);
		
	d=fun(a,b,c);
	
	printf("%s\n",d);
	
	ordenar_m_(d);

	printf("%s\n",d);

free(a);
free(b);
free(c);
free(d);
}

void ingresar(char *x){
	char ch;
	x = (char*)malloc(N*sizeof(char));
	printf("ingrese numeros naturales:\n");
	while((ch=getchar())!='\n'){
	if(j>9){
		x = (char *)realloc(x,(N+i)*sizeof(char)); 
		j=0;
	}
	*(x+i) = ch;
	i++;   
	j++;
	}	
}

void ordenar_m_(char *x){	
	int k=1, aux, l;
	for(k=1;*x != '\0';k++){
		for(l=k;*x != '\0';l++){
			if(*(x+l)<*(x+k-1)){
				aux=*(x+l);
				*(x+l)=*(x+k-1);
				*(x+k-1)=aux;
			}
		}
	}		
}
void ordenar_M_(char *x){	
	int k=1, aux, l;
	for(k=1;*x != '\0';k++){
		for(l=k;*x != '\0';l++){
			if(*(x+l)>*(x+k-1)){
				aux=*(x+l);
				*(x+l)=*(x+k-1);
				*(x+k-1)=aux;
			}
		}
	}		
}

//int long(char *x){
		

char *fun(char *x, char*y, char*z){
	char *a;
	int r=0;
	 								 printf("1\n");
	a = (char*)malloc(N*sizeof(char));
									 printf("2\n");
	
	ordenar_m_(x);
	ordenar_m_(y);
	ordenar_M_(z);
	
	printf("3\n");
	
	while(*(x+i) != '\0'){
		printf("3-0\n");
		if(j>9){
		printf("3-1\n");
			a = (char *)realloc(a,(N+i)*sizeof(char)); 
			j=0;
		printf("3-2\n");	
		}
		printf("3-3\n");
		*(a+r)=*(x+i);
		r++;
		i++;   
		j++;
		printf("3-4\n");
	}
			 							printf("4\n");
	r++;
	j=0;
	i=0;
	while(*(y+i) !='\0'){
		if(j>9){
			a = (char *)realloc(a,(N+i)*sizeof(char)); 
			j=0;
		}
		*(a+r)=*(y+i);
		r++;
		i++;   
		j++;
	}
			 							printf("5\n");
	r++;
	j=0;
	i=0;
	while(*(z+i) !='\0'){
		if(j>9){
			a = (char *)realloc(a,(N+i)*sizeof(char)); 
			j=0;
		}
		*(a+r)=*(z+i);
		r++;
		i++;   
		j++;
	}
			 							printf("6\n");
	*(a+r)='\0';
	
	return a;
}

	

















		
