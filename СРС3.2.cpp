#include <iostream>
#include <string>
using namespace std;
int main()
{
setlocale(0,"");
string s;
cout<<"������� ������\n";
getline(cin,s);
int k=0;
for (int i=0;i<s.length();i++)
if (s[i]==' ') k++;
cout<<"���������� �������� � ������ - "<<k;
cin.get(); 
}
