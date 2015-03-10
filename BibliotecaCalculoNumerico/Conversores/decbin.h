#ifndef DECBIN_H
#define DECBIN_H

#include <stdio.h>
#include <math.h>

class DecBin
{
    double numero,frac,inteira;

    char *nlnt;

    int *nums;

public:
    DecBin();
    DecBin(int Valor);
    DecBin(double Valor);
    ~DecBin();
};

#endif // DECBIN_H
