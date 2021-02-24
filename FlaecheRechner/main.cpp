#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double flaeche(double x,int kenner = 1)
{
	if (kenner == 1) { return x * x * 3.14; }
	else { return x * x; }

}

double flaeche(double a, double b)
{
	return a * b;
}

int main()
{

	cout << setfill(' ') << setw(20) << "Flaeche Rechner\n" << endl;

	cout << " Kreisflache : " << flaeche(3.0, 1) << endl;
	cout << " Quadratflaeche : " << flaeche(2, 5.0) << endl;
	cout << " Rechteckflaeche : " << flaeche(7.0, 5.6) << endl;

	cout << "\n\nPowered by Youmka SoftBank\n\nVisit our website WWW.YOUMKA.COM" << endl << endl;
	return 0;
}

