#include <stdio.h>

//PROTOTIPOS
void rellenaManual(int v[]);
void invierteVectores(int v[],int v2[]);
void imprimeVector(int v[], int v2[]);

int main() {
    int vector[10], vectorInverso[10];
    rellenaManual(vector);
    invierteVectores(vector,vectorInverso);
    imprimeVector(vector,vectorInverso);
    return 0;
}

void rellenaManual(int v[]){
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("Introduce el valor %d: ",i+1);
        scanf("%d",&v[i]);
        fflush(stdin);
    }
}

void invierteVectores(int v[],int v2[]){
    for (int i = 9; i >= 0 ; i--) {
        v2[-(i-9)]=v[i];
    }
}

void imprimeVector(int v[], int v2[]){
    printf("\nContenido del vector original: ");
    for (int i = 0; i < 10; ++i)
        printf("%d ",v[i]);
    printf("\n\nContenido del vector invertido: ");
    for (int i = 0; i < 10; ++i)
        printf("%d ",v2[i]);
}