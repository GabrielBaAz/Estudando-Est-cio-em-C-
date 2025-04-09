#include <iostream>
using namespace std;

int main() {
	//prioridades
	float resultado;
	resultado = 5.0 + 4.0 * 2.0;
	cout<< "Operacao 1 : 5 + 4 * 2 = " << resultado << endl;
	
	resultado = (5.0 + 4.0) * 2.0;
	cout<< "Operacao 2 : (5 + 4) * 2 = " << resultado << endl;
	
    resultado = 1.0 + 2.0 / 3.0 * 4.0;
	cout<< "Operacao 3 : 1 +2 / 3 * 4 = " << resultado << endl;
	
	resultado = (1.0 + 2.0) / (3.0 * 4.0);
	cout<< "Operacao 4 : (1 + 2) / (3 * 4) =  " << resultado << endl;
	return 0;
	
}