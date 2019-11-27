#include "Central_Tendency.h"
#include <iostream>


double Central_Tendency::Mean(int n) {
	double Mean_hasil, Temp = 0;
	for (i = 0; i < n; i++) {
		Temp = Temp + data[i];
	}
	return Mean_hasil = Temp / n;;
};
double Central_Tendency::Median(int n) {
	double Median_hasil;
	int Temp = 0;
	for (i = 0; i < n; i++) {
		std::cout <<"("<<i+1<<"). " << data[i] << "\n" ;
	}
	if (n % 2 == 0) {
		Temp = (n + 1) / 2;
		Median_hasil = (data[Temp - 1] + data[Temp]) / 2;
	}
	else {
		Median_hasil = data[((n + 1) / 2) - 1];
	}
	return Median_hasil;
};
double Central_Tendency::Midhinge(int n, int pilihan) {
	double Temp = 0, Midhinge, Q1, Q3;
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
double Central_Tendency::Midrange(int n) {
	double Midrange_hasil;
	return Midrange_hasil = (data[0] + data[n - 1]) / 2;
};
void Central_Tendency::Modus(int n) {
	double Temp = 0;
	int jum = 1,k = 0;
	double modus[100];
	double MODUS[100];
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < (n - 1) - i; j++) {
			if (data[j] > data[j + 1]) {
				Temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = Temp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		if (data[i] == data[i + 1]) {
			jum = jum + 1;
		}
		else {
			modus[k] = jum;
			MODUS[k] = data[i];
			k++;
			jum = 1;
		}
	};

	for (i = 0; i < k - 1; i++) {
		for (j = 0; j < (k - 1) - i; j++) {
			if (modus[j] < modus[j + 1]) {
				Temp = modus[j];
				modus[j] = modus[j + 1];
				modus[j + 1] = Temp;
				Temp = MODUS[j];
				MODUS[j] = MODUS[j + 1];
				MODUS[j + 1] = Temp;
			}
		}
	}

	for (i = 0; i < k; i++) {
		std::cout << "Data ke[" << i + 1 << "] = " << modus[i] << " adalah " << MODUS[i] << std::endl;
	}

	if (modus[0] != modus[1]) {
		std::cout << "MODUS = " << MODUS[0] << std::endl;
	}

	if (modus[0] == modus[1]) {
		if (modus[1] != modus[2]) {
			std::cout << "MODUS = " << MODUS[0] << " dan " << MODUS[1] << std::endl;
		}
	}
	if (modus[0] == modus[1]) {
		if (modus[1] == modus[2]) {
			std::cout << "MODUS TIDAK ADA" << std::endl;
		}
	}

}
