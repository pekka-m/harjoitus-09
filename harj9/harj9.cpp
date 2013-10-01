/*********************************************************************
Tehtävä: HARJOITUS 9
Tekijä: Pekka Melgin
PVM: 24.9.2013
Kuvaus:
Tee ohjelma, joka toimii laskimena.
Käyttäjältä kysytään kaksi kokonaislukua,
jonka jälkeen ohjelma antaa valikon
laskutoimituksista. Valikko nayttaa
seuraavalta:

VALIKKO
1. Summa
2. Erotus
3. Tulo
4. Osamaara
5. Jakojaannos

Lopuksi ohjelma tulostaa valitun tuloksen naytölle.
*********************************************************************/
#include <iostream> 
using namespace std; 
int main() 
{
	int luku1;
	int luku2;
	int lasku;
	float tulos;

	cout << "Anna luku 1: ";
	cin >> luku1;

	cout << "Anna luku 2: ";
	cin >> luku2;

	cout << "VALIKKO"
		<< "\n1. Summa"
		<< "\n2. Erotus"
		<< "\n3. Tulo"
		<< "\n4. Osam„„r„"
		<< "\n5. Jakoj„„nn”s\n";
	cin >> lasku;

	if (lasku == 1) {
		tulos = luku1 + luku2;
		cout << luku1
			<< " + "
			<< luku2
			<< " = "
			<< tulos;
	}
	else if (lasku == 2) {
		tulos = luku1 - luku2;
		cout << luku1
			<< " - "
			<< luku2
			<< " = "
			<< tulos;
	}
	else if (lasku == 3) {
		tulos = luku1 * luku2;
		cout << luku1
			<< " * "
			<< luku2
			<< " = "
			<< tulos;
	}
	else if (lasku == 4) {
		tulos = float(luku1) / float(luku2);
		cout << luku1
			<< " / "
			<< luku2
			<< " = "
			<< tulos;
	}
	else if (lasku == 5) {
		tulos = luku1 - luku2;
		cout << luku1
			<< " - "
			<< luku2
			<< " = "
			<< tulos;
	}
	cout << endl;
}