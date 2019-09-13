#include<iostream>

using namespace std;

void persegi(int a, int b);
void segitiga(int a, int b);
void lingkaran(int a);

main() {
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

        cout<<"Luas Persegi \n";
        cout<< "Panjang "; cin>>P;
        cout<<"Lebar "; cin>>L;

        persegi(P, L);

    }else if(pilih == 2){

        cout<<"Luas Segitiga \n";
        cout<<"Alas "; cin>>A;
        cout<<"Tinggi "; cin>>T;

        segitiga(A, T);

    }else if(pilih == 3) {

        cout<<"HituLingkaran \n";
        cout<<"MenghituLingkaran"<<endl;
        cout<<"Jari-jari "; cin>>J;

        lingkaran(J);

    }else {
        exit(0);
    }
}

void persegi(int P, int L) {
    int Luas;
    Luas = P * L;
    cout<<"Luas: = "<<Luas<<endl;    
}

void segitiga(int A, int T) {
    int Luas;
    Luas = 0.5*A*T;
    cout<<"Luas: = "<<Luas<<endl;    
}

void lingkaran(int J) {
    int Luas;
    Luas = 3.14*J*J;
    cout<<"Luas: = "<<Luas<<endl;    
}
