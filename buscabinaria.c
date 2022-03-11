#include <stdio.h>
#include <stdlib.h>
#include "buscabinaria.h"
#define PI 3.1415

double busca(Copo copo, float bebida, double esq, double dir){
    
    double meio = ( esq + dir ) /2.0;

    copo.H = meio;
    float volumeCopo = calculaVolume(copo);
    if(volumeCopo == bebida){
        printf("%.2lf\n", meio);
        return meio;
    }
    if(dir == esq || meio == 0)
        return 0;

    if (volumeCopo > bebida){
        busca(copo, bebida, esq, meio);
    }
    else{
        busca(copo, bebida, meio, dir);
    }
}

double calculaVolume(Copo copo){
    double raioMaior;
    if(copo.R > copo.r)
        raioMaior = (((copo.R - copo.r) * copo.H) / copo.h) + copo.r;
    
    else if(copo.R == copo.r)
        return PI * (copo.r * copo.r) * copo.H;
    
    return (PI * copo.H * ((raioMaior * raioMaior) + (raioMaior * copo.r) + (copo.r * copo.r)))/3.0;
}