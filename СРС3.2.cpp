#include <iostream>
#include <string>
using namespace std;
int main()
{
setlocale(0,"");
string s;
cout<<"Введите строку\n";
getline(cin,s);
int k=0;
for (int i=0;i<s.length();i++)
if (s[i]==' ') k++;
cout<<"Количество пробелов в тексте - "<<k;
cin.get(); 
}
