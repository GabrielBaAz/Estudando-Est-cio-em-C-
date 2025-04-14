#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

int main( )
{
	//Este exemplo pede ao usuario que informe um valor. Logo após, utiliza a biblioteca a) O número elevado ao cubo/ b) A raiz quadrada do número 
  
 	float valor_ao_cubo, valor, raiz2_valor ;
 	
 	cout << "Digite um valor: " ;
 	cin >> valor ; 
 	
     valor_ao_cubo =  pow(valor,3);
     cout << "O numero " << valor << " elevado ao cubo equivale a: " << valor_ao_cubo << endl ;
    if (valor>=0) {
	 raiz2_valor = sqrt(valor) ;
	 cout << "A raiz quadrada de " << valor << " equivale a: " << raiz2_valor << endl ;
	  }
	  else{
	  		cout << "O numero nao pode ser calculado" <<  endl ;
	  }
    
    
return 0 ;
}

	
	
	

	