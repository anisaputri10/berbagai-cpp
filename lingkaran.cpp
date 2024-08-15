// MEMASANG HEADER / LIBRARY                    
#include <iostream>
#include <fstream>
#include <stdio.h>                               
#include <stdlib.h> //- Atof() Digunakan untuk mengonfersi nilai string menjadi bilangan bertipe double. Bentuk umum : atof(char x); - Atoi() 
#include <math.h>// Sqrt  Fungsi akar - Pow Fungsi pangkat - Sin (), cos(), tan() Masing-masing digunakan untuk menghitung nilai sinus, cosinus dan tangens dari suatu sudut. Bentuk umum: Sin(sudut); Cos(sudut); Tan(sudut); - Max Digunakan untuk menghitung hasil pembagian dan sisa pembagian. 
#include <conio.h> //untuk perintah getch ,clrscr dll 
     
using namespace std;
// MENGAWALI PROGRAM
int main (){
	// MENDEKLARASIKAN KONSTANTA DAN/ATAU VARIABEL
    char str[20];
    int i, m, j, n, k, p;
    float data [3],luas, keliling; //float data[x]= x artinya... jika data yg ingin dipanggil berjumlah 2 data, 
						 //maka data[x], x nya itu +1 atau jumlah data yg ingin dipanggil ditambah 1 dlm hal ini (2+1 = 3).. 
						 //jadi pemulisannya menjadi float data[3]
	// MEMASANG NILAI KONSTANTA DAN/ATAU INISIALISASI VARIABEL
    i = 1; //penulisan loop urutannya i,j,k=1 sedangkan m,n,p=jmlh data yg ingin di panggil
    m = 2;
    j = 1;
    n = 2;
    k = 1;
    p = 2;
    luas = 0.0; 

	// MEMBUKA 'INPUT FILE'
    ifstream file_in("kompre_inputlingkaran.txt");

	// JIKA 'INPUT FILE' TIDAK DAPAT DIBUKA, BERITAHU 'ERROR', STOP PROGRAM
    if(!file_in){
		cout << "'INPUT FILE' TIDAK BISA DIBUKA, ERROR, PROGRAM DIHENTIKAN";
		exit (-1); //force closed 
	}
	else
	// MEMBACA DATA PADA 'FILE INPUT'
	{
		while(i <= m){
			file_in.getline(str, 20, '\n'); //membaca baris 1 notepad
			file_in.getline(str, 20, '\n'); //membaca baris 2 notepad
 			data[i] = atof(str); //menyimpan data yg di baca dari notepad
			i = i + 1;//melakukan loop atau mencari data kembali
		}
	}
	// MEMPROSES DATA
    luas=data[1]*(data[2]*data[2]); //menulis rumus fungsi phi=3.14
    keliling=data[1]*(data[2]*2);
     
	// MEMBUKA 'OUTPUT FILE'
    ofstream file_out;
    file_out.open ("kompre_outputlingkaran.txt");

	// JIKA 'OUTPUT FILE' TIDAK DAPAT DIBUKA, BERITAHU 'ERROR', STOP PROGRAM
    if(!file_out){
		cout << "'OUTPUT FILE' TIDAK BISA DIBUKA, ERROR, PROGRAM DIHENTIKAN";
		exit (-1);
	}
     else
	// MENULIS HASIL PADA 'OUTPUT FILE'
	{
		file_out << "Program selesai dieksekusi" << endl;
		file_out << "Hasil Eksekusi Program adalah sebagai berikut :" << endl;
        file_out << "-----------------------------------------------" << endl;
		file_out << endl;
		file_out << endl;
		
		while (k <= p){
			file_out << "Data-" << k << " = " << data[k] << endl; //menghasilkan output data ke- dlm notepad
 			k = k + 1; // loop data ke-
		} 
		file_out << "Luas = " << luas<< endl;//menampilkan output luas = dlm notepad
		file_out << "Keliling = " << keliling<< endl;//menampilkan output luas = dlm notepad
		file_out << endl;
	}

	// MENUTUP 'INPUT FILE' DAN 'OUTPUT FILE'
     file_in.close();
     file_out.close();

	// MENGAKHIRI PROGRAM
    cout << "Program selesai dieksekusi";
    cout << endl;
    cout << "Silahkan hasilnya dilihat pada 'OUTPUT FILE'";
	cout << endl;
	
	getch();
    return 0;
	}
