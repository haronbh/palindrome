#include <iostream>
using namespace std;
int main()
{
char palin[50], *p1, *p2;
bool palindrome=true;
//saisie des données
cout<<"Saisissez un mot (maxi 50 caractères) : ";
cin>>palin;
//positionner p2 en fin de chaîne
for (p2=palin; *p2!=’/0’; p2++);
p2--;
p1=palin;
while ((p1<p2) && (palindrome))
{
if (*p1!=*p2)
palindrome=false;
else
{
p1++;
p2--;
}
}
