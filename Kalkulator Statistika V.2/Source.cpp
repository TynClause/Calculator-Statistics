#include <iostream>
#include "Central_Tendency.h"
#include "Variation.h"
#include <Windows.h>

using namespace std;

Central_Tendency CT;
Variation V;

int x = 0;

void exit(char jawab_2) {
exit_switch:
	cout << "Apak anda ingin Merubah Mode (y/t) :"; cin >> jawab_2;
	if (jawab_2 == 'y') {
		x = 2;
	}
	else if (jawab_2 == 't') {
		x = 1;
	}
	else goto exit_switch;

}

void Menu(int n) {
	char jawab_1;
	char jawab_2;
	int index;
	double nilai;

Menu:
	system("cls");
	cout << "Masukan kode Mode yang ingin dipilih :" << endl;
	cout << "(0).Mean\n(1).Median\n(2).Modus\n(3).Midrange\n(4).MidHinge\n";
	cout << "(5).Range\n(6).IQR\n(7).Variance\n(8).Simpangan Baku\n";
	cout << "(9).CV\n(q).Keluar\n(e).Ganti Data" << endl;
	cout << "Masukan pilihan :"; cin >> jawab_1;
	int extra = 0;

	switch (jawab_1) {
	case '0': cout << "Nilai Mean : " << CT.Mean(n) << endl;
		cout << "Apakah anda ingin Merubah Mode (y/t) : "; cin >> jawab_2;
		if ((jawab_2 == 'y')||(jawab_2 == 'Y')) {
			goto Menu;
			break;
		}
		else if ((jawab_2 == 't') || (jawab_2 == 'T')) {
			x = 1; break;
		}
		else cout << "Maaf Inputan anda salah !" << endl; exit(jawab_2); break;

	case '1': cout << "Nilai Median : " << CT.Median(n) << endl;
		cout << "Apakah anda ingin Merubah Mode (y/t) : "; cin >> jawab_2;
		if ((jawab_2 == 'y') || (jawab_2 == 'Y')) {
			goto Menu;
			break;
		}
		else if ((jawab_2 == 't') || (jawab_2 == 'T')) {
			x = 1; break;
		}
		else cout << "Maaf Inputan anda salah !" << endl; exit(jawab_2); break;

	case '2': CT.Modus(n);
		cout << "Apakah anda ingin Merubah Mode (y/t) : "; cin >> jawab_2;
		if ((jawab_2 == 'y') || (jawab_2 == 'Y')) {
			goto Menu;
			break;
		}
		else if ((jawab_2 == 't') || (jawab_2 == 'T')) {
			x = 1; break;
		}
		else cout << "Maaf Inputan anda salah !" << endl; exit(jawab_2); break;

	case '3': cout << "Nilai Midrange : " << CT.Midrange(n) << endl;
		cout << "Apakah anda ingin Merubah Mode (y/t) : "; cin >> jawab_2;
		if ((jawab_2 == 'y') || (jawab_2 == 'Y')) {
			goto Menu;
			break;
		}
		else if ((jawab_2 == 't') || (jawab_2 == 'T')) {
			x = 1; break;
		}
		else cout << "Maaf Inputan anda salah !" << endl; exit(jawab_2); break;

	case '4': cout << "Nilai Midhinge : " << CT.Midhinge(n, extra) << endl;
		cout << "Apakah anda ingin Merubah Mode (y/t) : "; cin >> jawab_2;
		if ((jawab_2 == 'y') || (jawab_2 == 'Y')) {
			goto Menu;
			break;
		}
		else if ((jawab_2 == 't') || (jawab_2 == 'T')) {
			x = 1; break;
		}
		else cout << "Maaf Inputan anda salah !" << endl; exit(jawab_2); break;

	case '5':cout << "Nilai Range : " << V.Range(n) << endl;
		cout << "Apakah anda ingin Merubah Mode (y/t) : "; cin >> jawab_2;
		if ((jawab_2 == 'y') || (jawab_2 == 'Y')) {
			goto Menu;
			break;
		}
		else if ((jawab_2 == 't') || (jawab_2 == 'T')) {
			x = 1; break;
		}
		else cout << "Maaf Inputan anda salah !" << endl; exit(jawab_2); break;

	case '6': extra = 1;
		cout << "Nilai IQR (InterQuartil Range) : " << V.Midhinge(n, extra) << endl;
		cout << "Apakah anda ingin Merubah Mode (y/t) : "; cin >> jawab_2;
		if ((jawab_2 == 'y') || (jawab_2 == 'Y')) {
			goto Menu;
			break;
		}
		else if ((jawab_2 == 't') || (jawab_2 == 'T')) {
			x = 1; break;
		}
		else cout << "Maaf Inputan anda salah !" << endl; exit(jawab_2); break;

	case '7': cout << "Nilai Variance : " << V.Variance(n) << endl;
		cout << "Apakah anda ingin Merubah Mode (y/t) : "; cin >> jawab_2;
		if ((jawab_2 == 'y') || (jawab_2 == 'Y')) {
			goto Menu;
			break;
		}
		else if ((jawab_2 == 't') || (jawab_2 == 'T')) {
			x = 1; break;
		}
		else cout << "Maaf Inputan anda salah !" << endl; exit(jawab_2); break;

	case '8': cout << "Nilai Simpangan Baku : " << V.Simpangan_Baku(n) << endl;
		cout << "Apakah anda ingin Merubah Mode (y/t) : "; cin >> jawab_2;
		if ((jawab_2 == 'y') || (jawab_2 == 'Y')) {
			goto Menu;
			break;
		}
		else if ((jawab_2 == 't') || (jawab_2 == 'T')) {
			x = 1; break;
		}
		else cout << "Maaf Inputan anda salah !" << endl; exit(jawab_2); break;
	case '9': cout << "Nilai CV (Coefficient Variance) : " << V.CV(n) << endl;
		cout << "Apakah anda ingin Merubah Mode (y/t) : "; cin >> jawab_2;
		if ((jawab_2 == 'y') || (jawab_2 == 'Y')) {
			goto Menu;
			break;
		}
		else if ((jawab_2 == 't') || (jawab_2 == 'T')) {
			x = 1; break;
		}
		else cout << "Maaf Inputan anda salah !" << endl; exit(jawab_2); break;

	case 'q': break;

	case 'e':
		CT.TampilData(n);
		cout << "Masukan index yang ingin diubah :"; cin >> index;
		cout << "Masukan nilai : "; cin >> nilai;
		V.UbahData(n, index, nilai);
		CT.UbahData(n, index, nilai);
		goto Menu; break;
		goto Menu;
		break;

	default: system("cls"); cout << "Maaf inputan anda salah !!\n";
		system("pause");
		goto Menu;
		break;

	}
}

