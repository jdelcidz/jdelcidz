#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int Modulus(int iN, int iMod) {
	int iQ = (iN/iMod);
	return iN - (iQ*iMod);
}

char GetChar(int iGenerator, char cBase, int iRange) {
	return (cBase + Modulus(iGenerator, iRange));
}

int main() {
	string Codigo;
	
	cout << "Eres un agente? Por favor Ingrese Su Codigo ";
	cin >> Codigo;
	cout << endl;
	
	if (Codigo == "Smith") {
		system("COLOR 03");

		char caRow[80];
		int j = 7;
		int k = 2;
		int l = 5;
		int m = 1;
        
		while (true) {
			int i = 0;
			
			// Simbolos Aleatorios
			while (i < 80) {
				if (caRow[i] != ' ') {
					caRow[i] = GetChar(j + i*i, 33, 30);
				}
				std::cout << caRow[i];
				++i;
			}
			j = (j + 31);
			k = (k + 17);
			l = (l + 47);
			m = (m + 67);
			caRow[Modulus(j, 80)] = '-';
			caRow[Modulus(k, 80)] = ' ';
			caRow[Modulus(l, 80)] = '-';
			caRow[Modulus(m, 80)] = ' ';
			
			// Incremente El Valor De 3000000 Para Retrasar El Proceso
			i = 0;
			while (i < 300000) {
				GetChar(1, 1, 1);
				 ++i;
				 
		}
	}
	
	
	}else{
}
		if (Codigo == "Neo") {
			system("Color 04");
	    int i = 0;
	    char caRow[80];
		int j = 7;
		int k = 2;
		int l = 5;
		int m = 1;
        
		while (i < 10) {
			int i = 0;
			
			// Simbolos Aleatorios
			while (i < 80) {
				if (caRow[i] != ' ') {
					caRow[i] = GetChar(j + i*i, 33, 30);
				}
				std::cout << caRow[i];
				++i;
			}
			j = (j + 31);
			k = (k + 17);
			l = (l + 47);
			m = (m + 67);
			caRow[Modulus(j, 80)] = '-';
			caRow[Modulus(k, 80)] = ' ';
			caRow[Modulus(l, 80)] = '-';
			caRow[Modulus(m, 80)] = ' ';
			
			//Incremente El Valor De 300000 Para Retrasar El Proceso
			i = 0;
			while (i < 300000) {
				GetChar(1, 1, 1);
				 ++i;
			}
			break;
		}		
	        cout << endl;
	        cout << endl;
		cout << " System Failure-El Sistema Fallo";
	}
	cout <<endl;
	cout << " Codigo Denegado , Usted No Es Un Agente";

    return 0;
