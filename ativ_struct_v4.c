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

//funções
//preencher um Ponto2D e um Circulo com entrada pelo teclado
void leInstancias(struct Ponto2D *p, struct Circulo *c) {
    printf("Recolher dados de um ponto 2D");
    printf("\n  *Entre com a coordenada x: ");
    scanf("%f", p -> x);
    printf("\n  *Entre com a coordenada y: ");
    scanf("%f", p -> y);

    printf("Recolher dados dem um Circulo");
    printf("\n  *Entre com a coordenada x do centro: ");
    scanf("%f", c -> centro.x);
    printf("\n  *Entre com a coordenada y do centro: ");
    scanf("%f", c -> centro.y);
    printf("\n  *Entre com o o valor do raio: ");
    scanf("%f", c -> raio);
    printf("\n  *Entre com o valor de r (cor RGB): ");
    scanf("%d", c -> cor.r);
    printf("\n  *Entre com o valor de g (cor RGB): ");
    scanf("%d", c -> cor.g);
    printf("\n  *Entre com o valor de b (cor RGB): ");
    scanf("%d", c -> cor.b);
}

//função main
int main() {
    //instâncias
    struct Ponto2D ponto1;
    struct Circulo circ1;

    return 0;
}