int main()
{
	double data[100];
	int i = 0, j = 0, n;
	double Temp = 0;
	char pilihan;

back:
	system("cls");
	cout << "\n\n\t\t\tSelamat Datang Di program Pengelolaan Statistik\n" << endl;
	cout << "\t\t\t\tPilih kode menu yang akan dipilih :" << endl;
	cout << "\t\t\t\t\t(1).Masukan Data" << endl;
	cout << "\t\t\t\t\t(2).Keluar" << endl;
	cout << "\n\t\t\t\tPilihan : "; cin >> pilihan;
	switch (pilihan) {
	case '1': goto pemasukan_data; break;
	case '2': goto keluar; break;
	default:  goto back;
		break;
	}

pemasukan_data:
	system("cls");
	cout << "Masukan jumlah Data :"; cin >> n;
	for (i = 0; i < n; i++) {
		cout << "Data[" << i + 1 << "] = ";
		cin >> data[i];
	}

	for (i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (data[j] > data[j + 1]) {
				Temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = Temp;
			}
		}
	}

	for (i = 0; i < n; i++) {
		CT.SetData(i, data[i]);
		V.SetData(i, data[i]);
	}
	x = 0;
	Menu(n);
	if (x == 1) {
		goto back;
	}
	if (x == 2) {
		Menu(n);
	};
	if (x == 3) {
		goto keluar;
	}
	goto back;

keluar:
	system("cls");
	cout << "\n\n\n\n\t\t\t\tTERIMA KASIH !!\n\n\n\n\n\n\n\n";
	system("pause");
	return EXIT_SUCCESS;
}