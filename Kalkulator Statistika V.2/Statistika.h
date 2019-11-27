#pragma once
class Statistika
{
protected:
	int i=0, j;
	double data[100];
public:
	void SetData(int n, double dat);
	void UbahData(int n, int index, double nilai);
	void TampilData(int n);
};

