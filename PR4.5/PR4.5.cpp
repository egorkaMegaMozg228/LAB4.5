#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
		if ((y <= sqrt(R * R - x * x) && y <= x + R) ||
			(y >= -sqrt(R * R - x * x) && (x <= 0))) {
			cout << "yes" << endl;
		}
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	cout << "R = "; cin >> R;


		for (int i = 0; i < 10; i++)
		{
			x = -R + rand() * (R+R) / RAND_MAX;
			y = -R + rand() * (R+R) / RAND_MAX;
			if ((y <= sqrt(R * R - x * x) && y <= x + R) ||
				(y >= -sqrt(R * R - x * x) && (x <= 0)))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}