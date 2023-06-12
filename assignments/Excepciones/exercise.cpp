#include <iostream>
#include <cmath>
#include <stdexcept>
#include <string>
#include "ErrorMat.hpp"
#include "DivCero.hpp"

using namespace std;

double logaritmo(const double n){
    try {
        if (n < 0)
            throw(ErrorMat(ERROR_DOMINIO) );
        if (n == 0)
            throw(ErrorMat(ERROR_RANGO) );
        return log(n);
	}
    catch(ErrorMat& e) {
        cout << e.porque();
    }
    return 0;
}

void pruebaExcepcion8(){
    // prueba el manejo de excepciones a traves de una clase
    double numero = 100;
    cout << "log(" << numero << ") = " << logaritmo(numero) << endl;
    cout << "log(-" << numero << ") = " << logaritmo(-numero) << endl;
    cout << "log(-" << numero << ") = " << logaritmo(0) << endl;
}

int main() 
{
  std::cout << "Hello World \n";
}
