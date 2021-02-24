
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

float secToHMS(int sekunden)
{
    int h, m, s;
    h = sekunden / 3600;
    m = (sekunden % 3600) / 60;
    s=(sekunden % 3600) % 60;
    cout << setfill('-') << setw(50) <<""<< endl;
    cout << sekunden << " = " <<h<<"h:"<<m<<"m:"<<s<<"s"<< endl << endl;
    return 0;
}

int main()
{
    int sekunden;
    cout << "Seconds to H:M:S" << endl;
    cout << "\n\nSekunden Eingabe : " << endl; cin >> sekunden;
    secToHMS(sekunden);

    cout << "\n\nPowered by Youmka SoftBank\n\nVisit our website WWW.YOUMKA.COM\n\n";

    return 0;
}