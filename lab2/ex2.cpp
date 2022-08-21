/*
Universidade Presbiteriana Mackenzie
Curso de Ci�ncia da Computa��o - Turma 04N
Estrutura de Dados II - Professor Jean

Grupo:
Diego Guedes de Moraes - 32148127
Erick Cau� Ferreira Gomes - 32116251
Laura Carolina Balbachan dos Santos - 32173008
Pedro Moreno Campos - 32172656
*/

/*
Modifique o programa anterior para que o vetor seja alocado dinamicamente usando o commando new;
Pe�a ao usu�rio que digite o tamanho do vetor que ser� criado;
Depois, pe�a ao usu�rio que entre com os valores que preencher�o o vetor.
*/

#include <iostream>
using namespace std;

double * menorEndereco(double * array, int range){
	double * menorElemento;
	for(int i=0; i<range; i++){
		for(int j=0; j<range; j++){
			if (array[j] < array[i]){
				menorElemento = &array[j];
			}	
		}
	}
	return menorElemento;
}

double menorValor(double * array, int range){
	double menorElemento;
	for(int i=0; i<range; i++){
		for(int j=0; j<range; j++){
			if (array[j] < array[i]){
				menorElemento = array[j];
			}	
		}
	}
	return menorElemento;
}

int main(){
    int range;
	cout <<"\nInsira o tamanho do vetor:\n"<<endl;
    cin >> range;

    double * array = new double[range];
    for(int i=0; i<range; i++){
        cout << "Insira o elemento "<<i<<endl;
        cin >> array[i];
    }
	cout <<"\n\nEndereço do menor elemento do vetor:\n"<< menorEndereco(array, range) << endl;
	cout <<"\nValor do menor elemento do vetor:\n"<< menorValor(array, range) << endl;

	delete array;
	return 0;
}