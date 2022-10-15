#include <iostream>
using namespace std;

char confirm;
bool isTrue = true;
char penyakit;
char penyakit1;
char penyakit2;

int main () {
    cout << "APLIKASi DETEKSI PENYAKIT" <<endl;
    while (isTrue) {
        cout << "JAWAB DENGAN (Y/T)" << endl;
        cout << "Apakah anda merasa pusing??" << endl;
        cin >> penyakit;
        penyakit = toupper(penyakit);
        cout << "Apakah anda merasa demam??"<< endl;
        cin >> penyakit1;
        penyakit1 = toupper(penyakit1);
        cout << "Apakah anda batuk-batuk??" << endl;
        cin >> penyakit2;
        penyakit2 = toupper(penyakit2);
        if (penyakit == 'Y' && penyakit1 == 'Y' && penyakit2 == 'Y') {
            cout << "Anda mungkin terkena COVID-19 segera cek!!" << endl;
        } else if (penyakit == 'Y' && penyakit1 == 'Y' && penyakit2 == 'T') {
            cout << "Anda mungkin terkena penyakit demam" << endl;
        } else if (penyakit == 'Y' && penyakit1 == 'T' && penyakit2 == 'T') {
            cout << "Anda mungkin terkena migrain atau sakit kepala" << endl;           
        } else if (penyakit == 'T' && penyakit1 == 'Y' && penyakit2 == 'Y') {
            cout << "Anda mungkin terkena Covid atau flu" << endl;           
        } else if (penyakit == 'T' && penyakit1 == 'Y' && penyakit2 == 'T') {
            cout << "Anda mungkin terkena Demam berdarah atau masuk angin" << endl;           
        } else if (penyakit == 'Y' && penyakit1 == 'T' && penyakit2 == 'Y')  {
            cout << "Anda mungkin terkena virus atau infeksi saluran pernafasan" << endl;           
        } else if (penyakit == 'T' && penyakit1 == 'T' && penyakit2 == 'Y') {
            cout << "Anda mungkin terkena alergi atau infeksi saluran pernafasan" << endl;           
        } else {
            cout << "Anda mungkin terkena migrain atau sakit kepala" << endl;           
        }
        cout << "apakah anda ingin melakukan pengecakan ulang (Y/T)" << endl;
        cin >> confirm;
        confirm = toupper(confirm);
        if (confirm == 'Y') {
            cout << "okee" << endl;
            continue;
        }
        if (confirm == 'T') {
            cout << "Makasih" << endl;
            return 1;
        }
        return 0;
    }
}