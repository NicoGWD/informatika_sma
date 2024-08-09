#include <iostream>

using namespace std;

// Array mata pelajaran yang akan dihitung nilai rata-ratanya
const char* mataPelajaran[] = {
    "Matematika",
    "Fisika",
    "Kimia",
    "Biologi",
    "Bahasa Indonesia",
    "Bahasa Inggris",
    "Pendidikan Kewarganegaraan"
};

// Deklarasi fungsi
int hitungRataRata();
bool pertanyaanUlang();
void tampilkanJudul();

int main() {

    // Menampilkan judul program
    tampilkanJudul();

    bool ulang;

    do {
        // Menghitung rata-rata nilai pengetahuan
        cout << "PENGETAHUAN" << endl;
        int rataRataPengetahuan = hitungRataRata();
        cout << "Rata-rata nilai pengetahuan adalah " << rataRataPengetahuan << "." << endl;

        // Menghitung rata-rata nilai keterampilan
        cout << "KETERAMPILAN" << endl;
        int rataRataKeterampilan = hitungRataRata();
        cout << "Rata-rata nilai keterampilan adalah " << rataRataKeterampilan << "." << endl;

        // Menanyakan pengguna untuk mengulangi program
        ulang = pertanyaanUlang();

    } while (ulang == true);

    return 0;
}

// Fungsi menghitung rata-rata nilai setiap mata pelajaran yang ada di array mataPelajaran
int hitungRataRata() {
    int n = sizeof(mataPelajaran) / sizeof(mataPelajaran[0]);

    int rataRata = 0;

    for (int i = 0; i < n; i++) {
        int nilai;
        cout << "Masukkan nilai mata pelajaran " << mataPelajaran[i] << ": ";
        cin >> nilai;

        if (nilai < 0 || nilai > 100) {
            cout << "INPUT TIDAK VALID: Nilai harus berada di antara 0 dan 100!" << endl;
            i--;
            continue;
        }

        rataRata += nilai;
    }

    rataRata /= n;

    return rataRata;
}

// Fungsi mempertanyakan pengguna jika ingin mengulangi program
bool pertanyaanUlang() {
    char input;

    do {
        cout << "\nHitung lagi? (Y/N): ";
        cin >> input;
    } 
    while (input != 'Y' && input != 'y' && input != 'N' && input != 'n');

    if (input == 'Y' || input == 'y') {
        return true;
    } else {
        return false;
    }
}

// Fungsi menampilkan judul program
void tampilkanJudul() {
    cout << R"(
 _  __     _ _          _       _                                  
| |/ /__ _| | | ___   _| | __ _| |_ ___  _ __                      
| ' // _` | | |/ / | | | |/ _` | __/ _ \| '__|                     
| . \ (_| | |   <| |_| | | (_| | || (_) | |                        
|_|\_\__,_|_|_|\_\\__,_|_|\__,_|\__\___/|_|                        
 ____       _              ____       _          _   _ _ _       _ 
|  _ \ __ _| |_ __ _      |  _ \ __ _| |_ __ _  | \ | (_) | __ _(_)
| |_) / _` | __/ _` |_____| |_) / _` | __/ _` | |  \| | | |/ _` | |
|  _ < (_| | || (_| |_____|  _ < (_| | || (_| | | |\  | | | (_| | |
|_|_\_\__,_|\__\__,_|     |_| \_\__,_|\__\__,_| |_| \_|_|_|\__,_|_|
|  _ \ __ _ _ __   ___  _ __                                       
| |_) / _` | '_ \ / _ \| '__|                                      
|  _ < (_| | |_) | (_) | |                                         
|_| \_\__,_| .__/ \___/|_|                                         
           |_|                                                     
<<Program dari Bernard dan Niccola>>
    )" << '\n';
}
