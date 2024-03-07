#include <iostream>

using namespace std;

int main()
{
	cout << "***Hagyomanyos statikus memoriakezeles***" << endl;
	int jegy[5] = {1,2,3};
	cout << "Az int jegy[5] = {1,2,3}; tomb merete " 
		<< sizeof(jegy) << " byte." << endl;
	cout << "A jegy[0] erteke: " << jegy[0] << endl;	
	cout << "A jegy[2] erteke: " << jegy[2] << endl;
	cout << "A *(jegy+2) erteke" << *(jegy+2) << endl;

	cout << "***Dinamikus memoriakezeles***" << endl;

	int* szam;
	szam = new int;
	if (szam == NULL)
	{
		cerr << "Hiba: keves a memoria";
		system("PAUSE");
		return 1;
	}
	*szam = 20;
	cout << "Az uj szam erteke: " << *szam << endl;
	delete szam;

	int db;
	cout << "Dinamikus tomb hasznalata" << endl;
	cout << "Hany elemu tombot szeretne letrehozni? ";
	cin >> db;
	int *tomb = new int[db];
	
	if (tomb == NULL)
	{
		cerr << "Hiba: keves a memoria";
		system("PAUSE");
		return 1;
	}

	cout << "A tomb merete " << sizeof(tomb) << " byte." << endl;

	*tomb = 15;
	tomb[3] = 25;
	*(tomb+1) = 35;

	for (int i = 0; i < db; i++)
	{
		cout << "A tomb " << i << ". eleme: " << tomb[i] << endl;
	}

	delete[] tomb;


	system("PAUSE");
	return 0;
}
