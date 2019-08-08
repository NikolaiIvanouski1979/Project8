# include <iostream>
using namespace std;
struct Distance
{
	int feet;
	float inches;
};
void endldisp(Distance);
void endldisp(float);

int main()
{
	Distance d1;
	float d2;
	cout << "Please! Enter distance pounds of: "; cin >> d1.feet;
	cout << "Please! Enter distance inches of: "; cin >> d1.inches;
	cout << "Please! Enter distance inches of: "; cin >> d2;
	cout << "d1 = "; endldisp(d1);
	cout << "d2 = "; endldisp(d2);
	cout << endl;
	system("pause");
	return 0;
}

void endldisp(Distance dd)
{
	cout << dd.feet << "' - " << dd.inches;
}
void endldisp(float dd)
{
	int feet = static_cast<int>(dd / 12);
	float inches = dd - feet * 12;
	cout << feet << "'-" << inches;
}