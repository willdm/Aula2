// Aula2.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <Windows.h>	
#include <iostream>  //entrada e saida
#include <string>	//cadeia


using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");  //UTF-8 pt-br
	#pragma region Exc 1 
	 //Faça um algoritmo que solicita ao usuário um número inteiro e exiba este número na tela. 
	 //Se o número for negativo, antes de ser exibido, ele deve ser transformado no equivalente positivo.
	int number;
	cout << "Digite um numero inteiro:" << endl;
	cin >> number;
	if (number < 0){
		number = number * -1;
	}
	cout << "seu numero é:" << number << endl;
	#pragma endregion

	#pragma region Exc 2 
	//Faça um algoritmo que solicita ao usuário as notas de três provas. Calcule a média aritmética e informe se o aluno
	//foi Aprovado ou Reprovado (o aluno é considerado aprovado com a média igual ou superior a 6).
	int n1, n2, n3, media;
	cout << "Digite suas tres notas:" << endl;
	cin >> n1 >> n2 >> n3;
	media = (n1 + n2 + n3) / 3;
	if (media < 6) {
		cout << "Voce esta reprovado (a) :" << media;
	}
	if (media > 6) {
		cout << "Voce esta aprovado (a)" << media;
	}
	#pragma endregion

	return 0;

}
