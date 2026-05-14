// inclusione libreria cmath

#include <iostream>
#include <cmath>

using namespace std;

// funzione principale(main)

int main() {
	
	// variabili utili al programma
	
	double numero;
	double radice;
	
	cout << "Inserisci numero: ";
	cin >> numero;
	
	// funzione calcolo radice cubica
	
	radice = cbrt(numero);
	cout << "\nRadice cubica: " << radice;
	
}
