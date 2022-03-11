# ifndef biscabinaria_h
    # define biscabinaria_h

typedef struct{
    double r, R, h, H; 
} Copo;

double busca(Copo copo, float bebida, double esq, double dir);
double calculaVolume(Copo copo);

# endif