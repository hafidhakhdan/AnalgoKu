/*
	Nama	: Hafidh Akhdan N
	Kelas	: A
	NPM		: 140810180061
	Matriks Adjacency
*/

#include <iostream>
using namespace std;

int vertArr[20][20];
int count = 0;

void displayMatrix(int v){
    int i, j;
    for (i = 1; i <= v; i++){
        for (j = 1; j <= v; j++)
        {
            cout << vertArr[i][j] << " ";
        }
        cout << endl;
    }
}

void add_edge(int u, int v){ 
    vertArr[u][v] = 1;
    vertArr[v][u] = 1;
}

int main(int argc, char *argv[]){
    int v;
    cout << "Masukkan jumlah matrix : "; cin >> v;
    
    int pilihan,a,b;
    while(true){
        cout << "1. Tambah edge " << endl;
        cout << "2. Print " << endl;
        cout << "3. Exit " << endl;
        cout << "Masukan pilihan : "; cin >> pilihan;
        if (pilihan==1){
        	cout << "Masukkan node A : "; cin >> a;
                cout << "Masukkan node B : "; cin >> b;
                add_edge(a,b);
                cout << "Edge telah ditambahkan\n";
                system("Pause"); 
                system("CLS");
		} else if(pilihan==2){
			displayMatrix(v);
                system("Pause"); 
                system("CLS"); 
		} else{
			return 0;
		}
    }    
}
