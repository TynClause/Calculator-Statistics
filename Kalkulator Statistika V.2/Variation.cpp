#include "Variation.h"
#include <math.h>

using namespace std;

double Variation::Range(int n) {
	return ( data[n - 1] - data[0]);
};
double Variation::Mean(int n) {
	double Mean_hasil;
	double Temp_Mean = 0;
	for (i = 0; i < n; i++) {
		Temp_Mean = Temp_Mean + data[i];
	}
	return Mean_hasil = Temp_Mean / n;
};
double Variation::Midhinge(int n, int pilihan) {
	double Temp = 0, Midhinge;
	double Q1, Q3;
	int Q1_x, Q3_x;
	if (n % 2 == 0) {
		Q1 = 0.25 *(n + 1);
		Q1_x = int(Q1);
		Temp = data[Q1_x - 1] + ((Q1 - Q1_x) * (data[Q1_x] - data[Q1_x - 1]));
		Q1 = Temp;

		Q3 = 0.75 * (n + 1);
		Q3_x = int(Q3);
		Temp = data[Q3_x - 1] + ((Q3 - Q3_x) * (data[Q3_x] - data[Q3_x - 1]));
		Q3 = Temp;
	}
	else {
		Q1 = 0.25 *(n + 1);
		Q1 = data[int(Q1) - 1];
		Q3 = 0.75 * (n + 1);
		Q3 = data[int(Q3) - 1];
	}
	Temp = Q1 + Q3;
	Midhinge = 0.5*Temp;
	if (pilihan == 1) {
		Midhinge = Q3 - Q1;
	}

	return Midhinge;
};
double Variation::Variance(int n) {
	double Temp1 = 0;
	double Temp2 = 0;
	double hasil_var;
	for (i = 0; i < n; i++) {
		Temp1 = data[i] * data[i];
		Temp2 = Temp2 + Temp1;
	}
	Temp1 = 0;
	for (i = 0; i < n; i++) {
		Temp1 = Temp1 + data[i];
	}
	Temp1 = Temp1 * Temp1;
	hasil_var = ((n*Temp2) - Temp1) / (n*(n - 1));
	return hasil_var;
};
double Variation::Simpangan_Baku(int n) {
	double Temp1 = 0;
	double Temp2 = 0;
	double hasil_var;
	for (i = 0; i < n; i++) {
		Temp1 = data[i] * data[i];
		Temp2 = Temp2 + Temp1;
	}
	Temp1 = 0;
	for (i = 0; i < n; i++) {
		Temp1 = Temp1 + data[i];
	}
	Temp1 = Temp1 * Temp1;
	hasil_var = ((n*Temp2) - Temp1) / (n*(n - 1));
	return sqrt(hasil_var);
};
double Variation::CV(int n) {
	double A = Mean(n);
	double B = Simpangan_Baku(n);
	return (B / A * 100);
};