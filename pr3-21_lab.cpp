// This program reads a single character into a char variable.
#include <iostream>
using namespace std;

int main()
{
	double baramount, barprofit,totalbp;

	cout << "Enter how many bars you sold: ";
	cin  >> baramount;
	cout << "enter hom much money each bar make";
	cin >> barprofit;
	totalbp = baramount * barprofit;
	cout << "You made $" << totalbp;
	return 0;
}
