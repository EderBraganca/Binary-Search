#include <stdio.h>
#include <stdlib.h>
#include "buscabinaria.h"

int main(){
    int t, pessoas, ml;
    Copo copo;
    
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &pessoas, &ml);
        scanf("%lf %lf %lf", &copo.r, &copo.R, &copo.h);

        float volume = (ml * 1.0) / (pessoas * 1.0); 
        busca(copo, volume, 0, copo.h);
    } 

    return 0;
}