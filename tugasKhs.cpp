#include <iostream>
#include <string>
using namespace std;

string matkul, matkul1, matkul2 ,matkul3, matkul4, matkul5, matkul6;
int sks, sks1, sks2, sks3, sks4, sks5, sks6;
int nilai, nilai1, nilai2, nilai3, nilai4, nilai5, nilai6;
float num, sum, average = 0.0;
string nama, nim, prodi;
bool isTrue = true;

int main () {
    while (isTrue) {

        cout << "Program aplikasi KHS" << endl;
        cout << "Masukkan nama : ";
        getline(cin>>ws,nama);
        cout << "Masukkan NIM : ";
        cin >> nim;
        cout << "Masukkan Prodi : ";
        getline(cin>>ws, prodi);
        cout << endl;
        cout << "Masukkan mata kuliah ke - 1 :";
        cin >> matkul;
        cout << "Masukkan mata kuliah ke - 2 : ";
        cin >> matkul1;
        cout << "Masukkan mata kuliah ke - 3 : ";
        cin >> matkul2;
        cout << "Masukkan mata kuliah ke - 4 : ";
        cin >> matkul3;
        cout << "Masukkan mata kuliah ke - 5 : ";
        cin >> matkul4;
        cout << "Masukkan mata kuliah ke - 6 : ";
        cin >> matkul5;
        cout << "Masukkan mata kuliah ke - 7 : ";
        cin >> matkul6;
        cout << endl;
        cout << "Masukkan jumlah sks per mata kuliah : ";
        cin >> sks;
        cin >> sks1;
        cin >> sks2;
        cin >> sks3;
        cin >> sks4;
        cin >> sks5;
        cin >> sks6;
        cout << endl;
        cout << "Masukkan jumlah nilai per mata kuliah : ";
        cin >> nilai; 
        cin >> nilai1; 
        cin >> nilai2; 
        cin >> nilai3; 
        cin >> nilai4; 
        cin >> nilai5; 
        cin >> nilai6;
        cout << endl;
        sum = nilai + nilai1 + nilai2 + nilai3 + nilai4 + nilai5 + nilai6;
        num = sks + sks1 + sks2 + sks3 + sks4 + sks5 + sks6;
        average = sum / num;

        cout << "==================================================================" << endl;
        cout << "========================KARTU HASIL STUDI=========================" << endl;
        cout << "Nama   : " << nama << endl;
        cout << "Nim    : " << nim << endl;
        cout << "Prodi  : " << prodi << endl;
        cout << endl;
        cout << matkul << "\t" << sks << "\t" << nilai << endl;  
        cout << matkul1 << "\t" << sks1 << "\t" << nilai1 << endl;  
        cout << matkul2 << "\t" << sks2 << "\t" << nilai2 << endl;  
        cout << matkul3 << "\t" << sks3 << "\t" << nilai3 << endl;  
        cout << matkul4 << "\t" << sks4 << "\t" << nilai4 << endl;  
        cout << matkul5 << "\t" << sks5 << "\t" << nilai5 << endl;  
        cout << matkul6 << "\t" << sks6 << "\t" << nilai6 << endl;
        cout << "Total sks nya adalah : " << num << endl;
        cout << "Total nilai nya adalah : " << sum << endl;
        cout << "Rata-rata : " << average << endl;
        char confirm;
        cout << "Hitung ulang? (y/t) ";
        cin >> confirm;
        confirm = toupper(confirm);
        if (confirm == 'Y') {
            cout << "okeyy" << endl;
            continue;
        } else if (confirm == 'T') {
            cout << "makasih";
            break;
        }
    }
    return 0;
}

