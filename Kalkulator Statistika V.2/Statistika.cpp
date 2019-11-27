#include "Statistika.h"
#include <iostream>

void Statistika::SetData(int index, double dat) {
	data[index] = dat;
};

void Statistika::UbahData(int n, int index, double nilai) {
	double Temp;
	std::cout << "data[" << index + 1 << "] = " << data[index - 1] << std::endl;
	std::cout << "data[" << index + 1 << "] =";
	data[index - 1] = nilai;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n - 1; j++) {
			if (data[j] > data[j + 1]) {
				Temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = Temp;
			}
		}
	}
};

void Statistika::TampilData(int n) {
	std::cout << "[Data yang Telah Tersimpan]"<<"\n";
	for (i = 0; i < n; i++) {
		std::cout << "Data[" << i + 1 << "] =" << data[i] <<"\n";
	}
}