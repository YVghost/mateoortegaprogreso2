#include <stdio.h>
#include <math.h>

float ingreseComponente(char comp, float i){
    float a;
    printf("Ingrese la componente %c del punto %d ",comp,i);
    scanf("%f",&a);
    return a;
}


float calcularDistancias(float x1, float y1, float z1,float x2, float y2, float z2){

    float distancia = sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
    return distancia;
}
    

float calcularVolumen(int cono1[3][3]){
    float radio = calcularDistancias(cono1[0][0], cono1[0][1],cono1[0][2],cono1[1][0],cono1[1][1],cono1[1][2]);
    float altura = calcularDistancias(cono1[0][0], cono1[0][1],cono1[0][2],cono1[2][0],cono1[2][1],cono1[2][2]);
    return (3.14*pow(radio,2)*altura)/3;
}

void imprimirVolumenArea(float volumen1, float volumen2, int cono1[3][3], int cono2[3][3]){

    float radio = calcularDistancias(cono1[0][0], cono1[0][1],cono1[0][2],cono1[1][0],cono1[1][1],cono1[1][2]);
    float altura = calcularDistancias(cono1[0][0], cono1[0][1],cono1[0][2],cono1[2][0],cono1[2][1],cono1[2][2]);
    float R2 = ((altura/2)*radio)/altura;

    float volumen = (3.14*pow(radio,2)*altura)/3;
    float volumenT = (3.14*(altura/2)*(R2*R2+radio*radio+(R2*radio)))/3;
    float volumenI = 2*(volumen1 - volumenT);

    printf("%f",volumenI);

}

    