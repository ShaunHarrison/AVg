#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

const int NOTEST = 3;
void calcavg(const int[][NOTEST] /*grade*/, double[]/*col*/, int /*length*/);

int main()
{
	int length = 5;
	int grades[][NOTEST] = { { 70, 40, 60 }, { 80, 90, 70 }, { 60, 40, 50 }, { 90, 100, 70 }, { 70, 60, 30 } };

	double avg[5];

	calcavg(grades, avg, length);

	for (int noStudent = 0; noStudent < length; noStudent++)
	{
		cout << avg[noStudent] << endl;
	}

	system("pause");
}

void calcavg(const int grades[][NOTEST], double avg[], int length)
{
	double sum;
	for (int noStudent = 0; noStudent < length; noStudent++)
	{
		sum = 0;
		for (int noTest = 0; noTest < NOTEST; noTest++)
		{
			sum += grades[noStudent][noTest];

		}
			avg[noStudent] = sum / NOTEST;
	}

}
