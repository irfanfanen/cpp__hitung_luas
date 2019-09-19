/** Nama   : Irfan Kurniawan
*** NIM    : 181011450114
********************************/

#include<iostream>

using namespace std;

void luas_persegi(int a, int b);
void luas_segitiga(int a, int b);
void luas_lingkaran(int a);

main() {
    menu:
    system("cls");

    char pilihan;

    int pilih,
    P, L,
    A, T,
    J; 

    cout<<"Pilih menu \n";
    cout<<"1. Persegi \n";
    cout<<"2. Segitiga \n";
    cout<<"3. Lingkaran \n";
    cout<<"4. Exit \n";

    cout<<"Masukan Pilihan: "; cin>>pilih;

    if(pilih == 1) {

        cout<<"Hitung Luas Persegi \n";
        cout<<"Masukan Panjang "; cin>>P;
        cout<<"Masukan Lebar "; cin>>L;

        luas_persegi(P, L);

    }else if(pilih == 2){

        cout<<"Hitung Luas Segitiga \n";
        cout<<"Masukan Alas "; cin>>A;
        cout<<"Masukan Tinggi "; cin>>T;

        luas_segitiga(A, T);

    }else if(pilih == 3) {

        cout<<"Hitung Luas Lingkaran \n";
        cout<<"Menghitung Luas Lingkaran"<<endl;
        cout<<"Masukan Jari-jari "; cin>>J;

        luas_lingkaran(J);

    }else if(pilih == 4) {
        exit(0);
    }else {
        cout<<"Pilihan tidak ada \n";
        cout<<"Apakah anda ingin kembali ke menu: [Y/T] \n"; cin>>pilihan;
        if(pilihan == 'Y') {
            goto menu;
        }else{
            exit(0);
        }
    }
}

void luas_persegi(int P, int L) {
    int Luas;
    Luas = P * L;
    cout<<"Luas: = "<<Luas<<endl;    
}

void luas_segitiga(int A, int T) {
    int Luas;
    Luas = 0.5*A*T;
    cout<<"Luas: = "<<Luas<<endl;    
}

void luas_lingkaran(int J) {
    int Luas;
    Luas = 3.14*J*J;
    cout<<"Luas: = "<<Luas<<endl;    
}
