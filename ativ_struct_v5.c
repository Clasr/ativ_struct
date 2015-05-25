/***************************
*Atividade sobre Estruturas
*Clarice Scheibe Ribeiro
*V5 - 25/05/2015
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
    scanf("%f", &(p -> x));
    printf("  *Entre com a coordenada y: ");
    scanf("%f", &(p -> y));

    printf("\nRecolher dados dem um Circulo");
    printf("\n  *Entre com a coordenada x do centro: ");
    scanf("%f", &(c -> centro.x));
    printf("  *Entre com a coordenada y do centro: ");
    scanf("%f", &(c -> centro.y));
    printf("  *Entre com o comprimento do raio: ");
    scanf("%f", &(c -> raio));
    printf("  *Entre com o valor de r (cor RGB): ");
    scanf("%d", &(c -> cor.r));
    printf("  *Entre com o valor de g (cor RGB): ");
    scanf("%d", &(c -> cor.g));
    printf("  *Entre com o valor de b (cor RGB): ");
    scanf("%d", &(c -> cor.b));
}

//apresentar na tela instancias de Ponto2D e Circulo
void mostraInstancias(const struct Ponto2D *p, const struct Circulo *c) {
    printf("\nInstancia Ponto2D");
    printf("\n  *Coordenadas (x, y): (%.2f, %.2f)", p -> x, p -> y);

    printf("\n\nInstancia Circulo");
    printf("\n  *Coordenadas centro (x, y): (%.2f, %.2f)", c -> centro.x, c -> centro.y);
    printf("\n  *Comprimento do raio: %.2fUM", c -> raio);
    printf("\n  *Valores RGB: R %d, G %d, B %d\n\n", c -> cor.r, c -> cor.g, c -> cor.b);
}

//função main
int main() {
    //instâncias
    struct Ponto2D ponto1;
    struct Circulo circ1;

    //TESTE
    leInstancias(&ponto1, &circ1);
    mostraInstancias(&ponto1, &circ1);

    return 0;
}
