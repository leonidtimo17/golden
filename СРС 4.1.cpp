#include <iostream>
#include <string>
using namespace std;
struct st
{
string fam, dolznost;
int zarplata, staz;
};
int main()
{
	setlocale(0,"");
	st s[3];
	int i,min,stazz,y;
	float avg;
    for ( i = 0; i < 3; i++)
    {
    	
        cout<< "Enter fam: ";
        cin>>s[i].fam;
        cout<< "Enter zarplata: ";
        cin>>s[i].zarplata;
        cout<< "Enter staz: ";
        cin>> s[i].staz;
        cout<< "Enter dolznost: ";
        cin>> s[i].dolznost;
        
        cout<<endl;
    }	
     for ( i = 0; i < 3; i++)
    {
		if (s[i].staz >=10) stazz=s[i].staz;
	}
     for ( i = 0; i < 3; i++)
    	avg+=s[i].zarplata;
	avg=avg/3; cout<<avg;
	for(i=0;i<3;i++)
		if(avg>s[i].zarplata)
		{
		 min=s[i].zarplata;
		 y=i;
		} 
	cout<<"Фамилия: "<<s[y].fam<<endl<<"Зарплата: "<<s[y].zarplata<<endl<<"Стаж: "<<s[y].staz<<endl<<"Минимальная зарплата от предприятия: "<<min<<endl;
	cin.get();
}
