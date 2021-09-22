#include"conta.h"

typedef struct{
Conta* conta[N];
int pos;
} Banco;
 void addConta(Banco*b, Conta C){
   b->conta[b->pos] = &C;
   b->pos++;
 }


int main (){
  Conta* c1 = malloc (sizeof(conta));
  criaConta(c1, 123, 300.0);
 printf("\nVoce tem em sua conta :\n ");

  inprimirConta(c1);
  deposito(c1, 50.00);
  Saque(c1, 70.00);
  printf("\nDepois das transações ficou: :\n ");
  inprimirConta(c1);

  printf("%ld\n",sizeof(Banco));
  Banco*b = malloc(sizeof(Banco)); b->pos = 0;
  b->pos = 0;
  addConta(b,*c1);

 return 0;
}



#include"conta.h"

  //conta corrente (codigo, saldo)

void inprimirConta(Conta* conta) {
   printf ("%d - valor: %g R$\n", (*conta).codigo, (*conta).saldo);
}


void deposito (Conta* conta, double valor) {
  (*conta).saldo = (*conta).saldo + valor;

}
void criaConta(Conta* conta, int codigo,double saldo){
conta->codigo=codigo;
conta->saldo=saldo;
}
void Saque (Conta *conta, double valor) {
conta->saldo -= valor;
}
typedef struct Banco {
  Conta* contas[N];
    int pos;
} Banco;




#include<stdio.h>
#include<stdlib.h>
#define N 100

struct conta {
    int codigo;
    double saldo;
};

typedef struct  conta Conta;
void conta (Conta*, int, double);
void Saque (Conta *conta, double valor);

void inprimirConta(Conta* conta);
void deposito (Conta* conta, double valor);
void criaConta(Conta* conta, int codigo,double saldo);
