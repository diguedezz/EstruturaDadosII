/*
Universidade Presbiteriana Mackenzie
Curso de Ciência da Computação - Turma 04N
Estrutura de Dados II - Professor Jean

Grupo:
Diego Guedes de Moraes - 32148127
Erick Cauã Ferreira Gomes - 32116251
Laura Carolina Balbachan dos Santos - 32173008
Pedro Moreno Campos - 32172656
*/

/*
Escreva um programa em C++ que declare explicitamente um vetor (array) A
de tamanho 5 do tipo double. Preencha seu conteúdo na declaração usando o
{,,…,}. Depois, crie uma função com um argumento do tipo ponteiro para
double e um outro do tipo int. O primeiro argumento deve corresponder a um
array e o segundo ao número de elementos do array. A função tem de ser do
tipo ponteiro para double para devolver o endereço do menor elemento
presente no array recebido. A função deve ser chamada no main e o retorno
(endereço) impresso pelo programa.
*/

#include <iostream>
using namespace std;

double * menor(double * array, int range){
	double menorElemento;
	for(int i=0; i<range; i++){
		for(int j=0; j<range; j++){
			if (array[j] < array[i]){
				menorElemento = array[j];
			}	
		}
	}
	return &menorElemento;
}

int main(){
	menor(double A[5] = {,,,,}, int 5);
}


