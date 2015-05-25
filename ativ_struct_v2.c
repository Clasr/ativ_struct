/***************************
*Atividade sobre Estruturas
*Clarice Scheibe Ribeiro
*V1 - 25/05/2015
***************************/

//bibliotecas
#include <stdio.h>
#include <stdlib.h>

//estruturas
struct Ponto2D {
  float x;
  float y;
};

struct CorRGB {
    int r;
    int g;
    int b;
};

struct Circulo {
    struct Ponto2D centro;
    float raio;
    struct CorRGB cor;
};
