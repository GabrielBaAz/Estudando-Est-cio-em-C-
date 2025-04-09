#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
 //Escreva um programa em linguagem C que solicite ao usuário que insira seu peso (em quilogramas) e sua altura (em metros). O programa deve então calcular o Índice de Massa Corporal (IMC) usando a fórmula: IMC = peso / (altura × altura)
 float peso, altura, imc;
 
 cout<< ("insira o seu peso em quilogramas: ");
 cin>> (peso);
 
 cout<< ("insira sua altura em Metros: ");
 cin>>(altura);
 
 imc = peso / (altura * altura);
 cout<<("O seu Indice de Massa Corporal (IMC) e: ");
 cout<< fixed << setprecision(2) <<(imc);
}
 
 