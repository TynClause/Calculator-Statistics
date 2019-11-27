#include "Statistika.h"
class Variation :
	public Statistika
{
public:
	double Range(int n);
	double Mean(int n);
	double Midhinge(int n, int pilihan);
	double Variance(int n);
	double Simpangan_Baku(int n);
	double CV(int n);
};

