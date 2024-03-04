#include <iostream>
using namespace std;

int main()
{

	float nMat, nfisika, rerata;
	string status;

	cout << " masukan nilai matamatika: ";
	cin >> nMat;
	cout << " masukan nilai fisika: ";
	cin >> nfisika;

	rerata = (nfisika + nMat) / 2;

	if (rerata >= 60) {
		status = "lulus jalur rerata";
	}
	else if (nMat >= 70) {
		status = "lulus jalur nilai matematika";
	}
	else
	{
		status = " lulus";
	}
	cout << "statusnya adalah: " << status << endl;

	system("pause");

}

