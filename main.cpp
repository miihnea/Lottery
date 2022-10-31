#include "Loto6din49.h"

int main()
{
	srand(time(NULL));
	int nr_de_jucat[7], n = 6;
	int nr_ghicite = 0;
	cout << "======================Bine ati venit la Loteria Romana!============= = "<<endl;
	cout << "Introduceti numerele pe care doriti sa le jucati: \n";
	for (int i = 1; i <= n; i++)
		cin >> nr_de_jucat[i];

	Loto bila1;
	Loto bila2;
	Loto bila3;
	Loto bila4;
	Loto bila5;
	Loto bila6;

	int I =  bila1.Extragere();
	int II = bila2.Extragere();
	int III = bila3.Extragere();
	int IV = bila4.Extragere();
	int V = bila5.Extragere();
	int VI = bila6.Extragere();

	cout << "Numerele extrase sunt: " << I << " " << II << " " << III << " " << IV << " " << V << " " << " " << VI << endl;

	for (int i = 0; i <= n; i++)
	{
		if (nr_de_jucat[i] == I || nr_de_jucat[i] == II || nr_de_jucat[i] == III || nr_de_jucat[i] == IV || nr_de_jucat[i] == V || nr_de_jucat[i] == VI)
		{
			nr_ghicite++;
			i += 1;
		}
	}
	if (nr_ghicite == 0)
	{
		cout << "Nu ati ghicit niciun numar! Mai mult noroc data viitoare!";
	}
	else if (nr_ghicite > 0 && nr_ghicite <= 5)
	{
		cout << "Felicitari! Ati ghicit " << nr_ghicite << "/6 numere!";
	}
	else cout << "WOW! ATI GHICIT 6/6 NUMERE!!! ATI CASTIGAT PREMIUL CEL MARE!! FELICITARI!!";

	return 0;
}