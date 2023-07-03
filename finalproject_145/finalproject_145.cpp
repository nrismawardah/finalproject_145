#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return 0; }
	virtual void input() { return 0; }

	void setP(float p) {
		this->presensi = p;
	}

	float getP() {
		return presensi;
	}

	void setA(float a) {
		this->activity = a;
	}

	float getA() {
		return activity;
	}

	void setE(float e) {
		this->exercise = e;
	}

	float getE() {
		return exercise;
	}

	void setUA(float ua) {
		this->tugasAkhir = ua;
	}

	float getUA() {
		return tugasAkhir;
	}
};

class Pemrograman : public MataKuliah {

	void input() {
		float p, a, e, ua;
		cout << "Masukkan nilai Presensi: ";
		cin >> p;
		setP(p);

		cout << "Masukkan nilai Activity: ";
		cin >> a;
		setA(a);

		cout << "Masukkan nilai Exercise: ";
		cin >> e;
		setE(e);

		cout << "Masukkan nilai Tugas Akhir: ";
		cin >> ua;
		setUA(ua);
	}

	float hitungNilaiAkhir() {
		float p = getP();
		float a = getA();
		float e = getE();
		float ua = getUA();
		return (p * 0.1) + (a * 0.2) + (e * 0.3) + (ua * 0.4);
	}

	void cekKelulusan() {
		float nilaiAkhir = hitungNilaiAkhir();
		cout << "Nlai Akhir: " << nilaiAkhir << endl;

		if (nilaiAkhir >= 75) {
			cout << "Selamat, Anda lulus mata kuliah Pemrograman" << endl;
		}
		else {
			cout << "Maaf, Anda belum bisa lulus mata kuliah Pemrograman" << endl;
		}
		return ;
	}
};

int main() {
	Pemrograman pemrograman
		char repeat

		do {
			pemrograman.input();
			pemrograman.cekKelulusan();

			cout << "Ingin mengulang? (y/n): ";
			cin >> repeat;
		} while (repeat == 'y' || repeat == 'Y');

		return 0;
}