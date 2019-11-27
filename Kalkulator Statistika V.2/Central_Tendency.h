#include "Statistika.h"
class Central_Tendency :
	public Statistika
{
public:
	double Mean(int n);
	double Median(int n);
	double Midhinge(int n, int pilihan);
	void Modus(int n);
	double Midrange(int n);
};

