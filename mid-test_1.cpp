/*
Author    : Shalvina Zahwa Aulia
NPM       : 140810180052
Tahun     : 2019
Deskripsi :
*/
#include<iostream>
using namespace std;

struct Lalala {
    char namaMakanan[30];
    int harga;
    int jumlah;
    Lalala* next;
};

typedef Lalala* pointer;
typedef pointer List;

void createList(List& first){
    first=NULL;
}
void createLalala(pointer& pBaru){
    pBaru=new Lalala;
    cout << "Nama Makanan : ";
    cin.ignore();
    cin.getline(pBaru->namaMakanan, 30);
    pBaru->jumlah=0;
    cout << "Jumlah\t : "; cout << pBaru->jumlah << endl;
    cout << "Harga Satuan : "; cin >> pBaru->harga;
    cout << endl;
    pBaru = pBaru->next;
}
void insertLast(List& first, pointer pBaru){
    pointer last;
    if (first == NULL){
        first=pBaru;
    }
    else {
        last=first;
        while (last!=NULL){
            last=last->next;
        }
        last->next=pBaru;
    }
}
void updateMenu (List& first, pointer& pUpdate){
    pointer pCari;
    pCari=first;

    while(pCari!=NULL){
    cout << "Nama\t : " << pCari->namaMakanan;
    cout << "Jumlah\t : "; cin >> pUpdate->jumlah;
    cout << "Harga Satuan : " << pCari->harga;
    }
    pCari=pCari->next;
}

//void sorting (Lis)

int main (){
    pointer p,pU;
    List x;

    createList(x);
    for(int i=0; i<5; i++){
        createLalala(p);
        insertLast(x,p);
    }
    cout << endl;
    updateMenu(x,pU);


}
