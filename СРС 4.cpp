#include <iostream>
#include <string>
using namespace std;
struct st
{
string cofeta;
int cilogram,cena;
};
int main()
{
	st k[3];
    int min = 35, max = 55;
    for (int i = 0; i < 3; i++)
	
    {
        cout << "Enter confeta: ";
        cin >>k[i].cofeta;
        cout << "Enter cilogram: ";
        cin >>k[i].cilogram;
        cout << "Enter cena: ";
        cin >> k[i].cena;
    }	
    
     for (int i = 0; i < 3; i++)
	 {
        if (k[i].cena >= min &&k[i].cena <= max)
            cout << k[i].cilogram << " " << k[i].cena << " " << k[i].cofeta<< endl;
    }
    cin.get();
}
