#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}

	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class Lingkaran :public bidangDatar {
private:
	int j;
public:
	void input() {
		int j;
		cout << "Masukkan Jejari : ";
		cin >> j;
		setX(j);
	}
	float Luas() {
		int j = getX();
		return 3.14 * j * j;
	}
	float Keliling() {
		int j = getX();
		return 3.14 * 2 * j;
	}
};
class Bujursangkar :public bidangDatar {
private:
	int x;
public:
	void input() {
		int x;
		cout << "Masukkan sisi : ";
		cin >> x;
		setX(x);
	}
	float Luas() {
		int x = getX();
		return x * x ;
	}
	float Keliling() {
		int x = getX();
		return 4 * x;
	}
};

int main() {
	Lingkaran Lingkaran;
	cout << "Lingkaran dibuat: " << endl;
	Lingkaran.input();
	cout << "Luas Lingkaran: " << Lingkaran.Luas() << endl;
	cout << "Keliling Lingkaran: " << Lingkaran.Keliling() << endl;

	Bujursangkar Bujursangkar;
	cout << "Bujursangkar dibuat: " << endl;
	Bujursangkar.input();
	cout << "Luas Bujursangkar: " << Bujursangkar.Luas() << endl;
	cout << "Keliling Bujursangkar: " << Bujursangkar.Keliling() << endl;

	return 0;
}