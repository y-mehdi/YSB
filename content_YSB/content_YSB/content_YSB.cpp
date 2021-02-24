#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

struct ET
{
	string chapter;
	unsigned int page;
};

int main()
{
	int nc;
	ET* content;
	cout << "Number of capitals :" << endl;
	cin >> nc;

	content = new ET[nc];

	//Eingabe
	for (int i = 0;i < nc;i++)
	{
		cout << "Chapter :" << endl; cin >> content[i].chapter;
		cout << "Page :" << endl; cin >> content[i].page;
	}

	//Ausgabe
	cout << "\n\nContent :\n" << endl;

	for (int i = 0;i < nc;i++)
	{
		cout << content[i].chapter << setfill('-') << setw(30) << content[i].page << endl;

	}
	delete[] content;

	cout << "\n\nPowered by Youmka SoftBank\nVisit our website WWW.YOUMKA.COM" << endl;


	return 0;
}