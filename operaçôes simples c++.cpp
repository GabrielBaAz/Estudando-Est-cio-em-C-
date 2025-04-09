#include <iostream>
#include <string>

using namespace std;

int main() {
	float a, b, soma, sub, mult, div;
	cout<< "Digite o primeiro numero: ";
	cin>> a;
	cout<< "Digite o segundo numero ";
	cin>> b;
	
    soma = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;
    
    cout << "A soma: " << soma << "\n";
    cout << "A subtracao: " << sub << "\n";
    cout << "A multiplicacao: " << mult << "\n";
    cout << "A divisao: " << div << endl;

    return 0;
}
